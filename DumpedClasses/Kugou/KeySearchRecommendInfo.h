//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ResponseInfo.h"

@class NSMutableArray;

@interface KeySearchRecommendInfo : ResponseInfo
{
    int recordCount;
    NSMutableArray *recommends;
}

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@property(retain, nonatomic) NSMutableArray *recommends; // @synthesize recommends;
@property int recordCount; // @synthesize recordCount;
- (void).cxx_destruct;
- (id)init;

@end

