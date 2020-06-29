/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AARequest.h>

@class AAAccount;

@interface AAAddEmailUIRequest : AARequest {
@private
	AAAccount *_account;	// 12 = 0xc
}
@property(retain, nonatomic) AAAccount *account;	// G=0x8925; S=0x8935; @synthesize=_account
// declared property setter: - (void)setAccount:(id)account;	// 0x8935
// declared property getter: - (id)account;	// 0x8925
- (id)urlRequest;	// 0x8759
- (id)urlString;	// 0x8725
- (void)dealloc;	// 0x86d9
- (id)initWithURLString:(id)urlstring account:(id)account;	// 0x8691
- (id)initWithAccount:(id)account;	// 0x8649
@end