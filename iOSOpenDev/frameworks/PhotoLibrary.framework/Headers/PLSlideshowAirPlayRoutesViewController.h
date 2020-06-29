/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/XXUnknownSuperclass.h>
#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/UITableViewDataSource.h>
#import <PhotoLibrary/UITableViewDelegate.h>

@class NSArray, UIView, UITableView;

@interface PLSlideshowAirPlayRoutesViewController : XXUnknownSuperclass <UITableViewDataSource, UITableViewDelegate> {
	UIView *_containerView;	// 152 = 0x98
	UITableView *_table;	// 156 = 0x9c
	NSArray *_airPlayServices;	// 160 = 0xa0
	unsigned _selectedServiceIndex;	// 164 = 0xa4
}
@property(assign, nonatomic) unsigned selectedServiceIndex;	// G=0xc90f5; S=0xc9105; @synthesize=_selectedServiceIndex
// declared property setter: - (void)setSelectedServiceIndex:(unsigned)index;	// 0xc9105
// declared property getter: - (unsigned)selectedServiceIndex;	// 0xc90f5
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0xc8fc5
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0xc8da1
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0xc8d79
- (CGSize)contentSizeForViewInPopoverView;	// 0xc8d1d
- (void)dealloc;	// 0xc8ca9
- (void)loadView;	// 0xc89cd
- (id)initWithAirPlayServices:(id)airPlayServices selectedServiceIndex:(unsigned)index;	// 0xc8969
@end