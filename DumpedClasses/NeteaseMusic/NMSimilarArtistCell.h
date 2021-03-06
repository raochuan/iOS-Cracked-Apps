//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMCommonCell.h"

#import "NMSimilarArtistSingleCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UIImageView, UILabel, UITableView;

@interface NMSimilarArtistCell : NMCommonCell <UITableViewDataSource, UITableViewDelegate, NMSimilarArtistSingleCellDelegate>
{
    UIImageView *_headlineView;
    UILabel *_titleLabel;
    UITableView *_horizontalTable;
    NSArray *_artists;
    id <NMSimilarArtistCellDelegate> _delegate;
}

+ (double)height;
@property(nonatomic) id <NMSimilarArtistCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *artists; // @synthesize artists=_artists;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)artistAvatarTouched:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

