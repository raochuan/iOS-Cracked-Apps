//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ONEOperationCell.h"

@class NSMutableArray, ONEOpreationCellButtonsModel;

@interface ONEOperationCellButtons : ONEOperationCell
{
    ONEOpreationCellButtonsModel *_model;
    NSMutableArray *_buttonArray;
}

@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) ONEOpreationCellButtonsModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)buttonClick:(id)arg1;
- (void)setDataModel:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
