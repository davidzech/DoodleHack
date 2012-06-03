/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSArray, OAToken, OAConsumer;
@protocol OASignatureProviding;

@interface OAMutableURLRequest : XXUnknownSuperclass {
	OAConsumer* consumer;
	OAToken* token;
	NSString* realm;
	NSString* signature;
	id<OASignatureProviding> signatureProvider;
	NSString* nonce;
	NSString* timestamp;
}
@property(readonly, assign) NSString* signature;
@property(readonly, assign) NSString* nonce;
@property(retain, nonatomic) NSArray* parameters;
-(id)initWithURL:(id)url consumer:(id)consumer token:(id)token realm:(id)realm signatureProvider:(id)provider;
-(id)initWithURL:(id)url consumer:(id)consumer token:(id)token realm:(id)realm signatureProvider:(id)provider nonce:(id)nonce timestamp:(id)timestamp;
-(void)dealloc;
-(void)prepare;
-(void)_generateTimestamp;
-(void)_generateNonce;
-(id)_signatureBaseString;
-(id)URLStringWithoutQueryFromURL:(id)url;
-(id)URLEncodedString:(id)string;
@end

