/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFService.h"
#import "DoodleJump-Structs.h"


@interface OFServerNotificationService : OFService {
}
+(id)sharedInstance;
+(void)initializeService;
+(void)shutdownService;
-(id)init;
-(void)dealloc;
-(void)populateKnownResources:(OFResourceNameMap*)resources;
@end

