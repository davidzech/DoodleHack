/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import "UIWebViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIButton, UIWebView, OFFBSession, NSURL, NSString, UIImageView, UIActivityIndicatorView, UILabel;
@protocol OFFBDialogDelegate;

@interface OFTFBDialog : XXUnknownSuperclass <UIWebViewDelegate> {
	id<OFFBDialogDelegate> _delegate;
	OFFBSession* _session;
	NSURL* _loadingURL;
	UIWebView* _webView;
	UIActivityIndicatorView* _spinner;
	UIImageView* _iconView;
	UILabel* _titleLabel;
	UIButton* _closeButton;
	int _orientation;
	BOOL _showingKeyboard;
}
@property(assign, nonatomic) OFFBSession* session;
@property(assign, nonatomic) id<OFFBDialogDelegate> delegate;
@property(copy, nonatomic) NSString* title;
-(void)addRoundedRectToPath:(CGContextRef)path rect:(CGRect)rect radius:(float)radius;
-(void)drawRect:(CGRect)rect fill:(const float*)fill radius:(float)radius;
-(void)strokeLines:(CGRect)lines stroke:(const float*)stroke;
-(BOOL)shouldRotateToOrientation:(int)orientation;
-(CGAffineTransform)transformForOrientation;
-(void)sizeToFitOrientation:(BOOL)fitOrientation;
-(void)updateWebOrientation;
-(void)bounce1AnimationStopped;
-(void)bounce2AnimationStopped;
-(id)generateURL:(id)url params:(id)params;
-(id)generatePostBody:(id)body;
-(void)addObservers;
-(void)removeObservers;
-(void)postDismissCleanup;
-(void)dismiss:(BOOL)dismiss;
-(void)cancel;
-(id)init;
-(id)initWithSession:(id)session;
-(void)dealloc;
-(void)drawRect:(CGRect)rect;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(unsigned)type;
-(void)webViewDidFinishLoad:(id)webView;
-(void)webView:(id)view didFailLoadWithError:(id)error;
-(void)deviceOrientationDidChange:(void*)deviceOrientation;
-(void)keyboardWillShow:(id)keyboard;
-(void)keyboardWillHide:(id)keyboard;
-(void)show;
-(void)dismissWithSuccess:(BOOL)success animated:(BOOL)animated;
-(void)dismissWithError:(id)error animated:(BOOL)animated;
-(void)load;
-(void)loadURL:(id)url method:(id)method get:(id)get post:(id)post;
-(void)dialogWillAppear;
-(void)dialogWillDisappear;
-(void)dialogDidSucceed:(id)dialog;
@end

