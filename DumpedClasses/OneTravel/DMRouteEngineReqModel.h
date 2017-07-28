//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class DMNaviGuideModel, NSString;

@interface DMRouteEngineReqModel : NSObject <NSCopying>
{
    _Bool _lightNavi;
    _Bool _autoStartNavi;
    _Bool _isNeedTraj;
    int _orderStage;
    int _bizType;
    DMNaviGuideModel *_naviGuide;
    NSString *_orderId;
    NSString *_phoneNum;
    NSString *_imei;
    NSString *_token;
    NSString *_traverId;
    unsigned long long _lastDiDiRouteId;
    NSString *_didiVersion;
    unsigned long long _driverId;
    long long _curRouteId;
}

@property(nonatomic) long long curRouteId; // @synthesize curRouteId=_curRouteId;
@property(nonatomic) _Bool isNeedTraj; // @synthesize isNeedTraj=_isNeedTraj;
@property(nonatomic) unsigned long long driverId; // @synthesize driverId=_driverId;
@property(nonatomic) _Bool autoStartNavi; // @synthesize autoStartNavi=_autoStartNavi;
@property(nonatomic) _Bool lightNavi; // @synthesize lightNavi=_lightNavi;
@property(copy, nonatomic) NSString *didiVersion; // @synthesize didiVersion=_didiVersion;
@property(nonatomic) unsigned long long lastDiDiRouteId; // @synthesize lastDiDiRouteId=_lastDiDiRouteId;
@property(copy, nonatomic) NSString *traverId; // @synthesize traverId=_traverId;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(nonatomic) int bizType; // @synthesize bizType=_bizType;
@property(nonatomic) int orderStage; // @synthesize orderStage=_orderStage;
@property(copy, nonatomic) NSString *phoneNum; // @synthesize phoneNum=_phoneNum;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) DMNaviGuideModel *naviGuide; // @synthesize naviGuide=_naviGuide;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
