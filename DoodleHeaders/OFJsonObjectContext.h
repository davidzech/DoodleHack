/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSString;

@interface OFJsonObjectContext : XXUnknownSuperclass {
	id object;
	NSString* unresolvedKey;
	NSMutableDictionary* klassInfo;
	BOOL shouldIgnoreNextMapStart;
	BOOL shouldIgnoreNextMapEnd;
}
@property(retain, nonatomic) id object;
@property(retain, nonatomic) NSString* unresolvedKey;
@property(retain, nonatomic) NSMutableDictionary* klassInfo;
@property(assign, nonatomic) BOOL shouldIgnoreNextMapStart;
@property(assign, nonatomic) BOOL shouldIgnoreNextMapEnd;
+(id)context;
-(void)dealloc;
@end

