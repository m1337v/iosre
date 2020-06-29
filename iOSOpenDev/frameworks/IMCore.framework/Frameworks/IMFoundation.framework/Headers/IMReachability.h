/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <IMFoundation/IMFoundation-Structs.h>
#import <IMFoundation/XXUnknownSuperclass.h>

@class NSString;
@protocol IMReachabilityDelegate;

@interface IMReachability : XXUnknownSuperclass {
	id<IMReachabilityDelegate> _delegate;	// 4 = 0x4
	BOOL _gettingFlags;	// 8 = 0x8
	unsigned _flags;	// 12 = 0xc
	NSString *_description;	// 16 = 0x10
	void *_reachabilityRef;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL gettingFlags;	// G=0x197e5; S=0x197f5; @synthesize=_gettingFlags
@property(retain, nonatomic) NSString *reachabilityDescription;	// G=0x19815; S=0x19825; @synthesize=_description
@property(assign, nonatomic) void *reachabilityRef;	// G=0x19849; S=0x19859; @synthesize=_reachabilityRef
@property(readonly, assign, nonatomic) unsigned status;	// G=0x19739; 
@property(readonly, assign, nonatomic) BOOL connectionRequired;	// G=0x19799; 
@property(assign, nonatomic) id<IMReachabilityDelegate> delegate;	// G=0x197c5; S=0x197d5; @synthesize=_delegate
@property(assign, nonatomic) unsigned flags;	// G=0x19701; S=0x19805; @synthesize=_flags
@property(readonly, retain) NSString *description;	// G=0x19521; converted property
+ (id)reachabilityWithLocalAddress:(id)localAddress remoteAddress:(id)address;	// 0x1916d
+ (id)reachabilityWithRemoteAddress:(id)remoteAddress;	// 0x19119
+ (id)reachabilityWithHostName:(id)hostName;	// 0x190cd
+ (id)reachabilityForLocalWiFi;	// 0x19049
+ (id)reachabilityForInternetConnection;	// 0x18fcd
// declared property setter: - (void)setReachabilityRef:(void *)ref;	// 0x19859
// declared property getter: - (void *)reachabilityRef;	// 0x19849
// declared property setter: - (void)setReachabilityDescription:(id)description;	// 0x19825
// declared property getter: - (id)reachabilityDescription;	// 0x19815
// declared property setter: - (void)setFlags:(unsigned)flags;	// 0x19805
// declared property setter: - (void)setGettingFlags:(BOOL)flags;	// 0x197f5
// declared property getter: - (BOOL)gettingFlags;	// 0x197e5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x197d5
// declared property getter: - (id)delegate;	// 0x197c5
// declared property getter: - (BOOL)connectionRequired;	// 0x19799
// declared property getter: - (unsigned)status;	// 0x19739
// declared property getter: - (unsigned)flags;	// 0x19701
- (void)_forceGetFlagsIfNecessary;	// 0x19675
- (void)_handleCallbackForSCNetworkReachability:(SCNetworkReachabilityRef)scnetworkReachability;	// 0x19565
// converted property getter: - (id)description;	// 0x19521
- (void)dealloc;	// 0x1948d
- (id)initWithLocalSocketAddress:(id)localSocketAddress remoteSocketAddress:(id)address delegate:(id)delegate;	// 0x19375
- (id)initWithRemoteHost:(id)remoteHost delegate:(id)delegate;	// 0x19319
- (id)_initWithReachabilityRef:(SCNetworkReachabilityRef)reachabilityRef description:(id)description delegate:(id)delegate;	// 0x191c1
@end