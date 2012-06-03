/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFResource.h"
#import "DoodleJump-Structs.h"
#import "NSCoding.h"

@class NSString;

@interface OFGameProfilePageInfo : OFResource <NSCoding> {
	NSString* name;
	NSString* shortName;
	NSString* iconUrl;
	BOOL hasChatRooms;
	BOOL hasLeaderboards;
	BOOL hasAchievements;
	BOOL hasChallenges;
	BOOL hasiPurchase;
	BOOL ownedByLocalPlayer;
	BOOL hasFeaturedApplication;
	NSString* suggestionsForumId;
}
@property(readonly, assign, nonatomic) NSString* name;
@property(readonly, assign, nonatomic) NSString* shortName;
@property(readonly, assign, nonatomic) NSString* iconUrl;
@property(readonly, assign, nonatomic) BOOL hasChatRooms;
@property(readonly, assign, nonatomic) BOOL hasLeaderboards;
@property(readonly, assign, nonatomic) BOOL hasAchievements;
@property(readonly, assign, nonatomic) BOOL hasChallenges;
@property(readonly, assign, nonatomic) BOOL hasiPurchase;
@property(readonly, assign, nonatomic) BOOL ownedByLocalPlayer;
@property(readonly, assign, nonatomic) NSString* suggestionsForumId;
@property(readonly, assign, nonatomic) BOOL hasFeaturedApplication;
+(id)defaultInfo;
+(OFResourceDataMap*)getDataMap;
+(id)getResourceName;
+(id)getResourceDiscoveredNotification;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(BOOL)isLocalGameInfo;
-(void)setName:(id)name;
-(void)setShortName:(id)name;
-(void)setIconUrl:(id)url;
-(void)setHasChatRooms:(id)rooms;
-(void)setHasiPurchase:(id)purchase;
-(void)setHasAchievements:(id)achievements;
-(void)setHasChallenges:(id)challenges;
-(void)setHasLeaderboards:(id)leaderboards;
-(void)setOwnedByLocalPlayer:(id)player;
-(void)setSuggestionsForumId:(id)anId;
-(void)setHasFeaturedApplication:(id)application;
-(void)dealloc;
@end
