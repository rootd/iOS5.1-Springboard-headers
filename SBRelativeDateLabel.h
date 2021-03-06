/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBRelativeDateTimerDelegate.h"
#import "SBDefaultDateLabel.h"

@class SBRelativeDateTimer;

@interface SBRelativeDateLabel : SBDefaultDateLabel <SBRelativeDateTimerDelegate> {
	SBRelativeDateTimer* _relativeDateTimer;
	unsigned _value;
	int _resolution;
	int _comparedToNow;
}
-(void)setTimeZoneRelativeStartDate:(id)date absoluteStartDate:(id)date2;
-(void)dealloc;
-(id)constructLabelString;
-(void)timerFiredWithValue:(unsigned)value forResolution:(int)resolution comparedToNow:(int)now;
@end

