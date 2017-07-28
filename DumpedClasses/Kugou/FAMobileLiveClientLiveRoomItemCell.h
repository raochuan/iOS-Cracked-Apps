//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FABlurImageView, FAMobileLiveClientLiveRoomView, UIImageView, UIScrollView;

@interface FAMobileLiveClientLiveRoomItemCell : UIView
{
    long long _cellIndex;
    UIScrollView *_liveRoomView;
    FABlurImageView *_coverImageBlurView;
    UIImageView *_coverImageNormalView;
    FAMobileLiveClientLiveRoomView *_playView;
}

@property(nonatomic) __weak FAMobileLiveClientLiveRoomView *playView; // @synthesize playView=_playView;
@property(retain, nonatomic) UIImageView *coverImageNormalView; // @synthesize coverImageNormalView=_coverImageNormalView;
@property(retain, nonatomic) FABlurImageView *coverImageBlurView; // @synthesize coverImageBlurView=_coverImageBlurView;
@property(retain, nonatomic) UIScrollView *liveRoomView; // @synthesize liveRoomView=_liveRoomView;
@property(nonatomic) long long cellIndex; // @synthesize cellIndex=_cellIndex;
- (void).cxx_destruct;
- (void)updatePlayerViewInCell:(id)arg1;
- (void)insertLiveRoomView:(id)arg1;
- (void)reloadLivePhoto:(id)arg1;
- (void)layoutSubviews;

@end
