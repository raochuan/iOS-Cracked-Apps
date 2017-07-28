//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "FMComponentCellProtocol.h"

@class NSString, UIImageView, UILabel, UIView;

@interface FMMessageCenterBookCell : UITableViewCell <FMComponentCellProtocol>
{
    UILabel *__leftLabel;
    UILabel *__midLabel;
    UIImageView *__arrow;
    UIView *__bottomLine;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) UIView *_bottomLine; // @synthesize _bottomLine=__bottomLine;
@property(retain, nonatomic) UIImageView *_arrow; // @synthesize _arrow=__arrow;
@property(retain, nonatomic) UILabel *_midLabel; // @synthesize _midLabel=__midLabel;
@property(retain, nonatomic) UILabel *_leftLabel; // @synthesize _leftLabel=__leftLabel;
- (void).cxx_destruct;
- (void)didSelectCell;
- (void)bindComponent:(id)arg1;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
