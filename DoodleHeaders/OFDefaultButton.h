/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "DoodleJump-Structs.h"

@class UIImageView;

@interface OFDefaultButton : XXUnknownSuperclass {
	UIImageView* iconImageView;
}
+(id)buttonImageName:(id)name;
+(id)redBorderedButton:(CGRect)button;
+(id)greenBoderedButton:(CGRect)button;
+(id)greenButton:(CGRect)button;
+(id)textButton:(CGRect)button;
+(void)setupButton:(id)button;
-(id)initWithCoder:(id)coder;
-(id)initWithFrame:(CGRect)frame normalImage:(id)image hitImage:(id)image3;
-(void)dealloc;
-(void)awakeFromNib;
-(void)_handleInitialIconPlacement;
-(void)_adjustTitleForIcon;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)frame;
-(void)setHidden:(BOOL)hidden;
-(void)setTitleForAllStates:(id)allStates;
-(void)_setupBackgroundImage:(id)image hitImage:(id)image2;
-(void)_setupStandardButtonAttributes;
@end

