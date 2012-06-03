/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import "OFResource.h"
#import "OFCallbackable.h"

@class OFUser, NSString, OFChallenge;

@interface OFChallengeToUser : OFResource <OFCallbackable> {
	OFChallenge* challenge;
	OFUser* recipient;
	int result;
	NSString* resultDescription;
	unsigned attempts;
	BOOL isCompleted;
	BOOL hasBeenViewed;
	BOOL hasDecrementedChallengeCount;
}
@property(readonly, assign, nonatomic) OFChallenge* challenge;
@property(assign, nonatomic) int result;
@property(retain, nonatomic) NSString* resultDescription;
@property(readonly, assign, nonatomic) OFUser* recipient;
@property(assign, nonatomic) BOOL isCompleted;
@property(readonly, assign, nonatomic) BOOL hasBeenViewed;
@property(readonly, assign, nonatomic) unsigned attempts;
@property(assign, nonatomic) BOOL hasDecrementedChallengeCount;
@property(readonly, assign, nonatomic) NSString* formattedResultDescription;
+(void)setDelegate:(id)delegate;
+(id)readFromFile:(id)file;
+(id)getChallengeResultIconName:(int)name;
+(id)getService;
+(OFResourceDataMap*)getDataMap;
+(id)getResourceName;
+(id)getResourceDiscoveredNotification;
-(id)completeWithResult:(int)result;
-(id)reject;
-(void)displayCompletionWithData:(id)data reChallengeDescription:(id)description;
-(void)writeToFile:(id)file;
-(void)_completeSuccess;
-(void)_completeFail;
-(void)_rejectSuccess;
-(void)_rejectFail;
-(void)setResultFromString:(id)string;
-(void)setNumAttempts:(id)attempts;
-(void)setIsCompletedFromString:(id)string;
-(void)setHasBeenViewed:(id)viewed;
-(void)setChallenge:(id)challenge;
-(void)setRecipient:(id)recipient;
-(id)getIsCompletedAsString;
-(id)getHasBeenViewedAsString;
-(id)getNumAttemptsAsString;
-(id)getResultAsString;
-(id)getChallenge;
-(id)getRecipient;
-(bool)canReceiveCallbacksNow;
-(void)dealloc;
@end

