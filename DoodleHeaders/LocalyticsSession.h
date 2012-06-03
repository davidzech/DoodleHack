/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "DoodleJump-Structs.h"

@class NSMutableString, NSString, NSDate;

@interface LocalyticsSession : XXUnknownSuperclass {
	BOOL _hasInitialized;
	BOOL _isSessionOpen;
	float _backgroundSessionTimeout;
	NSString* _sessionUUID;
	NSString* _applicationKey;
	double _lastSessionStartTimestamp;
	NSDate* _sessionResumeTime;
	NSDate* _sessionCloseTime;
	NSMutableString* _unstagedFlowEvents;
	NSMutableString* _stagedFlowEvents;
	NSMutableString* _screens;
	double _sessionActiveDuration;
	BOOL _sessionHasBeenOpen;
}
@property(retain, nonatomic) NSString* sessionUUID;
@property(retain, nonatomic) NSString* applicationKey;
@property(assign, nonatomic) double lastSessionStartTimestamp;
@property(retain, nonatomic) NSDate* sessionResumeTime;
@property(retain, nonatomic) NSDate* sessionCloseTime;
@property(assign) BOOL isSessionOpen;
@property(assign) BOOL hasInitialized;
@property(assign) float backgroundSessionTimeout;
@property(retain, nonatomic) NSMutableString* unstagedFlowEvents;
@property(retain, nonatomic) NSMutableString* stagedFlowEvents;
@property(retain, nonatomic) NSMutableString* screens;
@property(assign, nonatomic) double sessionActiveDuration;
@property(assign, nonatomic) BOOL sessionHasBeenOpen;
+(id)sharedLocalyticsSession;
+(id)allocWithZone:(NSZone*)zone;
-(id)init;
-(void)LocalyticsSession:(id)session;
-(void)startSession:(id)session;
-(void)open;
-(void)resume;
-(void)close;
-(void)setOptIn:(BOOL)anIn;
-(BOOL)isOptedIn;
-(void)tagEvent:(id)event;
-(void)tagEvent:(id)event attributes:(id)attributes;
-(void)tagEvent:(id)event attributes:(id)attributes reportAttributes:(id)attributes3;
-(void)tagScreen:(id)screen;
-(void)setCustomDimension:(int)dimension value:(id)value;
-(BOOL)saveApplicationFlowAndRemoveOnResume:(BOOL)resume;
-(void)upload;
-(void)reopenPreviousSession;
-(void)addFlowEventWithName:(id)name type:(id)type;
-(void)addScreenWithName:(id)name;
-(id)blobHeaderStringWithSequenceNumber:(int)sequenceNumber;
-(BOOL)createOptEvent:(BOOL)event;
-(void)logMessage:(id)message;
-(id)customDimensions;
-(id)macAddress;
-(id)hashString:(id)string;
-(id)getRandomUUID;
-(id)formatAttributeWithName:(id)name value:(id)value first:(BOOL)first;
-(id)formatAttributeWithName:(id)name value:(id)value;
-(id)escapeString:(id)string;
-(id)installationId;
-(id)uniqueDeviceIdentifier;
-(id)getAppVersion;
-(double)getTimestamp;
-(BOOL)isDeviceJailbroken;
-(id)getDeviceModel;
-(id)modelSizeString;
-(double)availableMemory;
-(id)copyWithZone:(NSZone*)zone;
-(id)retain;
-(unsigned)retainCount;
-(oneway void)release;
-(id)autorelease;
-(void)dealloc;
@end
