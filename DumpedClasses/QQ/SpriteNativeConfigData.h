//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, SpriteGamePkgModel;

@interface SpriteNativeConfigData : NSObject
{
    NSMutableArray *_packgeList;
    NSMutableArray *_actionsList;
    SpriteGamePkgModel *_gamePkgModel;
    NSMutableArray *_favoriteList;
    NSMutableArray *_collectionList;
    NSMutableArray *_joinList;
    NSMutableArray *_worldList;
    unsigned long long _actionTimeStamp;
}

@property(readonly, nonatomic) NSArray *worldList; // @synthesize worldList=_worldList;
@property(readonly, nonatomic) NSArray *joinList; // @synthesize joinList=_joinList;
@property(readonly, nonatomic) NSArray *collectionList; // @synthesize collectionList=_collectionList;
@property(readonly, nonatomic) NSArray *favoriteList; // @synthesize favoriteList=_favoriteList;
@property(readonly, nonatomic) SpriteGamePkgModel *gamePkgModel; // @synthesize gamePkgModel=_gamePkgModel;
@property(readonly, nonatomic) NSArray *actionsList; // @synthesize actionsList=_actionsList;
@property(readonly, nonatomic) NSArray *packgeList; // @synthesize packgeList=_packgeList;
@property(nonatomic) unsigned long long actionTimeStamp; // @synthesize actionTimeStamp=_actionTimeStamp;
- (void)p_clearActionData;
- (void)removeAllWorldCollection;
- (void)removeWorldCollectionObject:(id)arg1;
- (void)addWorldCollectionObject:(id)arg1;
- (void)removeAllJoinActive;
- (void)removeJoinActiveObject:(id)arg1;
- (void)addJoinActiveObject:(id)arg1;
- (void)removeAllCollection;
- (void)removeCollectionObject:(id)arg1;
- (void)addCollectionObject:(id)arg1;
- (void)removeAllFavorite;
- (void)removeFavoriteObject:(id)arg1;
- (void)addFavoriteObject:(id)arg1;
- (void)addActionObject:(id)arg1;
- (void)addPackgeObject:(id)arg1;
- (void)modifyWorldDataWith:(id)arg1;
- (void)modifyJoinActiveDataWith:(id)arg1;
- (void)modifyCollectionActionDataWith:(id)arg1;
- (void)modifyFavActionDataWith:(id)arg1;
- (void)modifyGameDataWithGameJsonDic:(id)arg1;
- (void)modifyActionDataWithAnother:(id)arg1;
- (id)init;
- (void)dealloc;

@end

