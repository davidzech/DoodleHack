/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFService.h"
#import "DoodleJump-Structs.h"


@interface OFUsersCredentialService : OFService {
}
+(id)sharedInstance;
+(void)initializeService;
+(void)shutdownService;
+(id)getIndexOnSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure onlyIncludeNotLinkedCredentials:(bool)credentials onlyIncludeFriendsCredentials:(bool)credentials4;
+(id)getIndexOnSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure onlyIncludeLinkedCredentials:(bool)credentials;
+(void)importFriendsFromCredentialType:(id)credentialType onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)getProfilePictureCredentialsForLocalUserOnSuccess:(const OFDelegate*)localUserOnSuccess onFailure:(const OFDelegate*)failure;
+(void)selectProfilePictureSourceForLocalUser:(id)localUser onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)uploadProfilePictureLocalUser:(id)user onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)requestProfilePictureUpdateForLocalUserOnSuccess:(const OFDelegate*)localUserOnSuccess onFailure:(const OFDelegate*)failure;
-(void)populateKnownResources:(OFResourceNameMap*)resources;
@end

