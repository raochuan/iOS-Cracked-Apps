//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBLiveTableViewCell.h"

@class TBLiveFeedVideoContentView, TBLiveFeedVideoCoverView;

@interface TBLiveFeedVideoCell : TBLiveTableViewCell
{
    _Bool _playVideo;
    id <TBLiveFeedVideoCellDelegate> _videoDelegate;
    TBLiveFeedVideoContentView *_feedContentView;
    TBLiveFeedVideoCoverView *_coverView;
}

+ (struct CGSize)viewSizeWithModel:(id)arg1;
@property(retain, nonatomic) TBLiveFeedVideoCoverView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) TBLiveFeedVideoContentView *feedContentView; // @synthesize feedContentView=_feedContentView;
@property(nonatomic) _Bool playVideo; // @synthesize playVideo=_playVideo;
@property(nonatomic) __weak id <TBLiveFeedVideoCellDelegate> videoDelegate; // @synthesize videoDelegate=_videoDelegate;
- (void).cxx_destruct;
- (void)didScroll;
- (void)refreshWithModel:(id)arg1;
- (void)prepareForReuse;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
