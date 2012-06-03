/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFViewController.h"
#import "OFBannerProvider.h"
#import "OFCallbackable.h"

@class UIView, UIButton, OFForumPost, OFForumThreadViewController, OFDefaultButton, UILabel, OFPaginatedSeriesHeader;

@interface OFProfileController : OFViewController <OFBannerProvider, OFCallbackable> {
	OFPaginatedSeriesHeader* friendsInfo;
	OFPaginatedSeriesHeader* gamesInfo;
	OFForumPost* reportUserForumPost;
	OFForumThreadViewController* forumThreadView;
	UILabel* friendsSubtextLabel;
	UILabel* gamesSubtextLabel;
	UIView* actionPanelView;
	UIButton* imButton;
	OFDefaultButton* toggleFriendButton;
}
@property(retain) OFForumPost* reportUserForumPost;
@property(retain) OFForumThreadViewController* forumThreadView;
+(id)getProfileControllerForUser:(id)user andNavController:(id)controller;
+(void)showProfileForUser:(id)user;
+(void)showProfileForUserId:(id)userId;
+(void)showProfileForPaginatedSeries:(id)paginatedSeries;
+(void)failedToLoadUser;
+(bool)canReceiveCallbacksNow;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)_updateFriendButtonState:(BOOL)state;
-(void)_profileDownloadSucceeded:(id)succeeded;
-(bool)canReceiveCallbacksNow;
-(bool)isBannerAvailableNow;
-(id)bannerCellControllerName;
-(id)getBannerResource;
-(void)onBannerClicked;
-(void)bannerProfilePictureTouched;
-(void)onFriendsClicked;
-(void)onGamesClicked;
-(void)onFlag;
-(void)onToggleFollowing;
-(void)onFollowChangedState;
-(void)onFollowFailedChangingState;
-(void)onInstantMessage;
-(void)_conversationStarted:(id)started;
-(void)_conversationError;
@end
