/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ASIFormDataRequest.h"
#import "ExtendedRequest.h"

@class OFXPRequest;

@interface ExtendedFormRequest : ASIFormDataRequest <ExtendedRequest> {
	OFXPRequest* xpRequest;
}
-(void)setXPRequest:(id)request;
-(void)requestFinished;
@end

