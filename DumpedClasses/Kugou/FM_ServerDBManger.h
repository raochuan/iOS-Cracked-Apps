//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DataPersistence;

@interface FM_ServerDBManger : NSObject
{
    DataPersistence *_db;
}

+ (id)manager;
@property(readonly, nonatomic) DataPersistence *db; // @synthesize db=_db;
- (void).cxx_destruct;
- (id)init;

@end
