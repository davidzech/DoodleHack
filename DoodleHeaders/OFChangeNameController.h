/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFProfileFrame.h"
#import "DoodleJump-Structs.h"
#import "OFFormControllerHelper.h"

@class NSString, UILabel;

@interface OFChangeNameController : OFFormControllerHelper <OFProfileFrame> {
	UILabel* currentNameLabel;
	NSString* nameAttemptingToClaim;
}
@property(retain, nonatomic) UILabel* currentNameLabel;
-(void)populateViewDataMap:(OFViewDataMap*)map;
-(void)viewWillAppear:(BOOL)view;
-(void)onBeforeFormSubmitted;
-(void)addHiddenParameters:(OFISerializer*)parameters;
-(void)registerActionsNow;
-(void)onFormSubmitted:(id)submitted;
-(id)singularResourceName;
-(id)getFormSubmissionUrl;
-(id)getHTTPMethod;
-(void)dealloc;
@end

