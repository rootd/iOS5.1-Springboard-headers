/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, NSString;

@interface SBGestureViewCacheNode : XXUnknownSuperclass {
	UIView* m_view;
	int m_viewType;
	NSString* m_contextHostViewRequester;
	int m_orientation;
	NSString* m_bundleIdentifier;
}
@property(retain, nonatomic) UIView* view;
@property(assign, nonatomic) int viewType;
@property(copy, nonatomic) NSString* contextHostViewRequester;
@property(assign, nonatomic) int orientation;
@property(copy, nonatomic) NSString* bundleIdentifier;
+(id)node;
-(void)dealloc;
@end

