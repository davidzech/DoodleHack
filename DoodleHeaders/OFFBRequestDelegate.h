/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol OFFBRequestDelegate <NSObject>
@optional
-(void)requestLoading:(id)loading;
-(void)request:(id)request didReceiveResponse:(id)response;
-(void)request:(id)request didFailWithError:(id)error;
-(void)request:(id)request didLoad:(id)load;
-(void)requestWasCancelled:(id)cancelled;
@end

