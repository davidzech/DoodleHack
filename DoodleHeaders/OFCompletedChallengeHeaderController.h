/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFViewController.h"
#import "OFCallbackable.h"
#import "OFTableControllerHeader.h"

@class OFSendChallengeController, OFChallengeDetailFrame, OFDefaultButton, UILabel, OFDefaultTextField;

@interface OFCompletedChallengeHeaderController : OFViewController <OFTableControllerHeader, OFCallbackable> {
	OFSendChallengeController* sendChallengeController;
	OFChallengeDetailFrame* challengeDescriptionContainer;
	OFDefaultButton* actionButton;
	OFDefaultTextField* userMessageTextField;
	UILabel* personalMessageLabel;
	SEL action;
	id target;
}
@property(assign, nonatomic) OFSendChallengeController* sendChallengeController;
@property(retain, nonatomic) OFChallengeDetailFrame* challengeDescriptionContainer;
@property(retain, nonatomic) OFDefaultButton* actionButton;
@property(retain, nonatomic) OFDefaultTextField* userMessageTextField;
@property(retain, nonatomic) UILabel* personalMessageLabel;
-(void)dealloc;
-(void)viewDidLoad;
-(void)cancel;
-(void)tryAgainPressed;
-(void)setChallenge:(id)challenge;
-(void)onActionButtonPressed;
-(bool)canReceiveCallbacksNow;
-(void)resizeView:(id)view;
@end
