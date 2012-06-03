/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFTableCellHelper.h"

@class OFImageView, UIImageView, OFBadgeView, UIButton, UILabel;

@interface OFInboxCell : OFTableCellHelper {
	UILabel* typeLabel;
	UILabel* titleLabel;
	UILabel* bodyPreviewLabel;
	UIImageView* iconView;
	OFImageView* profilePictureView;
	UIButton* expandButton;
	OFBadgeView* unreadBadge;
	float cachedTitleMaxHeight;
	float cachedBodyMaxHeight;
}
-(void)dealloc;
-(void)fixupExpandIcon;
-(void)layoutSubviews;
-(void)awakeFromNib;
-(void)onResourceChanged:(id)changed;
-(void)toggleExpansion;
@end

