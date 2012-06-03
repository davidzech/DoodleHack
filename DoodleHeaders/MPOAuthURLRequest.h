/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURLRequest, NSURL, NSString, NSMutableArray;

@interface MPOAuthURLRequest : XXUnknownSuperclass {
	NSURL* _url;
	NSString* _httpMethod;
	NSURLRequest* _urlRequest;
	NSMutableArray* _parameters;
}
@property(retain, nonatomic) NSURL* url;
@property(retain, nonatomic) NSString* HTTPMethod;
@property(retain, nonatomic) NSURLRequest* urlRequest;
@property(retain, nonatomic) NSMutableArray* parameters;
-(id)initWithURL:(id)url andParameters:(id)parameters;
-(oneway void)dealloc;
-(id)getBoundaryMarkerStart;
-(id)getBoundaryMarkerEnd;
-(id)createMultipartFormContent:(id)content;
-(id)urlRequestSignedWithSecret:(id)secret usingMethod:(id)method withExtraParameters:(id)extraParameters;
-(id)urlRequestSignedWithSecret:(id)secret usingMethod:(id)method;
-(void)addParameters:(id)parameters;
@end

