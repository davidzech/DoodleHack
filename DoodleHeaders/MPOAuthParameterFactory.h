/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"

@class NSString;

@protocol MPOAuthParameterFactory <NSObject>
@property(retain, nonatomic) NSString* signatureMethod;
@property(readonly, assign, nonatomic) NSString* signingKey;
@property(readonly, assign, nonatomic) NSString* timestamp;
-(id)oauthParameters;
-(id)oauthConsumerKeyParameter;
-(id)oauthTokenParameter;
-(id)oauthSignatureMethodParameter;
-(id)oauthTimestampParameter;
-(id)oauthNonceParameter;
-(id)oauthVersionParameter;
@end

