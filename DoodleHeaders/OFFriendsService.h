/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import "OFService.h"


@interface OFFriendsService : OFService {
}
+(id)sharedInstance;
+(void)initializeService;
+(void)shutdownService;
+(id)getUsersFollowedByUser:(id)user params:(OFPointer<OFHttpNestedQueryStringWriter>)params onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)getUsersFollowedByLocalUser:(int)user onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)getInvitableFriends:(int)friends onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(id)getAllUsersFollowedByUserAlphabetical:(id)alphabetical onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)getAllUsersFollowedByLocalUserAlphabetical:(const OFDelegate*)alphabetical onFailure:(const OFDelegate*)failure;
+(id)getAllUsersWithApp:(id)app followedByUser:(id)user alphabeticalOnSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)getUsersFollowedByUser:(id)user pageIndex:(int)index onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)getUsersWithAppFollowedByLocalUser:(id)appFollowedByLocalUser pageIndex:(int)index onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)getUsersWithAppFollowedByUser:(id)appFollowedByUser followedByUser:(id)user pageIndex:(int)index onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)getUsersFollowingLocalUser:(int)user excludeUsersFollowedByTarget:(BOOL)target onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)getUsersFollowingUser:(id)user excludeUsersFollowedByTarget:(BOOL)target pageIndex:(int)index onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(id)makeLocalUserFollow:(id)follow onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(id)makeLocalUserStopFollowing:(id)following onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)removeLocalUsersFollower:(id)follower onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)isLocalUserFollowingAnyone:(const OFDelegate*)anyone onFailure:(const OFDelegate*)failure;
-(void)populateKnownResources:(OFResourceNameMap*)resources;
-(void)onIsLocalUserFollowingAnyoneSuccess:(id)success nextCall:(id)call;
@end

