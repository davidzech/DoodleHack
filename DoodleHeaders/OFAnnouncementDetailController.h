/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFForumThreadViewController.h"
#import "DoodleJump-Structs.h"

@class OFForumPost, UIView, UIButton, UILabel;

@interface OFAnnouncementDetailController : OFForumThreadViewController {
	OFForumPost* firstPost;
	BOOL showCloseButton;
	UILabel* titleLabel;
	UILabel* bodyLabel;
	UIView* bodyWrapperView;
	UIView* detailWrapperView;
	UIView* headerToolbarView;
	UILabel* discussionLabel;
	UIButton* buyButton;
}
@property(assign, nonatomic) BOOL showCloseButton;
+(id)announcementDetail:(id)detail;
-(void)dealloc;
-(void)segmentTapped:(id)tapped;
-(void)viewWillAppear:(BOOL)view;
-(void)onSectionsCreated:(id)created;
-(BOOL)usesHeaderResource;
-(unsigned)getHeaderResourceSectionIndex;
-(void)onHeaderResourceDownloaded:(id)downloaded;
-(void)populateResourceMap:(OFResourceControllerMap*)map;
-(id)getService;
-(id)getNoDataFoundMessage;
-(id)getNoDataFoundViewController;
-(void)onTableFooterCreated:(id)created;
-(id)getTableHeaderViewName;
-(void)onTableHeaderCreated:(id)created;
-(void)doIndexActionWithPage:(unsigned)page onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
-(void)doIndexActionOnSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
-(BOOL)shouldEnableNextButtonWithSection:(id)section indexPath:(id)path;
-(void)pressedBuy;
@end
