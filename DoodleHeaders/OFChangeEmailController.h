/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFProfileFrame.h"
#import "DoodleJump-Structs.h"
#import "OFFormControllerHelper.h"

@class UITextField, NSString, UILabel;

@interface OFChangeEmailController : OFFormControllerHelper <OFProfileFrame> {
	UILabel* currentEmailLabel;
	UITextField* newEmailField;
	NSString* emailAttemptingToClaim;
}
@property(retain, nonatomic) UILabel* currentEmailLabel;
@property(retain, nonatomic) UITextField* newEmailField;
-(void)populateViewDataMap:(OFViewDataMap*)map;
-(void)viewWillAppear:(BOOL)view;
-(void)onGetEmailSuccess:(id)success;
-(void)onGetEmailFailure:(id)failure;
-(void)onBeforeFormSubmitted;
-(void)addHiddenParameters:(OFISerializer*)parameters;
-(void)registerActionsNow;
-(void)onFormSubmitted:(id)submitted;
-(id)singularResourceName;
-(id)getFormSubmissionUrl;
-(id)getHTTPMethod;
-(void)dealloc;
@end
