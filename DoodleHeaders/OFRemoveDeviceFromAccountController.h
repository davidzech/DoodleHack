/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import "UIActionSheetDelegate.h"
#import "OFFormControllerHelper.h"
#import "OFCallbackable.h"

@class UILabel;

@interface OFRemoveDeviceFromAccountController : OFFormControllerHelper <OFCallbackable, UIActionSheetDelegate> {
	UILabel* warningText;
	UILabel* titleLabel;
}
@property(retain, nonatomic) UILabel* warningText;
@property(retain, nonatomic) UILabel* titleLabel;
-(void)dealloc;
-(bool)canReceiveCallbacksNow;
-(id)getFormSubmissionUrl;
-(void)registerActionsNow;
-(id)singularResourceName;
-(id)getHTTPMethod;
-(void)addHiddenParameters:(OFISerializer*)parameters;
-(void)onFormSubmitted:(id)submitted;
-(void)viewWillAppear:(BOOL)view;
-(void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;
@end

