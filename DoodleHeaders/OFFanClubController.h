/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFBannerProvider.h"
#import "OFTableStaticControllerHelper.h"
#import "DoodleJump-Structs.h"


@interface OFFanClubController : OFTableStaticControllerHelper <OFBannerProvider> {
	BOOL registeredView;
}
-(id)init;
-(void)dealloc;
-(void)createCell:(id)cell withTitle:(id)title andIconName:(id)name andControllerName:(id)name4 andCreateSelector:(SEL)selector;
-(void)createSuggestionBrowser;
-(void)createDeveloperRecommendationsBrowser;
-(void)inviteFriends;
-(id)buildTableSectionDescriptions;
-(void)onCellWasClicked:(id)clicked indexPathInTable:(id)table;
-(void)viewWillAppear:(BOOL)view;
-(bool)isBannerAvailableNow;
-(id)bannerCellControllerName;
-(id)getBannerResource;
-(void)onBannerClicked;
@end

