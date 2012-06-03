/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MPOAuthParameterFactory.h"
#import "MPOAuthCredentialStore.h"

@class NSMutableDictionary, NSString;

@interface MPOAuthCredentialConcreteStore : XXUnknownSuperclass <MPOAuthCredentialStore, MPOAuthParameterFactory> {
	NSMutableDictionary* _store;
}
@property(retain, nonatomic) NSString* signatureMethod;
@property(readonly, assign, nonatomic) NSString* timestamp;
@property(readonly, assign, nonatomic) NSString* consumerKey;
@property(readonly, assign, nonatomic) NSString* consumerSecret;
@property(retain, nonatomic) NSString* sessionHandle;
@property(retain, nonatomic) NSString* accessTokenSecret;
@property(retain, nonatomic) NSString* accessToken;
@property(retain, nonatomic) NSString* requestTokenSecret;
@property(retain, nonatomic) NSString* requestToken;
@property(readonly, assign, nonatomic) NSString* signingKey;
@property(readonly, assign, nonatomic) NSString* tokenSecret;
-(id)initWithCredentials:(id)credentials;
-(oneway void)dealloc;
-(id)oauthParameters;
-(id)oauthConsumerKeyParameter;
-(id)oauthTokenParameter;
-(id)oauthSignatureMethodParameter;
-(id)oauthTimestampParameter;
-(id)oauthNonceParameter;
-(id)oauthVersionParameter;
@end
