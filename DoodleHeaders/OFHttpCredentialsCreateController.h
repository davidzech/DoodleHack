/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFAccountSetupBaseController.h"
#import "DoodleJump-Structs.h"


@interface OFHttpCredentialsCreateController : OFAccountSetupBaseController {
}
-(bool)shouldUseOAuth;
-(void)populateViewDataMap:(OFViewDataMap*)map;
-(void)addHiddenParameters:(OFISerializer*)parameters;
-(void)registerActionsNow;
-(id)singularResourceName;
-(id)getFormSubmissionUrl;
-(id)controllerToPushOnCompletion;
-(void)onFormSubmitted:(id)submitted;
@end

