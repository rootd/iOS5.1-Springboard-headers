/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBBaseSoftwareUpdateAlertItem.h"

@class UILabel, UIActivityIndicatorView;

@interface SBSoftwareUpdateVerifyingUpdateAlertItem : SBBaseSoftwareUpdateAlertItem {
	UIActivityIndicatorView* _activityView;
	UILabel* _label;
}
-(id)initWithDescriptor:(id)descriptor;
-(void)dealloc;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)willPresentAlertView:(id)view;
-(BOOL)reappearsAfterUnlock;
-(BOOL)reappearsAfterLock;
-(BOOL)undimsScreen;
-(BOOL)shouldShowInLockScreen;
-(BOOL)allowMenuButtonDismissal;
-(BOOL)dismissOnLock;
@end

