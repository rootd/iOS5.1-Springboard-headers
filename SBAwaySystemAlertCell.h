/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Springboard-Structs.h"
#import "SBAwayListItemCell.h"

@class NSArray;
@protocol SBAwayListCellButtonHandler;

@interface SBAwaySystemAlertCell : SBAwayListItemCell {
	NSArray* _buttons;
	id<SBAwayListCellButtonHandler> _buttonHandler;
	BOOL _horizontalButtonLayout;
}
+(float)rowHeightForTitle:(id)title message:(id)smessage rowWidth:(float)width buttonLabels:(id)labels;
+(id)_buttonBackgroundImage;
+(float)_buttonWidthForText:(id)text;
+(id)_buttonFont;
+(float)_buttonHorizontalInset;
+(float)_buttonVerticalInset;
-(void)dealloc;
-(void)_forwardButtonPressToHandler:(id)handler;
-(void)_createContentView;
-(void)setButtonLabels:(id)labels handler:(id)handler isAlarm:(BOOL)alarm;
-(CGRect)_cellContentViewFrame;
-(float)_getMaxButtonWidth;
-(void)layoutSubviews;
@end

