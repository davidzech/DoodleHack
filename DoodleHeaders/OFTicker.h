/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import "OFResource.h"

@class NSString;

@interface OFTicker : OFResource {
	NSString* message;
	NSString* date;
}
@property(readonly, assign, nonatomic) NSString* message;
@property(readonly, assign, nonatomic) NSString* date;
+(id)getService;
+(OFResourceDataMap*)getDataMap;
+(id)getResourceName;
+(id)getResourceDiscoveredNotification;
-(void)setMessage:(id)message;
-(void)setDate:(id)date;
-(void)dealloc;
@end

