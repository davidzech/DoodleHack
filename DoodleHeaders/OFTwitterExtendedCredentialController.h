/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import "OFExtendedCredentialController.h"
#import "OFFormControllerHelper.h"


@interface OFTwitterExtendedCredentialController : OFFormControllerHelper <OFExtendedCredentialController> {
	OFDelegate onSuccess;
	OFDelegate onFailure;
	OFDelegate onCancel;
}
-(void)awakeFromNib;
-(void)viewWillAppear:(BOOL)view;
-(void)getExtendedCredentials:(const OFDelegate*)credentials onFailure:(const OFDelegate*)failure onCancel:(const OFDelegate*)cancel;
-(void)whenDismissedSuccessfullyAnimate:(BOOL)animate;
-(id)getFormSubmissionUrl;
-(id)singularResourceName;
-(void)populateViewDataMap:(OFViewDataMap*)map;
-(void)addHiddenParameters:(OFISerializer*)parameters;
-(void)dismiss;
-(void)onPresentingErrorDialog;
-(void)onFormSubmitted:(id)submitted;
-(void)cancel;
-(void)registerActionsNow;
-(bool)canReceiveCallbacksNow;
-(void)dealloc;
-(id).cxx_construct;
-(void).cxx_destruct;
@end
