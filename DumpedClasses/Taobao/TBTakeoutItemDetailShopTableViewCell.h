//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSMutableArray, TBTakeoutStoreBriefView, UIImageView, UILabel, UIView;

@interface TBTakeoutItemDetailShopTableViewCell : UITableViewCell
{
    _Bool _expanded;
    CDUnknownBlockType _handler;
    TBTakeoutStoreBriefView *_baseInfoView;
    UILabel *_rightLabel;
    UIView *_dashLine;
    UILabel *_activityNumberLabel;
    UIImageView *_expandArrow;
    NSMutableArray *_activityLabels;
    UIView *_touchView;
}

@property(retain, nonatomic) UIView *touchView; // @synthesize touchView=_touchView;
@property(retain, nonatomic) NSMutableArray *activityLabels; // @synthesize activityLabels=_activityLabels;
@property(retain, nonatomic) UIImageView *expandArrow; // @synthesize expandArrow=_expandArrow;
@property(retain, nonatomic) UILabel *activityNumberLabel; // @synthesize activityNumberLabel=_activityNumberLabel;
@property(retain, nonatomic) UIView *dashLine; // @synthesize dashLine=_dashLine;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) TBTakeoutStoreBriefView *baseInfoView; // @synthesize baseInfoView=_baseInfoView;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)tap:(id)arg1;
- (void)configItemDetailShopTableViewCell:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

