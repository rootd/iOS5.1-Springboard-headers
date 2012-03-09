/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Springboard-Structs.h"
#import "NSCopying.h"
#import "NSObject.h"
#import "NSMutableCopying.h"


@protocol AceObject <NSObject, NSCopying, NSMutableCopying>
-(id)init;
-(id)initWithDictionary:(id)dictionary;
-(id)initWithDictionary:(id)dictionary context:(id)context;
-(id)dictionary;
-(id)properties;
-(id)encodedClassName;
-(id)groupIdentifier;
-(id)copyWithZone:(NSZone*)zone;
-(id)mutableCopyWithZone:(NSZone*)zone;
@end

