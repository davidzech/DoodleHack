/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface OFDelegateChained : XXUnknownSuperclass {
	OFDelegate mChainedDelegate;
}
+(id)delegateWith:(const OFDelegate*)with;
-(id)initWith:(const OFDelegate*)with;
-(void)invoke;
-(void)invokeWith:(id)with;
-(void)invokeWith:(id)with andDelay:(double)delay;
-(id).cxx_construct;
-(void).cxx_destruct;
@end

