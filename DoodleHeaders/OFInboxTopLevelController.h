/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFTableStaticControllerHelper.h"
#import "DoodleJump-Structs.h"


@interface OFInboxTopLevelController : OFTableStaticControllerHelper {
}
-(void)createCell:(id)cell withTitle:(id)title andIconName:(id)name andBadgeValue:(unsigned)value andCreateSelector:(SEL)selector;
-(id)buildTableSectionDescriptions;
-(void)onCellWasClicked:(id)clicked indexPathInTable:(id)table;
-(id)onInvitations;
-(id)onIMConversations;
-(id)onForumPosts;
-(void)_somethingHappened:(id)happened;
-(void)viewDidLoad;
-(void)dealloc;
@end

