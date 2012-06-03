/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import "OFService.h"

@class OFChatRoomInstance;

@interface OFChatRoomInstanceService : OFService {
	OFChatRoomInstance* mLastRoom;
	OFChatRoomInstance* mRoomJoining;
	BOOL mRejoiningRoom;
	double mLastUpdateOfLastRoom;
}
@property(retain) OFChatRoomInstance* lastRoom;
@property(retain) OFChatRoomInstance* roomJoining;
@property(assign) BOOL rejoiningRoom;
+(id)sharedInstance;
+(void)initializeService;
+(void)shutdownService;
+(void)getPage:(int)page forChatRoomDefinition:(id)chatRoomDefinition onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)attemptToJoinRoom:(id)joinRoom rejoining:(BOOL)rejoining onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)loadLastRoomJoined:(const OFDelegate*)joined onFailure:(const OFDelegate*)failure;
+(id)getCachedLastRoomJoined;
-(void)populateKnownResources:(OFResourceNameMap*)resources;
-(double)getTimeSinceLastRoomUpdated;
-(void)_onJoinedChatRoom:(id)room nextCall:(id)call;
-(void)_onLoadedLastJoinedChatRoom:(id)room nextCall:(id)call;
@end
