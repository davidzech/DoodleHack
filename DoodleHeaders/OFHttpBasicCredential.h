/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import "OFResource.h"
#import "NSCoding.h"

@class NSString;

@interface OFHttpBasicCredential : OFResource <NSCoding> {
	NSString* userId;
	NSString* email;
	NSString* cryptedPassword;
	NSString* salt;
	BOOL rememberToken;
	NSString* rememberTokenExpiresAt;
	NSString* createdAt;
	NSString* updatedAt;
	BOOL verified;
	NSString* lastLoginAt;
}
@property(readonly, retain, nonatomic) NSString* userId;
@property(readonly, retain, nonatomic) NSString* email;
@property(readonly, retain, nonatomic) NSString* cryptedPassword;
@property(readonly, retain, nonatomic) NSString* salt;
@property(assign, nonatomic) BOOL rememberToken;
@property(assign, nonatomic) BOOL verified;
@property(readonly, retain, nonatomic) NSString* rememberTokenExpiresAt;
@property(readonly, retain, nonatomic) NSString* createdAt;
@property(readonly, retain, nonatomic) NSString* updatedAt;
@property(readonly, retain, nonatomic) NSString* lastLoginAt;
+(OFResourceDataMap*)getDataMap;
+(id)getResourceName;
+(id)getResourceDiscoveredNotification;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)setUserId:(id)anId;
-(void)setEmail:(id)email;
-(void)setCryptedPassword:(id)password;
-(void)setSalt:(id)salt;
-(void)setRememberTokenExpiresAt:(id)at;
-(void)setCreatedAt:(id)at;
-(void)setUpdatedAt:(id)at;
-(void)setLastLoginAt:(id)at;
-(id)getRememberTokenAsString;
-(id)getVerifiedAsString;
-(void)setRememberTokenAsString:(id)string;
-(void)setVerifiedAsString:(id)string;
-(void)dealloc;
@end

