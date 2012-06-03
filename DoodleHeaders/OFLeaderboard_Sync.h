/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import "OFResource.h"

@class NSString, NSDate;

@interface OFLeaderboard_Sync : OFResource {
	NSString* name;
	BOOL active;
	BOOL allowPostingLowerScores;
	BOOL descendingSortOrder;
	BOOL isAggregate;
	NSDate* reachedAt;
	long long score;
	NSString* endVersion;
	NSString* startVersion;
	BOOL visible;
	NSString* displayText;
	NSString* customData;
}
@property(retain, nonatomic) NSString* name;
@property(readonly, assign, nonatomic) BOOL active;
@property(readonly, assign, nonatomic) BOOL allowPostingLowerScores;
@property(readonly, assign, nonatomic) BOOL descendingSortOrder;
@property(readonly, assign, nonatomic) BOOL isAggregate;
@property(readonly, retain, nonatomic) NSDate* reachedAt;
@property(readonly, assign, nonatomic) long long score;
@property(readonly, retain, nonatomic) NSString* endVersion;
@property(readonly, retain, nonatomic) NSString* startVersion;
@property(readonly, assign, nonatomic) BOOL visible;
@property(readonly, retain, nonatomic) NSString* displayText;
@property(readonly, retain, nonatomic) NSString* customData;
+(id)getService;
+(OFResourceDataMap*)getDataMap;
+(id)getResourceName;
+(id)getResourceDiscoveredNotification;
-(id)initWithLocalSQL:(OFSqlQuery*)localSQL;
-(void)setActive:(id)active;
-(void)setAllowPostingLowerScores:(id)scores;
-(void)setDescendingSortOrder:(id)order;
-(void)setIsAggregate:(id)aggregate;
-(void)setReachedAt:(id)at;
-(void)setScore:(id)score;
-(void)setEndVersion:(id)version;
-(void)setStartVersion:(id)version;
-(void)setDisplayText:(id)text;
-(void)setCustomData:(id)data;
-(void)setVisible:(id)visible;
-(void)dealloc;
@end

