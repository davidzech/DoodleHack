/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFTableCellHelper.h"

@class OFImageView, UIImageView, UIView, UILabel;

@interface OFGameDiscoveryCategoryCell : OFTableCellHelper {
	OFImageView* iconView;
	UIImageView* iconFrame;
	UIView* textContentView;
	UILabel* nameLabel;
	UILabel* subtextLabel;
	UILabel* secondaryTextLabel;
	UIView* topDividerView;
	UIView* bottomDividerView;
	UIImageView* disclosureView;
}
@property(retain, nonatomic) OFImageView* iconView;
@property(retain, nonatomic) UIImageView* iconFrame;
@property(retain, nonatomic) UIView* textContentView;
@property(retain, nonatomic) UILabel* nameLabel;
@property(retain, nonatomic) UILabel* subtextLabel;
@property(retain, nonatomic) UILabel* secondaryTextLabel;
@property(retain, nonatomic) UIView* topDividerView;
@property(retain, nonatomic) UIView* bottomDividerView;
@property(retain, nonatomic) UIImageView* disclosureView;
-(void)onResourceChanged:(id)changed;
-(void)dealloc;
-(BOOL)wantsToConfigureSelf;
-(void)layoutSubviews;
@end

