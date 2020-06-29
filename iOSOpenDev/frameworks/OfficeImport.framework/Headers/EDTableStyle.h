/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>
#import <OfficeImport/XXUnknownSuperclass.h>

@class NSString, EDKeyedCollection;

__attribute__((visibility("hidden")))
@interface EDTableStyle : XXUnknownSuperclass <NSCopying> {
@private
	NSString *mName;	// 4 = 0x4
	EDKeyedCollection *mTableStyleElements;	// 8 = 0x8
}
@property(retain) id name;	// G=0x1f88c5; S=0x1dea45; converted property
+ (id)tableStyle;	// 0x1de999
- (id)init;	// 0x1de9e1
- (void)dealloc;	// 0x1e7dfd
- (id)copyWithZone:(NSZone *)zone;	// 0x20f805
// converted property getter: - (id)name;	// 0x1f88c5
// converted property setter: - (void)setName:(id)name;	// 0x1dea45
- (id)tableStyleElements;	// 0x1dea8d
@end