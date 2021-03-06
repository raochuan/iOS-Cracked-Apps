//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "DGCSplitSlideAnimationProtocol.h"
#import "DGPagingScrollViewDataSource.h"
#import "DGPagingScrollViewDelegate.h"
#import "QSearchDelegate.h"

@class DGPLineSelectorController, DGPOldTransitMapBusiness, DGPRealtimeUpdateCenter, DGPRouteLineAPIClient, DGPTopView, DGPagingScrollView, NSArray, NSString, ONEMapLocationButton, ONESBaseMapEntrance;

@interface DGPTransitDetailViewController : UIViewController <QSearchDelegate, DGPagingScrollViewDataSource, DGPagingScrollViewDelegate, DGCSplitSlideAnimationProtocol>
{
    _Bool _needBlackBar;
    NSArray *_models;
    NSString *_fid;
    DGPTopView *_topView;
    ONESBaseMapEntrance *_mapView;
    DGPOldTransitMapBusiness *_mapBusiness;
    DGPagingScrollView *_pageView;
    long long _index;
    ONEMapLocationButton *_locationButton;
    DGPLineSelectorController *_lineSelectorController;
    DGPRouteLineAPIClient *_routeLineAPIClient;
    DGPRealtimeUpdateCenter *_updateCenter;
}

@property(retain, nonatomic) DGPRealtimeUpdateCenter *updateCenter; // @synthesize updateCenter=_updateCenter;
@property(retain, nonatomic) DGPRouteLineAPIClient *routeLineAPIClient; // @synthesize routeLineAPIClient=_routeLineAPIClient;
@property(retain, nonatomic) DGPLineSelectorController *lineSelectorController; // @synthesize lineSelectorController=_lineSelectorController;
@property(retain, nonatomic) ONEMapLocationButton *locationButton; // @synthesize locationButton=_locationButton;
@property(nonatomic) _Bool needBlackBar; // @synthesize needBlackBar=_needBlackBar;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) DGPagingScrollView *pageView; // @synthesize pageView=_pageView;
@property(retain, nonatomic) DGPOldTransitMapBusiness *mapBusiness; // @synthesize mapBusiness=_mapBusiness;
@property(retain, nonatomic) ONESBaseMapEntrance *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) DGPTopView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) NSString *fid; // @synthesize fid=_fid;
@property(retain, nonatomic) NSArray *models; // @synthesize models=_models;
- (void).cxx_destruct;
- (void)slideInWithDuration:(double)arg1;
- (void)slideOutWithDuration:(double)arg1;
- (id)cityId;
- (id)generateRealTimeParamArray;
- (void)stopUpdateLiveInfo;
- (void)startUpdateLiveInfo;
- (void)gestureBackFinish;
- (void)setswarmwindowStyleblack:(_Bool)arg1;
- (void)transitMapDetailScrollEndedResetMap;
- (void)delayResizeCenter;
- (void)delayResizeBottom;
- (void)transitScrollEnded;
- (void)showAnnotationCallOut;
- (void)hideAnnotationCallOut;
- (void)segmentInfo:(id)arg1;
- (void)goLineDetailAction:(id)arg1 cityId:(id)arg2;
- (void)goToLindeDetail:(id)arg1;
- (void)pagingScrollViewDidChangePages:(id)arg1;
- (id)pagingScrollView:(id)arg1 headerForPageAtIndex:(long long)arg2;
- (id)pagingScrollView:(id)arg1 pageViewForIndex:(long long)arg2;
- (long long)numberOfPagesInPagingScrollView:(id)arg1;
- (void)relocateButtons;
- (void)refreshMapForIndex:(long long)arg1 withBottomPadding:(double)arg2;
- (void)locationButtonClick;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)applicationBecomActive;
- (id)initWithCurrentIndex:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

