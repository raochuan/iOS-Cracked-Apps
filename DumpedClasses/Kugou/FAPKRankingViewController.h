//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAViewController.h"

#import "FAPKRankingListDataProviderDelegate.h"
#import "FARankingUserCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FAThemeView, NSString, UITableView, UIView;

@interface FAPKRankingViewController : FAViewController <UITableViewDataSource, UITableViewDelegate, FARankingUserCellDelegate, FAPKRankingListDataProviderDelegate>
{
    _Bool _hasFristRefersh;
    unsigned long long _rankingType;
    id <FAPKRankingListDataProviderProtocol> _provider;
    Class _cellClass;
    UITableView *_tableView;
    NSString *_headTipStr;
    UIView *_statusView;
    FAThemeView *_headView;
}

@property(retain, nonatomic) FAThemeView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UIView *statusView; // @synthesize statusView=_statusView;
@property(nonatomic) _Bool hasFristRefersh; // @synthesize hasFristRefersh=_hasFristRefersh;
@property(retain, nonatomic) NSString *headTipStr; // @synthesize headTipStr=_headTipStr;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
@property(retain, nonatomic) id <FAPKRankingListDataProviderProtocol> provider; // @synthesize provider=_provider;
@property(nonatomic) unsigned long long rankingType; // @synthesize rankingType=_rankingType;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)getPkRankingListDataProviderDidFail:(id)arg1 error:(id)arg2;
- (void)getPkRankingListDataProviderDidSuccess:(id)arg1;
- (void)showStatusViewIfNeed:(long long)arg1 title:(id)arg2;
- (id)getCurrentArray;
- (void)requestData;
- (void)refershView;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

