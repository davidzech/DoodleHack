/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OpenFeintDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class OFUserData;

@interface OFManager : XXUnknownSuperclass <OpenFeintDelegate> {
	id activeLeaderboardRequest_;
	BOOL isOFEnabled_;
	BOOL hasDeferredAchievements_;
	BOOL userIsLoggedIn_;
	OFUserData* userData_;
}
+(id)sharedManager;
+(void)loadDependencies;
-(id)init;
-(void)dealloc;
-(void)initWithWindow:(id)window;
-(void)shutdown;
-(BOOL)isEnabled;
-(void)reportScore:(int)score forLeaderboard:(id)leaderboard;
-(void)reportEarnedAchievementWithGCId:(id)gcid withProgress:(double)progress defer:(BOOL)defer;
-(void)reportEarnedAchievementWithGCId:(id)gcid withProgress:(double)progress;
-(void)reportEarnedAchievementWithGCId:(id)gcid;
-(void)submitDeferredAchievements;
-(BOOL)hasDeferredAchievements;
-(id)gameCenterAchievementsMap;
-(id)currentUserId;
-(id)currentUserData;
-(BOOL)isOnline;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)dashboardWillAppear;
-(void)launchDashboard;
-(void)offlineUserLoggedIn:(id)anIn;
-(void)userLoggedIn:(id)anIn;
-(void)userLoggedOut:(id)anOut;
-(BOOL)isUserLoggedIn;
-(void)userLoggedInToGameCenter;
-(void)enableFeintApprovalTimerCallback:(id)callback;
-(BOOL)showCustomOpenFeintApprovalScreen;
-(BOOL)userAttemptingToLogin:(id)login;
-(BOOL)isOpenFeintNotificationAllowed:(id)allowed;
-(void)handleDisallowedNotification:(id)notification;
-(void)notificationWillShow:(id)notification;
-(BOOL)requestFriendsScoreForLeaderboard:(id)leaderboard withDelegate:(id)delegate andUserInfo:(id)info;
-(BOOL)requestScoreForLeaderboard:(id)leaderboard withDelegate:(id)delegate andTimeScope:(int)scope andUserInfo:(id)info;
-(BOOL)requestLocalUserHighScoresForLeaderboard:(id)leaderboard withDelegate:(id)delegate andUserInfo:(id)info;
-(void)didDownloadOFLeaderboard:(id)leaderboard;
-(void)didFailDownloadOFLeaderboard:(id)leaderboard;
-(void)didDownloadLocalLeaderboardHighScores:(id)scores;
-(void)didFailDownloadLocalLeaderboardHighScores:(id)scores;
@end

