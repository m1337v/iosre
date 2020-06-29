/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

#import <ScreenReaderOutputServer/ScreenReaderOutputServer-Structs.h>
#import <ScreenReaderOutputServer/SCROBrailleDisplay.h>

@class NSData, NSMutableString, NSMutableArray;

@interface SCROStealthBrailleDisplay : SCROBrailleDisplay {
}
+ (id)displayWithDelegate:(id)delegate;	// 0x1946d
+ (id)displayWithIOElement:(id)ioelement driverIdentifier:(id)identifier delegate:(id)delegate;	// 0x1953d
- (void)_mainDisplayHandler:(id)handler;	// 0x19599
@end