/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import "OFCustomBottomView.h"
#import "OFTableSequenceControllerHelper.h"
#import "OFKeyboardAdjustment.h"

@class OFChatRoomInstance, OFChatRoomMessageBoxController;

@interface OFChatRoomController : OFTableSequenceControllerHelper <OFCustomBottomView, OFKeyboardAdjustment> {
	OFChatRoomMessageBoxController* mChatRoomMessageBoxController;
	bool mIsKeyboardShown;
	bool mHasAppearedBefore;
	bool mRoomIsFull;
	bool mIsChangingName;
	bool mDidScrollToBottom;
	OFChatRoomInstance* roomInstance;
	float mViewOriginYWithoutKeyboardiPad;
}
@property(retain, nonatomic) OFChatRoomInstance* roomInstance;
-(id)getBottomView;
-(void)setTopBarsVisible:(BOOL)visible;
-(float)_keyboardAdjustment;
-(void)_KeyboardWillShow:(id)_Keyboard;
-(void)_KeyboardWillHide:(id)_Keyboard;
-(void)rejoinRoom;
-(void)onRejoinedRoom;
-(void)onFailedToRejoinRoom;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)dealloc;
-(void)populateResourceMap:(OFResourceControllerMap*)map;
-(id)getService;
-(void)onResourcesDownloaded:(id)downloaded;
-(id)getTableHeaderControllerName;
-(id)getNoDataFoundMessage;
-(bool)shouldRefreshAfterNotification;
-(id)getNotificationToRefreshAfter;
-(bool)isNewContentShownAtBottom;
-(void)doIndexActionOnSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
@end

