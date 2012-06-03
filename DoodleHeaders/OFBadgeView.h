/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "DoodleJump-Structs.h"

@class UIImageView, UILabel;

@interface OFBadgeView : XXUnknownSuperclass {
	UIImageView* leftCap;
	UIImageView* rightCap;
	UIImageView* center;
	UILabel* valueLabel;
}
@property(readonly, assign) UILabel* label;
+(id)redBadge;
+(id)greenBadge;
+(CGSize)minimumSize;
-(void)_commonInitWithLeftImage:(id)leftImage rightImage:(id)image centerImage:(id)image3;
-(id)initWithLeftImage:(id)leftImage rightImage:(id)image centerImage:(id)image3;
-(void)dealloc;
-(void)setFrame:(CGRect)frame;
-(int)value;
-(void)setValue:(int)value;
-(void)setValueText:(id)text;
@end
