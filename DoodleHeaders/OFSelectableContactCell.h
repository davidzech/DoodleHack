/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFContactCell.h"

@class UIImageView;

@interface OFSelectableContactCell : OFContactCell {
	UIImageView* checkbox;
	BOOL checked;
}
@property(retain, nonatomic) UIImageView* checkbox;
@property(assign, nonatomic) BOOL checked;
-(void)dealloc;
@end
