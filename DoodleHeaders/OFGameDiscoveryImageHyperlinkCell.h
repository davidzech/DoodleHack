/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFBannerCell.h"

@class OFImageView;

@interface OFGameDiscoveryImageHyperlinkCell : OFBannerCell {
	OFImageView* imageView;
}
@property(retain, nonatomic) OFImageView* imageView;
-(void)onResourceChanged:(id)changed;
-(void)dealloc;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)onCellWasClicked:(id)clicked;
-(void)layoutSubviews;
@end

