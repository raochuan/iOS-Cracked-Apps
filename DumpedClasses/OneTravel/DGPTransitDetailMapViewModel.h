//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DGPBaseMapViewModel.h"

@class DGPTransferSolutionListModel, DGPTransferSolutionModel, NSArray, NSMutableArray, NSString, ONESBaseRouteOverlay;

@interface DGPTransitDetailMapViewModel : DGPBaseMapViewModel
{
    NSArray *_walkingRouteOverlayArray;
    NSArray *_bicycleRouteOverlayArray;
    NSArray *_bicycleAnnotationArray;
    NSMutableArray *_startEndAnnotationArray;
    NSArray *_transitMiddleAnnotations;
    NSMutableArray *_transitStaticFirstDepartureLineNameAnnotations;
    NSMutableArray *_transitDynamicNotLastArrivalLineNameAnnotations;
    NSMutableArray *_transitDynamicNotFirstDepartureLineNameAnnotations;
    NSMutableArray *_transitDynamicNotFirstDepartureTransferLineNameAnnotations;
    NSString *_selectedTransitStopAnnotationID;
    ONESBaseRouteOverlay *_scaleRouteOverlay;
    CDUnknownBlockType _goToOfoWithBicycleLineModel;
    DGPTransferSolutionListModel *_transferSolutionListModel;
    DGPTransferSolutionModel *_currentTransferSolutionModel;
}

@property(retain, nonatomic) DGPTransferSolutionModel *currentTransferSolutionModel; // @synthesize currentTransferSolutionModel=_currentTransferSolutionModel;
@property(retain, nonatomic) DGPTransferSolutionListModel *transferSolutionListModel; // @synthesize transferSolutionListModel=_transferSolutionListModel;
@property(copy, nonatomic) CDUnknownBlockType goToOfoWithBicycleLineModel; // @synthesize goToOfoWithBicycleLineModel=_goToOfoWithBicycleLineModel;
@property(retain, nonatomic) ONESBaseRouteOverlay *scaleRouteOverlay; // @synthesize scaleRouteOverlay=_scaleRouteOverlay;
@property(copy, nonatomic) NSString *selectedTransitStopAnnotationID; // @synthesize selectedTransitStopAnnotationID=_selectedTransitStopAnnotationID;
@property(retain, nonatomic) NSMutableArray *transitDynamicNotFirstDepartureTransferLineNameAnnotations; // @synthesize transitDynamicNotFirstDepartureTransferLineNameAnnotations=_transitDynamicNotFirstDepartureTransferLineNameAnnotations;
@property(retain, nonatomic) NSMutableArray *transitDynamicNotFirstDepartureLineNameAnnotations; // @synthesize transitDynamicNotFirstDepartureLineNameAnnotations=_transitDynamicNotFirstDepartureLineNameAnnotations;
@property(retain, nonatomic) NSMutableArray *transitDynamicNotLastArrivalLineNameAnnotations; // @synthesize transitDynamicNotLastArrivalLineNameAnnotations=_transitDynamicNotLastArrivalLineNameAnnotations;
@property(retain, nonatomic) NSMutableArray *transitStaticFirstDepartureLineNameAnnotations; // @synthesize transitStaticFirstDepartureLineNameAnnotations=_transitStaticFirstDepartureLineNameAnnotations;
@property(retain, nonatomic) NSArray *transitMiddleAnnotations; // @synthesize transitMiddleAnnotations=_transitMiddleAnnotations;
@property(retain, nonatomic) NSMutableArray *startEndAnnotationArray; // @synthesize startEndAnnotationArray=_startEndAnnotationArray;
@property(retain, nonatomic) NSArray *bicycleAnnotationArray; // @synthesize bicycleAnnotationArray=_bicycleAnnotationArray;
@property(retain, nonatomic) NSArray *bicycleRouteOverlayArray; // @synthesize bicycleRouteOverlayArray=_bicycleRouteOverlayArray;
@property(retain, nonatomic) NSArray *walkingRouteOverlayArray; // @synthesize walkingRouteOverlayArray=_walkingRouteOverlayArray;
- (void).cxx_destruct;
- (void)updateScaleRouteOverlaySelectedAnnotationWithSegmentIndex:(long long)arg1;
- (id)metroRouteOverlayWithPolyline:(id)arg1;
- (id)busRouteOverlayWithPolyline:(id)arg1;
- (id)bicycleRouteOverlayWithLocationArray:(id)arg1;
- (id)walkingRouteOverlayWithPolyline:(id)arg1;
- (_Bool)transitInSameStationWithSegment:(id)arg1;
- (id)arrivalAnnotationWithMetroBusModel:(id)arg1 withNextSegmentModel:(id)arg2 withExitModel:(id)arg3;
- (id)departureAnnotationWithMetroBusModel:(id)arg1 withPreSegmentModel:(id)arg2 withETA:(id)arg3;
- (id)generateTrafficRouteOverlay:(id)arg1 withPolyLineIndexes:(id)arg2 withLLIndexes:(id)arg3;
- (id)generateRouteOverlayWithMetroBusModel:(id)arg1;
- (void)parseTrafficOverlay;
- (void)parseDefaultSelectedAnnotation;
- (id)metrobusModelWithLineID:(id)arg1 withTransferSegmentModel:(id)arg2;
- (id)transitStopNameAnnotationWithMetrobusModel:(id)arg1 forDeparture:(_Bool)arg2 withType:(unsigned long long)arg3;
- (void)addArrivalLineNameWithMetroBusModel:(id)arg1 andBicycleLineModel:(id)arg2 isSameTransfer:(_Bool)arg3;
- (void)addDynamicLineNameWithModel:(id)arg1 preModel:(id)arg2;
- (void)addFirstLineName:(id)arg1;
- (void)parseTransitDynamicLineNameAnnotations;
- (_Bool)isSameTransfer:(id)arg1;
- (void)parseTransitDynamicNameAnnotations;
- (void)parseTransitStaticAnnotations;
- (void)parseTransitMiddleAnnotation;
- (void)dynamicStationAnnotations;
- (void)bicycleAnnotations;
- (void)defaultStationAnnotations;
- (void)startEndAnnotations;
- (void)parseStopsAnnotation;
- (id)metroBusOverlayWithTransferSolutionModel:(id)arg1;
- (void)parseMetroBusRoute;
- (void)parseBicycleRoute;
- (void)parseWalkingRoute;
- (void)parseOriginTransferModel;
- (id)initWithTransitModel:(id)arg1 withIndex:(long long)arg2;

@end
