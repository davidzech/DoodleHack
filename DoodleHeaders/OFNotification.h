/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class OFNotificationData, NSString;

@interface OFNotification : XXUnknownSuperclass {
	OFNotificationData* defaultBackgroundNotice;
	NSString* defaultStatus;
}
@property(retain, nonatomic) OFNotificationData* defaultBackgroundNotice;
@property(retain, nonatomic) NSString* defaultStatus;
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)allowNotice:(id)notice;
-(void)handleDisallowedNotification:(id)notification;
-(void)onNotificationWillShow:(id)onNotification;
-(void)showBackgroundNoticeForLoader:(id)loader withNotice:(id)notice;
-(void)showBackgroundNotice:(id)notice andStatus:(id)status;
-(void)showAchievementNotice:(id)notice andPercentComplete:(double)complete;
-(void)showChallengeNotice:(id)notice;
-(void)showServerNotification:(id)notification;
-(void)setDefaultBackgroundNotice:(id)notice andStatus:(id)status;
-(void)showDefaultNotice;
-(void)clearDefaultNotice;
@end

