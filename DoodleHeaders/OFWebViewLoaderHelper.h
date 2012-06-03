/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableData, OFWebViewCacheLoader, NSString;

@interface OFWebViewLoaderHelper : XXUnknownSuperclass {
	OFWebViewCacheLoader* loader;
	unsigned httpStatus;
	NSMutableData* httpData;
	NSString* path;
}
@property(retain, nonatomic) OFWebViewCacheLoader* loader;
@property(assign, nonatomic) unsigned httpStatus;
@property(retain, nonatomic) NSMutableData* httpData;
@property(retain, nonatomic) NSString* path;
-(id)initWithPath:(id)path loader:(id)loader;
-(void)dealloc;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connectionDidFinishLoading:(id)connection;
-(id)connection:(id)connection willCacheResponse:(id)response;
@end

