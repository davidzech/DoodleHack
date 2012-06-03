#import "DoodleHeaders/PlatformObject.h"
#import "DoodleHeaders/MonsterObject.h"
#import "DoodleHeaders/UfoObject.h"
#import <Foundation/Foundation.h>

/* How to Hook with Logos
Hooks are written with syntax similar to that of an Objective-C @implementation.
You don't need to #include <substrate.h>, it will be done automatically, as will
the generation of a class list and an automatic constructor.

%hook ClassName

// Hooking a class method
+ (id)sharedInstance {
	return %orig;
}

// Hooking an instance method with an argument.
- (void)messageName:(int)argument {
	%log; // Write a message about this call, including its class, name and arguments, to the system log.

	%orig; // Call through to the original function with its original arguments.
	%orig(nil); // Call through to the original function with a custom argument.

	// If you use %orig(), you MUST supply all arguments (except for self and _cmd, the automatically generated ones.)
}

// Hooking an instance method with no arguments.
- (id)noArguments {
	%log;
	id awesome = %orig;
	[awesome doSomethingElse];

	return awesome;
}

// Always make sure you clean up after yourself; Not doing so could have grave consequences!
%end
*/

#import "DoodleHeaders/PlatformObject.h"
#import <Foundation/Foundation.h>
#import <substrate.h>


%hook PlatformObject

#define kBreakingPlatform 2
#define kMovingTouchablePlatform 7
#define kNormalPlatform 0
#define kMovingHorzMovingPlatform 1

-(void)setIsFading:(int)fade
{
    %orig(0);
}

-(void)setObjSpeedH:(float)speed
{
	%orig(0.0f);
}

-(void)setObjSpeedV:(float)speed
{
	%orig(0.0f);
}

-(unsigned char)shouldExplode
{
	return 0;
}

-(void)setShouldExplode:(unsigned char)should
{
	%orig(0);
}

%end

@interface JumpAppDelegate

-(void)shootInDirection:(float)direction;

@end

#define square(x) (x * x)
#define hypo(a, b) (sqrt(square(fabs(a.x - b.x)) + square(fabs(a.y - b.y))))
#define r2d(r) (r * 180/M_PI)

BOOL isTouching = NO;

%hook JumpAppDelegate

-(void)application:(id)app didFinishLaunchingWithOptions:(id)options
{
	%orig;
	    UILocalNotification *notif = [[UILocalNotification alloc] init];
    notif.alertBody = @"DoodleHack by Nighthawk Loaded";
    [[UIApplication sharedApplication] presentLocalNotificationNow:notif];
    [notif release];
}

-(void)touchBeganAtPoint:(CGPoint)point
{
    %orig;
    isTouching = YES;
}

-(void)touchEndedAtPoint:(CGPoint)point
{
    %orig;
    isTouching = NO;
}

-(void)drawScreen
{
    NSMutableArray *holes = MSHookIvar<NSMutableArray*>(self, "holeObjectsArray");
    if(holes.count)
    {
        [holes removeAllObjects];
    }
    
    
	%orig;
    if(isTouching == NO) return;
    
	int monsterCount = MSHookIvar<int>(self, "monstersOnScreen");
	//int ufoCount = MSHookIvar<int>(self, "ufosOnScreen");
    NSMutableArray* ufoObjects = MSHookIvar<NSMutableArray*>(self, "ufoObjectsArray");
    if(ufoObjects.count)
    {
        UfoObject *ufo = [ufoObjects objectAtIndex:0];
        CGPoint player = { MSHookIvar<CGFloat>(self, "playerX"), MSHookIvar<CGFloat>(self, "playerY") };
            
        float shortestDistance = hypo(ufo.objPosition, player);
        
        for (UfoObject *u in ufoObjects)
        {
            if(u == ufo) continue;
		if(u.objPosition.y+10 >= player.y) continue;
            if(hypo(u.objPosition, player) < shortestDistance)
                ufo = u;
        }
            
        CGPoint pos = ufo.objPosition;
        pos.x += ufo.objSizeOfType0.width/2;
        double difX = fabs(pos.x - player.x);
        double difY = fabs(pos.y - player.y);
        
        float direction = ((90 - r2d(atan(difY/difX))) / 2.125);
        direction *= (pos.x - player.x < 0) ? -1.0 : 1.0;
        if(direction < 20.0f && direction > -20.0f)
            [self shootInDirection:direction];
        
    }
    else if(monsterCount)
	{
		NSMutableArray *monsters = MSHookIvar<NSMutableArray*>(self, "monsterObjectsArray");
        //NSLog(@"Found %i Monsters", monsters.count);
        if(monsters.count)
        {
				MonsterObject *monster = [monsters objectAtIndex:0];
                CGPoint player = { MSHookIvar<CGFloat>(self, "playerX"), MSHookIvar<CGFloat>(self, "playerY") };
                
                
				double shortestDistance = hypo(monster.objPosition, player);
                
                for (MonsterObject *m in monsters)
                {
                    if(m == monster) continue;
                    double dist = hypo(monster.objPosition, player);
                    if(dist < shortestDistance)
                        {
                            monster = m;
                        }
			
                }
                CGPoint pos = monster.objPosition;
                pos.x += monster.objFrame.size.width/2;
                double difX = fabs(pos.x - player.x);
                double difY = fabs(pos.y - player.y);
                
                float direction = ((90 - r2d(atan(difY/difX))) / 2.125);
                direction *= (pos.x - player.x < 0) ? -1 : 1;
                if(direction < 20.0f && direction > -20.0f)
                    [self shootInDirection:direction];
                    
        }
    }


	
}

%end

%hook MonsterObject

-(id)initWithObjType:(int)objType movingType:(int)type objPosition:(CGPoint)position
{
	NSLog(@"Monster type %i, moving type %i", objType, type);
	return %orig;
}
%end
