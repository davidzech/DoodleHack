/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFJsonCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface OFParentalControls : XXUnknownSuperclass <OFJsonCoding> {
	BOOL enabled;
}
@property(assign, nonatomic) BOOL enabled;
+(void)load;
+(id)classNameForJsonCoding;
+(void)registerJsonValueTypesForDecoding:(id)decoding;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)encodeWithJsonCoder:(id)jsonCoder;
@end

