/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, UILabel, OFImageView;

@interface OFChallengeDetailFrame : XXUnknownSuperclass {
	BOOL hasChallengeToUserBeenSet;
	UILabel* descriptionLabel;
	UILabel* resultLabel;
	UILabel* titleLabel;
	UIImageView* resultIcon;
	UIImageView* speechBubble;
	UIImageView* speechBubbleArrow;
	UIImageView* frameArrow;
	OFImageView* challengeIconPictureView;
	OFImageView* challengerProfilePictureView;
	UILabel* challengerNameLabel;
	UILabel* challengerUserMessageLabel;
}
@property(retain, nonatomic) UILabel* descriptionLabel;
@property(retain, nonatomic) UILabel* resultLabel;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) UIImageView* resultIcon;
@property(retain, nonatomic) UIImageView* speechBubble;
@property(retain, nonatomic) UIImageView* speechBubbleArrow;
@property(retain, nonatomic) OFImageView* challengeIconPictureView;
@property(retain, nonatomic) OFImageView* challengerProfilePictureView;
@property(retain, nonatomic) UILabel* challengerNameLabel;
@property(retain, nonatomic) UILabel* challengerUserMessageLabel;
-(void)awakeFromNib;
-(void)dealloc;
-(void)setChallengeToUser:(id)user;
@end

