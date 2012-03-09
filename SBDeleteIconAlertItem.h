/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIAlertViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBIcon;

@interface SBDeleteIconAlertItem : XXUnknownSuperclass <UIAlertViewDelegate> {
	SBIcon* _icon;
	BOOL _checkedDocumentsInCloudState;
	BOOL _appHasDocumentsInCloud;
	BOOL _appHasDocumentsWithPendingUpdates;
	BOOL _askedUserAboutDocumentsDocumentsInCloud;
	BOOL _askedUserAboutDocumentsWithPendingUpdates;
}
-(id)initWithIcon:(id)icon;
-(void)dealloc;
-(id)icon;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)_checkDocumentsInCloudStateIfNeeded;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(BOOL)shouldShowInLockScreen;
-(BOOL)dismissOnLock;
@end

