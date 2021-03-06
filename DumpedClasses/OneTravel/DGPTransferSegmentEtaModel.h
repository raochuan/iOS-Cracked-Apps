//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DGCBaseDataModel.h"

@class NSArray<DGPTransferBusModel>, NSArray<DGPTransferOtherLineModel>, NSString;

@interface DGPTransferSegmentEtaModel : DGCBaseDataModel
{
    NSString *_mode;
    double _startAt;
    double _endAt;
    NSArray<DGPTransferBusModel> *_buses;
    NSArray<DGPTransferOtherLineModel> *_otherLines;
}

@property(retain, nonatomic) NSArray<DGPTransferOtherLineModel> *otherLines; // @synthesize otherLines=_otherLines;
@property(retain, nonatomic) NSArray<DGPTransferBusModel> *buses; // @synthesize buses=_buses;
@property(nonatomic) double endAt; // @synthesize endAt=_endAt;
@property(nonatomic) double startAt; // @synthesize startAt=_startAt;
@property(retain, nonatomic) NSString *mode; // @synthesize mode=_mode;
- (void).cxx_destruct;

@end

