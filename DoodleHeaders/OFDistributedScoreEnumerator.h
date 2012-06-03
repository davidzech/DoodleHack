/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OFCallbackable.h"

@class OFRequestHandle, NSMutableDictionary, NSString, NSArray;

@interface OFDistributedScoreEnumerator : XXUnknownSuperclass <OFCallbackable> {
	int pageSize;
	int currentPage;
	int scoreDelta;
	int startScore;
	int lastPage;
	NSMutableDictionary* scores;
	NSString* leaderboardId;
	OFRequestHandle* activeRequest;
}
@property(readonly, assign, nonatomic) int pageSize;
@property(readonly, assign, nonatomic) int currentPage;
@property(readonly, assign, nonatomic) int scoreDelta;
@property(readonly, assign, nonatomic) int startScore;
@property(retain, nonatomic) OFRequestHandle* activeRequest;
@property(readonly, assign, nonatomic) NSArray* scores;
@property(readonly, assign, nonatomic) BOOL hasScores;
+(void)setDelegate:(id)delegate;
+(id)scoreEnumeratorForLeaderboard:(id)leaderboard pageSize:(int)size scoreDelta:(int)delta startScore:(int)score delegate:(id)delegate;
-(id)initWithLeaderboardId:(id)leaderboardId pageSize:(int)size scoreDelta:(int)delta startScore:(int)score delegate:(id)delegate;
-(void)dealloc;
-(void)setCurrentPage:(int)page;
-(BOOL)nextPage;
-(BOOL)previousPage;
-(void)jumpToPage:(int)page;
-(void)callSuccessDelegate;
-(void)_downloadFinished:(id)finished;
-(void)_downloadFailed;
-(bool)canReceiveCallbacksNow;
@end

