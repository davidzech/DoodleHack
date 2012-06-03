/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFSelectUserWidgetDelegate.h"
#import "OFViewController.h"
#import "OFCallbackable.h"
#import "DoodleJump-Structs.h"

@class OFSelectUserWidget, OFImageView, UIButton, UILabel;

@interface OFExistingAccountController : OFViewController <OFCallbackable, OFSelectUserWidgetDelegate> {
	BOOL hasBeenDismissed;
	UILabel* appNameLabel;
	UILabel* usernameLabel;
	UILabel* scoreLabel;
	OFImageView* profileImageView;
	OFSelectUserWidget* selectUserWidget;
	UIButton* editButton;
	OFDelegate mOnCompletionDelegate;
}
@property(retain, nonatomic) UILabel* appNameLabel;
@property(retain, nonatomic) UILabel* usernameLabel;
@property(retain, nonatomic) UILabel* scoreLabel;
@property(retain, nonatomic) OFImageView* profileImageView;
@property(retain, nonatomic) OFSelectUserWidget* selectUserWidget;
@property(retain, nonatomic) UIButton* editButton;
+(void)customAnimateNavigationController:(id)controller animateIn:(BOOL)anIn;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(bool)canReceiveCallbacksNow;
-(void)dealloc;
-(void)popBackToMe;
-(void)dismiss;
-(void)onBootstrapFailure;
-(void)continueFlow;
-(void)_ok;
-(void)_thisIsntMe;
-(void)_edit;
-(void)setCompleteDelegate:(OFDelegate*)delegate;
-(void)selectUserWidget:(id)widget didSelectUser:(id)user;
-(id).cxx_construct;
-(void).cxx_destruct;
@end
