//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DCInviteTipsView, DCOrderInfoPriceView, DCOrderInfoTimeLabel, DCRichView, DCYSInviteGetInfoBaseModel, DCYSRouteView, NSMutableArray, RACSubject;

@interface DCYSRouteDetailView : UIView
{
    _Bool _isShowBottom;
    _Bool _showPriceIcon;
    _Bool _showLeaveMessage;
    DCYSInviteGetInfoBaseModel *_orderModel;
    RACSubject *_eventSubject;
    DCOrderInfoTimeLabel *_timeLabel;
    DCYSRouteView *_destinationView;
    DCYSRouteView *_originView;
    DCOrderInfoPriceView *_priceView;
    DCYSRouteView *_topAddressView;
    DCYSRouteView *_bottomAddressView;
    DCRichView *_tagsView;
    DCInviteTipsView *_messageView;
    NSMutableArray *_subViewsArray;
    UIView *_contentView;
    UIView *_bottomLine;
    long long _routeCount;
    struct CGSize _priceSize;
}

+ (id)passengerAddress:(id)arg1 distance:(id)arg2 area:(id)arg3 totalWidth:(double)arg4;
+ (id)addressViewModel:(id)arg1;
+ (id)addressArray:(id)arg1 lastChange:(_Bool)arg2;
+ (void)drawDashLine:(id)arg1 lineLength:(int)arg2 lineSpacing:(int)arg3 lineColor:(id)arg4;
@property(nonatomic) long long routeCount; // @synthesize routeCount=_routeCount;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) struct CGSize priceSize; // @synthesize priceSize=_priceSize;
@property(retain, nonatomic) NSMutableArray *subViewsArray; // @synthesize subViewsArray=_subViewsArray;
@property(retain, nonatomic) DCInviteTipsView *messageView; // @synthesize messageView=_messageView;
@property(retain, nonatomic) DCRichView *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) DCYSRouteView *bottomAddressView; // @synthesize bottomAddressView=_bottomAddressView;
@property(retain, nonatomic) DCYSRouteView *topAddressView; // @synthesize topAddressView=_topAddressView;
@property(retain, nonatomic) DCOrderInfoPriceView *priceView; // @synthesize priceView=_priceView;
@property(retain, nonatomic) DCYSRouteView *originView; // @synthesize originView=_originView;
@property(retain, nonatomic) DCYSRouteView *destinationView; // @synthesize destinationView=_destinationView;
@property(retain, nonatomic) DCOrderInfoTimeLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) _Bool showLeaveMessage; // @synthesize showLeaveMessage=_showLeaveMessage;
@property(nonatomic) _Bool showPriceIcon; // @synthesize showPriceIcon=_showPriceIcon;
@property(nonatomic) _Bool isShowBottom; // @synthesize isShowBottom=_isShowBottom;
@property(retain, nonatomic) RACSubject *eventSubject; // @synthesize eventSubject=_eventSubject;
@property(retain, nonatomic) DCYSInviteGetInfoBaseModel *orderModel; // @synthesize orderModel=_orderModel;
- (void).cxx_destruct;
- (void)updateTagsView;
- (void)updateLeaveMessage;
- (void)updateDestinationView;
- (void)updateOriginView;
- (void)updateBottomAddressView;
- (void)updateTopAddressView;
- (void)updateTimeView;
- (id)orderTagsFrom:(id)arg1;
- (void)updatePriceView;
- (id)priceTagsFrom:(id)arg1;
- (void)clearView;
- (void)updateMessage;
- (void)addPriceView:(id)arg1;
- (void)remakeAutoLayout;
- (void)makeAutoLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end
