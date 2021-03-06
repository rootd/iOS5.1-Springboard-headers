/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Springboard-Structs.h"
#import "SBFolderIconListView.h"

@class NSMutableArray;

@interface SBNewsstandIconListView : SBFolderIconListView {
	unsigned _firstVisibleRow;
	unsigned _lastVisibleRow;
	unsigned _preRotationFirstVisibleRow;
	unsigned _postRotationFirstVisibleRow;
	unsigned _rotationPlacementRow;
	NSMutableArray* _visibleIcons;
	BOOL _compactingIcons;
}
+(unsigned)maxIcons;
+(unsigned)iconRowsForInterfaceOrientation:(int)interfaceOrientation;
+(unsigned)iconColumnsForInterfaceOrientation:(int)interfaceOrientation;
+(unsigned)maxVisibleIconRowsInterfaceOrientation:(int)orientation;
-(Class)iconRotationContainerClass;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(unsigned)iconRowsForCurrentOrientation;
-(float)topIconInset;
-(float)bottomIconInset;
-(float)sideIconInset;
-(float)verticalIconPadding;
-(CGSize)defaultIconSize;
-(CATransform3D)_transformForIconAtIndex:(unsigned)index inOrientation:(int)orientation;
-(void)cleanupAfterRotation;
-(id)visibleIcons;
-(unsigned)_preRotationFirstVisibleRow;
-(unsigned)_postRotationFirstVisibleRow;
-(unsigned)_rotationReferenceRow;
-(void)setFirstRowToStartRotation:(unsigned)startRotation endRotation:(unsigned)rotation moveIconsRelativeToRow:(unsigned)row;
-(void)_updateVisibleIconsFromRow:(unsigned)row toRow:(unsigned)row2 includeIcon:(id)icon layoutIfNeeded:(BOOL)needed;
-(BOOL)compactIcons:(BOOL)icons;
-(void)_noteNewIconInModel:(id)model;
-(void)showIconImagesFromRow:(unsigned)row toRow:(unsigned)row2;
@end

