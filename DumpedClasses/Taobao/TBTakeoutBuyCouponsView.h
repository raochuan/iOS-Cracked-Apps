//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, TBTakeoutBuyCouponsDetailModel, TBTakeoutBuyCouponsModel, UIButton, UILabel, UITableView;

@interface TBTakeoutBuyCouponsView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    UILabel *_title;
    UILabel *_subtitle;
    UIButton *_closeButton;
    UITableView *_tableView;
    UIButton *_coudanButton;
    TBTakeoutBuyCouponsModel *_model;
    TBTakeoutBuyCouponsDetailModel *_selectedDetail;
    CDUnknownBlockType _selectBlock;
    CDUnknownBlockType _coudanBock;
}

@property(copy, nonatomic) CDUnknownBlockType coudanBock; // @synthesize coudanBock=_coudanBock;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(retain, nonatomic) TBTakeoutBuyCouponsDetailModel *selectedDetail; // @synthesize selectedDetail=_selectedDetail;
@property(retain, nonatomic) TBTakeoutBuyCouponsModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)showCoupons:(id)arg1 selectBlock:(CDUnknownBlockType)arg2 coudanClicked:(CDUnknownBlockType)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)addCoudanButton;
- (void)setupViews;
- (void)coudanAction;
- (void)closeAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

