/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString, NSMutableArray;

@interface OFPollerResourceType : XXUnknownSuperclass {
	NSMutableArray* mNewResources;
	long long mLastSeenId;
	NSString* mName;
	NSString* mIdParameterName;
	NSString* mDiscoveryNotification;
}
@property(assign, nonatomic) long long lastSeenId;
@property(retain, nonatomic) NSString* name;
@property(retain, nonatomic) NSString* idParameterName;
@property(retain, nonatomic) NSString* discoveryNotification;
@property(retain, nonatomic) NSArray* newResources;
-(id)initWithName:(id)name andDiscoveryNotification:(id)notification;
-(void)dealloc;
-(void)addResource:(id)resource;
-(void)markNewResourcesOld;
-(void)clearLastSeenId;
-(void)forceLastSeenId:(long long)anId;
@end

