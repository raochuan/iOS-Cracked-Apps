//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSMutableSet, NSObject<FXBarrageViewDataSource>, NSTimer;

@interface FXKGLiveBarrageView : UIView
{
    float _barrageViewTopPadding;
    float _barrageViewBottomPadding;
    float _barrageViewLeftPadding;
    float _barrageViewRightPadding;
    float _barrageLineSpace;
    float _barrageLineNum;
    float _lineHeight;
    float _minHeightOfNeed;
    unsigned long long _playSubQueueMaxCount;
    NSObject<FXBarrageViewDataSource> *_dataSource;
    unsigned long long _state;
    NSTimer *_timer;
    NSMutableArray *_prepareItems;
    NSMutableArray *_playQueue;
    NSMutableSet *_reusePool;
}

@property(retain, nonatomic) NSMutableSet *reusePool; // @synthesize reusePool=_reusePool;
@property(retain, nonatomic) NSMutableArray *playQueue; // @synthesize playQueue=_playQueue;
@property(retain, nonatomic) NSMutableArray *prepareItems; // @synthesize prepareItems=_prepareItems;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak NSObject<FXBarrageViewDataSource> *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) unsigned long long playSubQueueMaxCount; // @synthesize playSubQueueMaxCount=_playSubQueueMaxCount;
@property(nonatomic) float minHeightOfNeed; // @synthesize minHeightOfNeed=_minHeightOfNeed;
@property(nonatomic) float lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) float barrageLineNum; // @synthesize barrageLineNum=_barrageLineNum;
@property(nonatomic) float barrageLineSpace; // @synthesize barrageLineSpace=_barrageLineSpace;
@property(nonatomic) float barrageViewRightPadding; // @synthesize barrageViewRightPadding=_barrageViewRightPadding;
@property(nonatomic) float barrageViewLeftPadding; // @synthesize barrageViewLeftPadding=_barrageViewLeftPadding;
@property(nonatomic) float barrageViewBottomPadding; // @synthesize barrageViewBottomPadding=_barrageViewBottomPadding;
@property(nonatomic) float barrageViewTopPadding; // @synthesize barrageViewTopPadding=_barrageViewTopPadding;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateItemWhenSizeChange;
- (float)getCenterYBySubQueueIndex:(unsigned long long)arg1;
- (long long)barrageBeginX;
- (void)configItem:(id)arg1 inSubQueueIndex:(unsigned long long)arg2;
- (void)initItem:(id)arg1;
- (void)destoryTimer;
- (void)addAnimationToItem:(id)arg1;
- (void)removeFinishedPlayingItem:(id)arg1;
- (_Bool)addItemToPlayQueue:(id)arg1;
- (void)itemFinishPlay:(id)arg1;
- (void)updateBarrage:(id)arg1;
- (void)cancelWaitingBarrage;
- (id)dequeueReusableItemWithIdentifier:(id)arg1;
- (_Bool)stopBarrage;
- (_Bool)resumeBarrage;
- (_Bool)pauseBarrage;
- (_Bool)startBarrage;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

