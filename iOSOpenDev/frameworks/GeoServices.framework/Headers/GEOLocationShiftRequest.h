/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/XXUnknownSuperclass.h>

@class GEOPixelPoint;

@interface GEOLocationShiftRequest : XXUnknownSuperclass {
	GEOPixelPoint *_pixel;	// 4 = 0x4
}
@property(retain, nonatomic) GEOPixelPoint *pixel;	// G=0x29179; S=0x29189; @synthesize=_pixel
// declared property setter: - (void)setPixel:(id)pixel;	// 0x29189
// declared property getter: - (id)pixel;	// 0x29179
- (Class)responseClass;	// 0x2915d
- (unsigned)requestTypeCode;	// 0x29159
- (void)writeTo:(id)to;	// 0x290c5
- (BOOL)readFrom:(id)from;	// 0x28f51
- (id)dictionaryRepresentation;	// 0x28ee9
- (id)description;	// 0x28e79
- (void)dealloc;	// 0x28e35
@end