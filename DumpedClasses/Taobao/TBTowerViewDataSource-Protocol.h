//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBTowerView, TBTowerViewCell;

@protocol TBTowerViewDataSource <NSObject>
- (TBTowerViewCell *)towerView:(TBTowerView *)arg1 viewForRow:(long long)arg2 width:(double)arg3;
- (double)heightForRowInTowerView:(TBTowerView *)arg1 row:(long long)arg2 width:(double)arg3;
- (long long)numberOfRowsInTowerView:(TBTowerView *)arg1;
@end

