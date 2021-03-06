/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, SBDeviceLockTitle, NSString, SBDeviceLockEntryField;

@interface SBDeviceLockView : XXUnknownSuperclass {
	int _style;
	int _interfaceOrientation;
	SBDeviceLockTitle* _statusView;
	SBDeviceLockEntryField* _entryView;
	id _delegate;
}
@property(readonly, assign, nonatomic) int style;
@property(assign, nonatomic) int interfaceOrientation;
@property(assign, nonatomic) id delegate;
@property(readonly, assign, nonatomic, getter=isKeypadMinimized) BOOL keypadMinimized;
@property(assign, nonatomic) BOOL showsEmergencyCallButton;
@property(assign, nonatomic) BOOL playsKeyboardClicks;
@property(assign, nonatomic, getter=isShowingEntryStatusWarning) BOOL showingEntryStatusWarning;
@property(retain, nonatomic) NSString* passcode;
@property(assign, nonatomic, getter=isShowingStatusWarning) BOOL showingStatusWarning;
@property(retain, nonatomic) NSString* statusSubtitle;
@property(retain, nonatomic) NSString* statusTitle;
@property(readonly, assign, nonatomic) UIView* keypadView;
@property(readonly, assign, nonatomic) UIView* entryView;
@property(readonly, assign, nonatomic) UIView* statusView;
+(int)defaultStyle;
+(id)newWithStyle:(int)style interfaceOrientation:(int)orientation showsEmergencyCall:(BOOL)call;
-(id)_initWithStyle:(int)style interfaceOrientation:(int)orientation showsEmergencyCall:(BOOL)call;
-(BOOL)canBecomeFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)resignFirstResponder;
-(void)dealloc;
-(void)setUserInteractionEnabled:(BOOL)enabled;
-(void)blinkStatusView;
-(void)deviceLockEntryFieldDidAcceptEntry:(id)deviceLockEntryField;
-(void)deviceLockEntryFieldDidCancelEntry:(id)deviceLockEntryField;
-(BOOL)deviceLockEntryField:(id)field shouldInsertText:(id)text;
-(void)deviceLockEntryFieldTextDidChange:(id)deviceLockEntryFieldText;
-(void)notifyDelegateThatPasscodeDidChange;
-(void)notifyDelegateThatPasscodeWasEntered;
-(void)notifyDelegateThatCancelButtonWasPressed;
-(void)notifyDelegateThatEmergencyCallButtonWasPressed;
-(void)willAnimateToInterfaceOrientation:(int)interfaceOrientation;
-(void)animateToInterfaceInterfaceOrientation:(int)interfaceInterfaceOrientation;
-(void)didAnimateToInterfaceOrientation:(int)interfaceOrientation;
@end

