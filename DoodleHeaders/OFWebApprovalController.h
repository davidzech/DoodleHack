/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFWebViewController.h"
#import "DoodleJump-Structs.h"

@class NSTimer;

@interface OFWebApprovalController : OFWebViewController {
	OFDelegate mApprovedDelegate;
	OFDelegate mDeniedDelegate;
	NSTimer* loadingTimeoutTimer;
	BOOL isShown;
	BOOL isLoaded;
}
-(void)loadWebContent;
-(id)getAction;
-(id)getTitle;
-(void)setApprovedDelegate:(const OFDelegate*)delegate andDeniedDelegate:(const OFDelegate*)delegate2;
-(id)getDispatchDictionary;
-(void)_webActionApprove;
-(void)_webActionDecline;
-(void)webView:(id)view didFailLoadWithError:(id)error;
-(void)switchToNativeIfNotYetLoaded;
-(void)webViewDidFinishLoad:(id)webView;
-(void)webViewDidFinishDelayedLoad:(id)webView;
-(void)show;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)dealloc;
-(id).cxx_construct;
-(void).cxx_destruct;
@end
