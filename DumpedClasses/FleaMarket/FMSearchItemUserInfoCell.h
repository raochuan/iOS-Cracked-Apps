//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "FMComponentCellProtocol.h"

@class FMAvatarImageView, FMUserTagLabel, MASConstraint, NSString, UILabel;

@interface FMSearchItemUserInfoCell : UITableViewCell <FMComponentCellProtocol>
{
    FMAvatarImageView *_avatarImageView;
    UILabel *_userNameLabel;
    UILabel *_userDescLabel;
    FMUserTagLabel *_tagLabel;
    MASConstraint *_nameLabelWidth;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) MASConstraint *nameLabelWidth; // @synthesize nameLabelWidth=_nameLabelWidth;
@property(retain, nonatomic) FMUserTagLabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UILabel *userDescLabel; // @synthesize userDescLabel=_userDescLabel;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) FMAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)didSelectCell;
- (void)updateConstraints;
- (void)bindComponent:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

