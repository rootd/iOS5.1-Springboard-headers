/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBProxyRemoteView, SBApplication;

@interface SBSheetView : XXUnknownSuperclass {
	SBProxyRemoteView* _remoteProxyView;
	SBApplication* _app;
	BOOL _wasPresentedAnimated;
}
-(id)initWithRemoteViewIdentifier:(id)remoteViewIdentifier application:(id)application wasPresentedAnimated:(BOOL)animated;
-(id)remoteViewIdentifier;
-(id)application;
-(BOOL)wasPresentedAnimated;
-(void)noteSheetDidEnd;
-(void)dealloc;
@end

