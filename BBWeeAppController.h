/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Springboard-Structs.h"
#import "NSObject.h"


@protocol BBWeeAppController <NSObject>
-(id)view;
@optional
-(float)viewHeight;
-(void)viewWillAppear;
-(void)viewDidAppear;
-(void)viewWillDisappear;
-(void)viewDidDisappear;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)loadPlaceholderView;
-(void)loadFullView;
-(void)unloadView;
-(void)clearShapshotImage;
-(void)loadView;
-(id)launchURL;
-(id)launchURLForTapLocation:(CGPoint)tapLocation;
@end

