/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

@interface SBIconLabelImageCache : XXUnknownSuperclass {
	NSMutableDictionary* _cache;
}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)cacheNewLabelImage:(id)image;
-(id)checkoutLabelImageForPropertiesIfExists:(id)propertiesIfExists;
-(void)checkinLabelImage:(id)image;
@end

