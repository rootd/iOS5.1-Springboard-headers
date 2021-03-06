/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Springboard-Structs.h"
#import "SBIconListView.h"


@interface SBDockIconListView : SBIconListView {
}
+(unsigned)iconColumnsForInterfaceOrientation:(int)interfaceOrientation;
+(unsigned)iconRowsForInterfaceOrientation:(int)interfaceOrientation;
+(id)backgroundImageForOrientation:(int)orientation;
-(id)initForOrientation:(int)orientation;
-(id)initWithFrame:(CGRect)frame;
-(void)_updateForOrientation:(int)orientation duration:(double)duration;
-(BOOL)_shouldAnimatePropertyWithKey:(id)key;
-(void)setOrientation:(int)orientation;
-(void)setOrientation:(int)orientation duration:(double)duration;
-(int)visibleIconsInDock;
-(unsigned)iconsInRowForSpacingCalculation;
-(float)topIconInset;
-(unsigned)rowAtPoint:(CGPoint)point;
-(float)sideIconInset;
-(float)_additionalSideInsetToCenterIcons;
-(CGPoint)originForIconAtX:(unsigned)x Y:(unsigned)y;
-(unsigned)columnAtPoint:(CGPoint)point;
@end

