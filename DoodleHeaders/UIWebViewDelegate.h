/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol UIWebViewDelegate <NSObject>
@optional
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
-(void)webViewDidStartLoad:(id)webView;
-(void)webViewDidFinishLoad:(id)webView;
-(void)webView:(id)view didFailLoadWithError:(id)error;
@end

