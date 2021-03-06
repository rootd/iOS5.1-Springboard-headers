/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Springboard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBBatteryChargingView, UIImageView;

@interface SBAwayChargingView : XXUnknownSuperclass {
	SBBatteryChargingView* _chargingView;
	SBBatteryChargingView* _headsetChargingView;
	UIImageView* _backgroundView;
	unsigned _animatingBatteries : 1;
	unsigned _updateAfterAnimation : 1;
	unsigned _showingDeviceBattery : 1;
	unsigned _showingHeadsetBattery : 1;
}
+(id)backgroundImage;
+(CGSize)defaultSize;
+(BOOL)shouldShowDeviceBattery;
+(BOOL)shouldShowHeadsetBattery;
-(id)initWithFrame:(CGRect)frame awayView:(id)view;
-(void)dealloc;
-(void)updateInterface:(BOOL)interface;
-(id)chargingView;
-(void)addChargingView;
-(void)hideChargingView;
-(id)headsetChargingView;
-(void)addHeadsetChargingView;
-(void)hideHeadsetChargingView;
-(CGPoint)_dualBatteryPositionForBattery:(id)battery;
-(CGPoint)_singleBatteryPositionForBattery:(id)battery;
-(void)_switchFromBattery:(id)battery toView:(id)view animate:(BOOL)animate;
-(void)_slideBattery:(id)battery toShowBattery:(id)showBattery animate:(BOOL)animate;
-(void)_slideBattery:(id)battery toHideBattery:(id)hideBattery animate:(BOOL)animate;
-(void)_finishedFadeForSwitch:(id)aSwitch finished:(BOOL)finished context:(id)context;
-(void)_finishedSlideForSlideToReveal:(id)reveal finished:(BOOL)finished context:(id)context;
-(void)_finishedHideForHideToSlide:(id)slide finished:(BOOL)finished context:(id)context;
-(void)_batteryAnimationFinished:(id)finished;
-(void)_test:(id)test;
@end

