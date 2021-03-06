/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATConnection;

@interface SBModelessSyncController : XXUnknownSuperclass {
	BOOL _isAppSyncing;
	BOOL _isSyncing;
	int _syncRegistrationToken;
	int _iCloudRestoreToken;
	BOOL _restoringFromICloud;
	BOOL _isAutoSyncing;
	BOOL _isWirelessSyncing;
	ATConnection* _airTrafficConnection;
}
@property(readonly, assign, nonatomic) BOOL isAppSyncing;
@property(readonly, assign, nonatomic) BOOL isSyncing;
@property(readonly, assign, nonatomic) BOOL isAutoSyncing;
@property(readonly, assign, nonatomic) BOOL isWirelessSyncing;
@property(readonly, assign, nonatomic) BOOL isRestoringFromICloud;
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)setIsSyncing:(BOOL)syncing;
-(void)connection:(id)connection updatedProgress:(id)progress;
-(void)connectionWasInterrupted:(id)interrupted;
-(void)beginMonitoring;
-(void)endMonitoring;
-(void)gotLowBatteryWarning;
-(void)_appSyncStateChanged;
-(void)_setAppSyncState:(BOOL)state;
-(void)_updateIconsForStateChange;
-(void)_iCloudStatusChanged;
-(void)_beginObservingICloudRestoreStatus;
-(void)_endObservingICloudRestoreStatus;
@end

