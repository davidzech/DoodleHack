/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFTableCellHelper.h"

@class OFImageView, UIImageView, UIView, UILabel;

@interface OFAchievementProgressionList : OFTableCellHelper {
	UILabel* titleLabel;
	UILabel* descriptionLabel;
	OFImageView* unlockedIcon;
	UILabel* gamerScoreLabel;
	OFImageView* progressBackground;
	OFImageView* progressBar;
	UIView* progressionBubbleContainer;
	UILabel* progressAmountBubbleLabel;
	UIView* gamerScoreContainer;
	UIImageView* disclosureIcon;
	BOOL textNeedsRearrangement;
	double percentComplete;
}
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) UILabel* descriptionLabel;
@property(retain, nonatomic) OFImageView* unlockedIcon;
@property(retain, nonatomic) UILabel* gamerScoreLabel;
@property(retain, nonatomic) OFImageView* progressBackground;
@property(retain, nonatomic) OFImageView* progressBar;
@property(retain, nonatomic) UIView* progressionBubbleContainer;
@property(retain, nonatomic) UILabel* progressAmountBubbleLabel;
@property(retain, nonatomic) UIView* gamerScoreContainer;
@property(retain, nonatomic) UIImageView* disclosureIcon;
-(void)layoutSubviews;
-(void)onResourceChanged:(id)changed;
@end

