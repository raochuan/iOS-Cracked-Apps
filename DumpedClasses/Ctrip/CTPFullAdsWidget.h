//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTPayTitleBarWidget.h"

@class CTPayFullScreenAdsView;

@interface CTPFullAdsWidget : CTPayTitleBarWidget
{
    CTPayFullScreenAdsView *_fullAdsView;
}

@property(nonatomic) __weak CTPayFullScreenAdsView *fullAdsView; // @synthesize fullAdsView=_fullAdsView;
- (void).cxx_destruct;
- (void)widgetWillDisappear;
- (void)widgetDidAppear;
- (void)loadContentView;

@end

