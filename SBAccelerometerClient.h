/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Springboard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface SBAccelerometerClient : XXUnknownSuperclass {
	CFMachPortRef _cfMachPort;
	unsigned _port;
	double _updateInterval;
	double _lastUpdateTime;
	float _xThreshold;
	float _yThreshold;
	float _zThreshold;
}
@property(assign, nonatomic) unsigned port;
@property(assign, nonatomic) CFMachPortRef CFMachPort;
@property(assign, nonatomic) double updateInterval;
@property(assign, nonatomic) double lastUpdateTime;
@property(assign, nonatomic) float xThreshold;
@property(assign, nonatomic) float yThreshold;
@property(assign, nonatomic) float zThreshold;
-(BOOL)passesThresholdForX:(float)x y:(float)y z:(float)z;
-(void)dealloc;
@end

