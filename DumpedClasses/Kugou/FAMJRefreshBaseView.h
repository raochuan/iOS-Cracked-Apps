//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIActivityIndicatorView, UIImageView, UILabel, UIScrollView;

@interface FAMJRefreshBaseView : UIView
{
    UILabel *_statusLabel;
    UIImageView *_arrowImage;
    UIActivityIndicatorView *_activityView;
    _Bool _endingRefresh;
    _Bool _isShowActivity;
    _Bool _gift;
    int _state;
    UIScrollView *_scrollView;
    id _beginRefreshingTaget;
    SEL _beginRefreshingAction;
    CDUnknownBlockType _beginRefreshingCallback;
    NSString *_pullToRefreshText;
    NSString *_releaseToRefreshText;
    NSString *_refreshingText;
    struct UIEdgeInsets _scrollViewOriginalInset;
}

@property(nonatomic, getter=isGift) _Bool gift; // @synthesize gift=_gift;
@property(nonatomic) _Bool isShowActivity; // @synthesize isShowActivity=_isShowActivity;
@property(copy, nonatomic) NSString *refreshingText; // @synthesize refreshingText=_refreshingText;
@property(copy, nonatomic) NSString *releaseToRefreshText; // @synthesize releaseToRefreshText=_releaseToRefreshText;
@property(copy, nonatomic) NSString *pullToRefreshText; // @synthesize pullToRefreshText=_pullToRefreshText;
@property(readonly, getter=isEndingRefresh) _Bool endingRefresh; // @synthesize endingRefresh=_endingRefresh;
@property(nonatomic) int state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType beginRefreshingCallback; // @synthesize beginRefreshingCallback=_beginRefreshingCallback;
@property(nonatomic) SEL beginRefreshingAction; // @synthesize beginRefreshingAction=_beginRefreshingAction;
@property(nonatomic) __weak id beginRefreshingTaget; // @synthesize beginRefreshingTaget=_beginRefreshingTaget;
@property(readonly, nonatomic) struct UIEdgeInsets scrollViewOriginalInset; // @synthesize scrollViewOriginalInset=_scrollViewOriginalInset;
@property(readonly, nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)settingLabelText;
- (void)endRefreshing;
- (void)beginRefreshing;
@property(readonly, nonatomic, getter=isRefreshing) _Bool refreshing;
- (void)drawRect:(struct CGRect)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) __weak UIActivityIndicatorView *activityView;
@property(readonly, nonatomic) __weak UIImageView *arrowImage;
@property(readonly, nonatomic) __weak UILabel *statusLabel;
- (void)dealloc;
- (void)onChangeTheme:(id)arg1;
- (void)didInit;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

