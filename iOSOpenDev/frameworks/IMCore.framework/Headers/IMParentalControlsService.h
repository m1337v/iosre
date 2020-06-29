/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */



@class NSString, NSSet;

__attribute__((visibility("hidden")))
@interface IMParentalControlsService : NSObject {
	BOOL _disableService;	// 4 = 0x4
	BOOL _forceWhiteList;	// 5 = 0x5
	NSSet *_whitelist;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
}
@property(retain) NSString *name;	// G=0x2b535; S=0x2b549; @synthesize=_name
@property(retain) NSSet *whitelist;	// G=0x2b4fd; S=0x2b511; @synthesize=_whitelist
@property(assign) BOOL forceWhiteList;	// G=0x2b4dd; S=0x2b4ed; @synthesize=_forceWhiteList
@property(assign) BOOL disableService;	// G=0x2b4bd; S=0x2b4cd; @synthesize=_disableService
// declared property setter: - (void)setName:(id)name;	// 0x2b549
// declared property getter: - (id)name;	// 0x2b535
// declared property setter: - (void)setWhitelist:(id)whitelist;	// 0x2b511
// declared property getter: - (id)whitelist;	// 0x2b4fd
// declared property setter: - (void)setForceWhiteList:(BOOL)list;	// 0x2b4ed
// declared property getter: - (BOOL)forceWhiteList;	// 0x2b4dd
// declared property setter: - (void)setDisableService:(BOOL)service;	// 0x2b4cd
// declared property getter: - (BOOL)disableService;	// 0x2b4bd
- (void)dealloc;	// 0x2b465
@end