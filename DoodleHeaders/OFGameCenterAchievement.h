/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OFCallbackable.h"
#import "DoodleJump-Structs.h"

@class OFPaginatedSeries, NSArray;

@interface OFGameCenterAchievement : XXUnknownSuperclass <OFCallbackable> {
	NSArray* achievementIds;
	NSArray* percentsComplete;
	OFPaginatedSeries* openFeintPage;
	BOOL batch;
	BOOL sync;
	OFDelegate successDelegate;
	OFDelegate failureDelegate;
	unsigned openFeintStatus;
	unsigned gameCenterStatus;
	unsigned gameCenterCount;
}
@property(retain, nonatomic) NSArray* achievementIds;
@property(retain, nonatomic) OFPaginatedSeries* openFeintPage;
@property(assign, nonatomic) BOOL batch;
@property(assign, nonatomic) BOOL sync;
@property(assign, nonatomic) OFDelegate successDelegate;
@property(assign, nonatomic) OFDelegate failureDelegate;
@property(retain, nonatomic) NSArray* percentsComplete;
-(void)dealloc;
-(void)testCompletion;
-(void)onOpenFeintSuccess:(id)success;
-(void)onOpenFeintFailure:(id)failure;
-(id)submitOnSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
-(bool)canReceiveCallbacksNow;
-(id).cxx_construct;
-(void).cxx_destruct;
@end
