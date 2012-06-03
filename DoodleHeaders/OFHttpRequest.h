/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "DoodleJump-Structs.h"

@class NSHTTPURLResponse, NSData, NSString, NSMutableData, NSURLConnection;

@interface OFHttpRequest : XXUnknownSuperclass {
	NSString* mRequestPath;
	NSString* mRequestMethod;
	NSHTTPURLResponse* mHttpResponse;
	NSMutableData* mReceivedData;
	NSURLConnection* mURLConnection;
	NSString* mBaseUrl;
	OFRetainedPtr<NSString> mPassword;
	OFRetainedPtr<NSString> mEmail;
	bool mIsRequestInProgress;
	OFHttpRequestObserver* mObserver;
	bool mHandleCookies;
}
@property(readonly, assign, nonatomic) NSURLConnection* url;
@property(readonly, assign, nonatomic) NSData* data;
@property(readonly, assign, nonatomic) NSString* contentType;
@property(readonly, assign, nonatomic) NSString* contentDisposition;
@property(readonly, assign, nonatomic) NSString* urlPath;
@property(readonly, assign, nonatomic) NSString* httpMethod;
+(id)httpRequestWithBase:(id)base withObserver:(OFHttpRequestObserver*)observer;
+(id)httpRequestWithBase:(id)base withObserver:(OFHttpRequestObserver*)observer withCookies:(bool)cookies;
+(bool)hasCookies:(id)cookies;
+(int)countCookies:(id)cookies;
+(id)getCookies:(id)cookies;
+(void)addCookies:(id)cookies withBase:(id)base;
-(void)startRequestWithPath:(id)path withMethod:(id)method withBody:(id)body withEmail:(id)email withPassword:(id)password multiPartBoundary:(id)boundary;
-(void)startRequestWithPath:(id)path withMethod:(id)method withBody:(id)body;
-(id)initWithBaseUrl:(id)baseUrl withObserver:(OFHttpRequestObserver*)observer;
-(void)changeObserver:(OFHttpRequestObserver*)observer;
-(id)initWithBaseUrl:(id)baseUrl withObserver:(OFHttpRequestObserver*)observer withCookies:(bool)cookies;
-(id)getResponse;
-(bool)hasCookies;
-(int)countCookies;
-(id)getCookies;
-(void)addCookies:(id)cookies;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;
-(void)connectionDidFinishLoading:(id)connection;
-(id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;
-(id)connection:(id)connection willCacheResponse:(id)response;
-(void)_releaseConnectionResources;
-(void)dealloc;
-(id)sanitizeString:(id)string;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)cancelImmediately;
-(id).cxx_construct;
-(void).cxx_destruct;
@end

