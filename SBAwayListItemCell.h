/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Springboard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, SBBulletinCellContentViewBase, SBAwayBulletinListController;

@interface SBAwayListItemCell : XXUnknownSuperclass {
	UIImageView* _separator;
	UIImageView* _iconImageView;
	SBBulletinCellContentViewBase* _cellContentView;
	SBAwayBulletinListController* _controller;
	BOOL _shouldBlinkIcon;
}
@property(assign, nonatomic) BOOL shouldBlinkIcon;
+(float)_rowHeightForContentHeight:(float)contentHeight;
+(float)_contentWidthForRowWidth:(float)rowWidth;
+(float)_cellIconLeftPadding;
+(float)_cellContentLeftPadding;
+(float)_cellContentRightPadding;
+(float)_cellContentTopPadding;
+(float)_cellContentExtraPadding;
-(BOOL)_hasBackgroundColor;
-(void)_addIconBlinkAnimation;
-(void)_removeIconBlinkAnimation;
-(void)_createContentView;
-(id)initWithReuseIdentifier:(id)reuseIdentifier;
-(void)dealloc;
-(void)setIconImage:(id)image;
-(void)setTitle:(id)title;
-(void)setMessage:(id)message;
-(void)layoutSubviews;
-(BOOL)_drawsSeparator;
-(CGRect)_contentRect;
-(CGRect)_cellContentViewFrame;
-(void)setController:(id)controller;
@end

