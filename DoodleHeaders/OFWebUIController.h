/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OFWebViewManifestDelegate.h"
#import "OFWebUICrashReporterDelegate.h"
#import "UIWebViewDelegate.h"
#import "UINavigationBarDelegate.h"

@class UIView, OFWebUICrashReporter, NSString, UIImageView, UIWebView, UINavigationBar, NSMutableDictionary, OFWebUILoadingView;

@interface OFWebUIController : XXUnknownSuperclass <UIWebViewDelegate, UINavigationBarDelegate, OFWebViewManifestDelegate, OFWebUICrashReporterDelegate> {
	UIWebView* webView;
	UINavigationBar* navBar;
	UIView* navBarBackground;
	OFWebUILoadingView* loadingView;
	UIImageView* transitionImage;
	NSMutableDictionary* actionMap;
	NSString* rootPage;
	NSString* initialPath;
	OFWebUICrashReporter* crashReporter;
	BOOL envIsLoaded;
	BOOL backTriggeredFromCode;
}
@property(retain, nonatomic) UIWebView* webView;
@property(retain, nonatomic) UINavigationBar* navBar;
@property(retain, nonatomic) UIView* navBarBackground;
@property(retain, nonatomic) OFWebUILoadingView* loadingView;
@property(retain, nonatomic) UIImageView* transitionImage;
@property(retain, nonatomic) NSMutableDictionary* actionMap;
@property(copy, nonatomic) NSString* initialPath;
+(id)dpiName;
-(id)initWithRootPage:(id)rootPage andPath:(id)path;
-(id)initWithPath:(id)path;
-(id)initForSpecWithPath:(id)path;
-(void)dealloc;
-(id)navBarBackgroundImage;
-(void)_orderViewDepthsForNavItem:(id)navItem;
-(void)viewDidUnload;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)view;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(BOOL)shouldUnloadViewOnMemoryWarning;
-(void)didReceiveMemoryWarning;
-(id)createLoadingView;
-(void)_loadEnvironment;
-(id)_clientBootJSON;
-(void)_reenableBarButton;
-(void)didTapBarButton;
-(void)setPageTitle:(id)title forNavItem:(id)navItem;
-(id)environmentData;
-(id)currentUserData;
-(id)currentDeviceData;
-(id)currentGameData;
-(id)actions;
-(id)executeJavascript:(id)javascript;
-(id)unescapeUrlEncoding:(id)encoding;
-(id)escapeUrlEncoding:(id)encoding;
-(id)jsonifyPath:(id)path;
-(id)_generateTransitionImage;
-(void)_animateTransition:(BOOL)transition;
-(void)animatePush;
-(void)animatePop;
-(void)crashReporterFinished;
-(void)webViewCacheItemReady:(id)ready;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(unsigned)type;
-(void)webView:(id)view didFailLoadWithError:(id)error;
-(void)webViewDidFinishLoad:(id)webView;
-(BOOL)navigationBar:(id)bar shouldPopItem:(id)item;
-(void)mapAction:(id)action toSelector:(SEL)selector;
-(id)optionsForAction:(id)action;
-(void)_accumulateQueryParametersForDictionary:(id)dictionary withPrefix:(id)prefix intoArray:(id)array;
-(void)_accumulateQueryParametersForArray:(id)array withPrefix:(id)prefix intoArray:(id)array3;
-(id)queryStringForOptions:(id)options;
-(void)dispatchAction:(id)action;
-(void)dispatchAction:(id)action options:(id)options;
-(void)actionBatch:(id)batch;
-(void)actionLog:(id)log;
-(void)actionStartLoading:(id)loading;
-(void)actionContentLoaded:(id)loaded;
-(void)actionBack:(id)back;
-(void)actionShowLoader:(id)loader;
-(void)actionHideLoader:(id)loader;
-(void)actionAddBarButton:(id)button;
-(void)actionAlert:(id)alert;
-(void)actionConfirm:(id)confirm;
-(void)actionChoose:(id)choose;
-(void)actionReload:(id)reload;
-(void)actionDismiss:(id)dismiss;
-(void)actionApiRequest:(id)request;
-(void)actionWriteSetting:(id)setting;
-(void)actionReadSetting:(id)setting;
-(void)replaceFlow:(id)flow;
-(void)showLoadingScreen;
-(void)loadView;
@end

