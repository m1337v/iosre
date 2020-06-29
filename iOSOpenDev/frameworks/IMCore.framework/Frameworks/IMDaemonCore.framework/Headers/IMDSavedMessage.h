/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <IMDaemonCore/XXUnknownSuperclass.h>
#import <IMDaemonCore/IMDaemonCore-Structs.h>

@class NSData, NSDate, NSString, FZMessage, NSNumber;

__attribute__((visibility("hidden")))
@interface IMDSavedMessage : XXUnknownSuperclass {
	XXStruct_l7ui9B *_messageRecord;	// 4 = 0x4
	FZMessage *_fzMessage;	// 8 = 0x8
	NSString *_messageGUID;	// 12 = 0xc
	NSNumber *_rowID;	// 16 = 0x10
	NSString *_body;	// 20 = 0x14
	NSData *_attributedBody;	// 24 = 0x18
	NSString *_handle;	// 28 = 0x1c
	NSNumber *_type;	// 32 = 0x20
	NSData *_attachmentInfo;	// 36 = 0x24
	NSDate *_date;	// 40 = 0x28
	NSDate *_dateRead;	// 44 = 0x2c
	NSDate *_dateDelivered;	// 48 = 0x30
	NSString *_roomname;	// 52 = 0x34
	NSString *_service;	// 56 = 0x38
	NSString *_account;	// 60 = 0x3c
	NSString *_accountGUID;	// 64 = 0x40
	NSNumber *_flags;	// 68 = 0x44
	NSNumber *_error;	// 72 = 0x48
	NSString *_subject;	// 76 = 0x4c
}
@property(readonly, assign, nonatomic) NSNumber *unread;	// G=0x170c5; 
@property(readonly, assign, nonatomic) NSNumber *outgoing;	// G=0x1707d; 
@property(retain, nonatomic) NSString *subject;	// G=0x17e1d; S=0x16fc5; @synthesize=_subject
@property(retain, nonatomic) NSNumber *error;	// G=0x17e0d; S=0x16ef5; @synthesize=_error
@property(retain, nonatomic) NSNumber *flags;	// G=0x17d79; S=0x16e69; @synthesize=_flags
@property(retain, nonatomic) NSString *accountGUID;	// G=0x17d69; S=0x16db1; @synthesize=_accountGUID
@property(retain, nonatomic) NSString *account;	// G=0x17d59; S=0x16cf9; @synthesize=_account
@property(retain, nonatomic) NSString *service;	// G=0x17d39; S=0x16c41; @synthesize=_service
@property(retain, nonatomic) NSString *roomname;	// G=0x17cf9; S=0x16b89; @synthesize=_roomname
@property(retain, nonatomic) NSDate *dateDelivered;	// G=0x17d29; S=0x16ad9; @synthesize=_dateDelivered
@property(retain, nonatomic) NSDate *dateRead;	// G=0x17d19; S=0x16a29; @synthesize=_dateRead
@property(retain, nonatomic) NSDate *date;	// G=0x17d09; S=0x16979; @synthesize=_date
@property(retain, nonatomic) NSData *attachmentInfo;	// G=0x17d89; S=0x168e5; @synthesize=_attachmentInfo
@property(retain, nonatomic) NSNumber *type;	// G=0x17d99; S=0x16841; @synthesize=_type
@property(retain, nonatomic) NSString *handle;	// G=0x17da9; S=0x166d1; @synthesize=_handle
@property(retain, nonatomic) NSData *attributedBody;	// G=0x17db9; S=0x1663d; @synthesize=_attributedBody
@property(retain, nonatomic) NSString *body;	// G=0x17dfd; S=0x16585; @synthesize=_body
@property(retain, nonatomic) NSString *messageGUID;	// G=0x17d49; S=0x16789; @synthesize=_messageGUID
@property(retain, nonatomic) NSNumber *rowID;	// G=0x17dc9; S=0x17dd9; @synthesize=_rowID
// declared property getter: - (id)subject;	// 0x17e1d
// declared property getter: - (id)error;	// 0x17e0d
// declared property getter: - (id)body;	// 0x17dfd
// declared property setter: - (void)setRowID:(id)anId;	// 0x17dd9
// declared property getter: - (id)rowID;	// 0x17dc9
// declared property getter: - (id)attributedBody;	// 0x17db9
// declared property getter: - (id)handle;	// 0x17da9
// declared property getter: - (id)type;	// 0x17d99
// declared property getter: - (id)attachmentInfo;	// 0x17d89
// declared property getter: - (id)flags;	// 0x17d79
// declared property getter: - (id)accountGUID;	// 0x17d69
// declared property getter: - (id)account;	// 0x17d59
// declared property getter: - (id)messageGUID;	// 0x17d49
// declared property getter: - (id)service;	// 0x17d39
// declared property getter: - (id)dateDelivered;	// 0x17d29
// declared property getter: - (id)dateRead;	// 0x17d19
// declared property getter: - (id)date;	// 0x17d09
// declared property getter: - (id)roomname;	// 0x17cf9
- (id)description;	// 0x17c8d
- (void)_persistAttachmentsForTransferGUIDs:(id)transferGUIDs;	// 0x17aed
- (BOOL)updateWithFZMessage:(id)fzmessage;	// 0x17111
// declared property getter: - (id)unread;	// 0x170c5
// declared property getter: - (id)outgoing;	// 0x1707d
// declared property setter: - (void)setSubject:(id)subject;	// 0x16fc5
// declared property setter: - (void)setError:(id)error;	// 0x16ef5
// declared property setter: - (void)setFlags:(id)flags;	// 0x16e69
// declared property setter: - (void)setAccountGUID:(id)guid;	// 0x16db1
// declared property setter: - (void)setAccount:(id)account;	// 0x16cf9
// declared property setter: - (void)setService:(id)service;	// 0x16c41
// declared property setter: - (void)setRoomname:(id)roomname;	// 0x16b89
// declared property setter: - (void)setDateDelivered:(id)delivered;	// 0x16ad9
// declared property setter: - (void)setDateRead:(id)read;	// 0x16a29
// declared property setter: - (void)setDate:(id)date;	// 0x16979
// declared property setter: - (void)setAttachmentInfo:(id)info;	// 0x168e5
// declared property setter: - (void)setType:(id)type;	// 0x16841
// declared property setter: - (void)setMessageGUID:(id)guid;	// 0x16789
// declared property setter: - (void)setHandle:(id)handle;	// 0x166d1
// declared property setter: - (void)setAttributedBody:(id)body;	// 0x1663d
// declared property setter: - (void)setBody:(id)body;	// 0x16585
- (void)dealloc;	// 0x163c9
- (id)initWithIMDSMSRecordRef:(XXStruct_l7ui9B *)imdsmsrecordRef;	// 0x15efd
- (id)initWithFZMessage:(id)fzmessage;	// 0x15685
@end