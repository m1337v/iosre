/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */




@protocol SUGridViewDataSource <NSObject>
- (int)gridView:(id)view numberOfRowsInSection:(int)section;
- (int)gridView:(id)view numberOfColumnsInSection:(int)section;
- (id)gridView:(id)view gridCellForRowAtIndexPath:(id)indexPath;
@optional
- (int)numberOfSectionsInGridView:(id)gridView;
- (id)gridView:(id)view titleForHeaderInSection:(int)section;
- (void)gridView:(id)view commitEditingStyle:(int)style forCellAtIndexPath:(id)indexPath;
@end
