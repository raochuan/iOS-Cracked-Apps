//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AliDetailASYIService;

@interface AliDetailPtApiRequestMarkModel : NSObject
{
    _Bool _isRequestLoading;
    _Bool _isRequestSuccess;
    AliDetailASYIService *_dataService;
}

@property(retain, nonatomic) AliDetailASYIService *dataService; // @synthesize dataService=_dataService;
@property(nonatomic) _Bool isRequestSuccess; // @synthesize isRequestSuccess=_isRequestSuccess;
@property(nonatomic) _Bool isRequestLoading; // @synthesize isRequestLoading=_isRequestLoading;
- (void).cxx_destruct;

@end

