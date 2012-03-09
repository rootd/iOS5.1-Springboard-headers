/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView;

@interface SBBulletinClearButton : XXUnknownSuperclass {
	BOOL _showingClear;
	UIImageView* _backgroundView;
	UIImageView* _xImageView;
	UIImageView* _clearImageView;
	float _widthWhenShowingX;
	float _widthWhenShowingClear;
	id _clearShownAction;
	id _clearPressedAction;
}
@property(copy, nonatomic) id clearShownAction;
@property(copy, nonatomic) id clearPressedAction;
-(id)init;
-(void)dealloc;
-(void)resetAnimated:(BOOL)animated;
-(void)setHighlighted:(BOOL)highlighted;
-(void)_pressAction;
-(void)_setShowsClear:(BOOL)clear animated:(BOOL)animated;
-(id)_clearImage;
-(id)_xImage;
-(id)_background;
@end

