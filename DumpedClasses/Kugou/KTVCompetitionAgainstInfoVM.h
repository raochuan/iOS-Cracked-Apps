//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFViewModelObject.h"

@class KTVCompetitionNetHelper, KTVJudgeKrcModel, KTV_SongInfo, KtvKrcModel, NSMutableArray, NSObject<OS_dispatch_group>;

@interface KTVCompetitionAgainstInfoVM : KFViewModelObject
{
    _Bool _isRequestSuccess;
    KTV_SongInfo *_songInfo;
    long long _competitorNum;
    long long _judgeNum;
    NSMutableArray *_againstInfoList;
    KTVCompetitionNetHelper *_netHelper;
    unsigned long long _pageSize;
    NSObject<OS_dispatch_group> *_group;
    KtvKrcModel *_krcModel;
    KTVJudgeKrcModel *_judgeKrcModel;
    long long _krcAdjust;
}

@property(nonatomic) long long krcAdjust; // @synthesize krcAdjust=_krcAdjust;
@property(retain, nonatomic) KTVJudgeKrcModel *judgeKrcModel; // @synthesize judgeKrcModel=_judgeKrcModel;
@property(retain, nonatomic) KtvKrcModel *krcModel; // @synthesize krcModel=_krcModel;
@property(nonatomic) _Bool isRequestSuccess; // @synthesize isRequestSuccess=_isRequestSuccess;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(nonatomic) unsigned long long pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) KTVCompetitionNetHelper *netHelper; // @synthesize netHelper=_netHelper;
@property(retain, nonatomic) NSMutableArray *againstInfoList; // @synthesize againstInfoList=_againstInfoList;
@property(nonatomic) long long judgeNum; // @synthesize judgeNum=_judgeNum;
@property(nonatomic) long long competitorNum; // @synthesize competitorNum=_competitorNum;
@property(retain, nonatomic) KTV_SongInfo *songInfo; // @synthesize songInfo=_songInfo;
- (void).cxx_destruct;
- (id)translateKrcModelToJudgeKrcModel:(id)arg1;
- (void)analyzeKrc;
- (double)takeTheJumpPreludeTime;
- (long long)takeThekrcAdjust;
- (id)takeTheJudgeKrcModel;
- (id)itemWithIndex:(long long)arg1;
- (unsigned long long)numberOfItem;
- (void)loadKrc;
- (void)loadMore;
- (void)update;
- (id)init;

@end
