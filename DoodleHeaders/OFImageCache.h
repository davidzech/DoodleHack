/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSMutableArray;

@interface OFImageCache : XXUnknownSuperclass {
	NSMutableDictionary* mCache;
	NSMutableArray* mKeys;
	int mTotalBytes;
}
+(void)initializeCache;
+(void)shutdownCache;
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(int)roughImageSizeInBytes:(id)bytes;
-(id)fetch:(id)fetch;
-(void)store:(id)store withIdentifier:(id)identifier;
-(void)purgeUnreferenced;
-(void)purge;
@end

