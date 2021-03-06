//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class MTabbarItemModel, UILabel, UIView;

@interface MTabbarItem : UIButton
{
    MTabbarItemModel *_model;
    id <MTabbarItemDataSource> _dataSource;
    UILabel *_badgeLabel;
    UIView *_circleView;
}

+ (id)tabbarItemWithDataSource:(id)arg1 itemModel:(id)arg2;
@property(retain, nonatomic) UIView *circleView; // @synthesize circleView=_circleView;
@property(retain, nonatomic) UILabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
@property(nonatomic) __weak id <MTabbarItemDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) MTabbarItemModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (id)badgeBackgroundColor;
- (id)badgeColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

