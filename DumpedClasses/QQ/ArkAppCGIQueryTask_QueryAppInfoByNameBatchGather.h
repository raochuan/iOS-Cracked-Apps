//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ArkAppCGIQueryTask.h"

@class NSMutableDictionary;

@interface ArkAppCGIQueryTask_QueryAppInfoByNameBatchGather : ArkAppCGIQueryTask
{
    int _requestCount;
    int _requestFinished;
    int _updateInterval;
    NSMutableDictionary *_resultList;
}

@property(readonly, nonatomic) NSMutableDictionary *resultList; // @synthesize resultList=_resultList;
@property(nonatomic) int updateInterval; // @synthesize updateInterval=_updateInterval;
@property int requestFinished; // @synthesize requestFinished=_requestFinished;
@property int requestCount; // @synthesize requestCount=_requestCount;
- (void).cxx_destruct;
- (void)doCallback;
- (id)init;

@end

