/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSLock;

@interface SBResetManager : XXUnknownSuperclass {
	BOOL _threadRunning;
	NSLock* _lock;
	int _mode;
	NSLock* _progressLock;
	float _progress;
}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)setMode:(int)mode;
-(void)setProgress:(float)progress;
-(float)progress;
-(void)beginReset;
-(void)_beginReset:(id)reset;
-(void)_resetThread;
-(void)_postResetEnded;
-(void)_resetFinished;
@end

