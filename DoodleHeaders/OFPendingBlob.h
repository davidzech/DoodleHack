/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSData, NSString;

@interface OFPendingBlob : XXUnknownSuperclass {
	NSString* leaderboardId;
	long long score;
	NSData* blob;
}
@property(retain, nonatomic) NSString* leaderboardId;
@property(assign, nonatomic) long long score;
@property(retain, nonatomic) NSData* blob;
-(id)initWithLeaderboardId:(id)leaderboardId andScore:(long long)score andBlob:(id)blob;
-(void)dealloc;
@end
