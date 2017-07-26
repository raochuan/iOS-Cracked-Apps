//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSString, TBCouponPageControl, UILabel, UIScrollView;

@interface TBMyGouponItemScrollerView : UIView <UIScrollViewDelegate>
{
    struct CGRect viewSize;
    UIScrollView *scrollView;
    TBCouponPageControl *pageControl;
    UILabel *noteTitle;
    int startContentOffsetX;
    int willEndContentOffsetX;
    int endContentOffsetX;
    _Bool isLoop;
    id <CroupopnItemScrollerViewDelegate> delegate;
}

@property(nonatomic) __weak id <CroupopnItemScrollerViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)imagePressed:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)reloadPageView;
- (void)setCurrentPage:(int)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setCurrentPage:(int)arg1;
- (int)getCurrentPage;
- (id)initWithFrameRect:(struct CGRect)arg1 pageCount:(unsigned long long)arg2 currentPage:(int)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
