/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Springboard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIButton;

@interface SBDeviceLockKeypad : XXUnknownSuperclass {
	UIButton* _deleteButton;
	UIButton* _cancelButton;
	BOOL _deleteEnabled;
	BOOL _playKeyboardClicks;
}
@property(assign, nonatomic, getter=isDeleteEnabled) BOOL deleteEnabled;
@property(readonly, assign, nonatomic) BOOL emergencyKeyChar;
@property(readonly, assign, nonatomic) BOOL cancelKeyChar;
@property(readonly, assign, nonatomic) BOOL deleteKeyChar;
@property(assign, nonatomic) BOOL showsEmergencyCallButton;
@property(assign, nonatomic) BOOL playsKeyboardClicks;
+(id)keypadImage;
+(id)pressedImage;
+(CGSize)defaultSize;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)hiddenFromView;
-(void)willBecomeVisible;
-(id)_keypadImage;
-(id)_pressedImage;
-(id)initWithDefaultSize;
@end
