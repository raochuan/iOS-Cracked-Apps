//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMCommonCell.h"

#import "NMCheckBoxDelegate.h"
#import "NMFocusButtonDelegate.h"

@class NMAvatarView, NMBadgePointView, NMCheckBox, NMFocusButton, NMMoreOperationButton, NMUser, NSString, UIButton, UIColor, UIImageView, UILabel, UIView;

@interface NMUserCell : NMCommonCell <NMFocusButtonDelegate, NMCheckBoxDelegate>
{
    unsigned long long _titleType;
    unsigned long long _buttonType;
    UILabel *_nameLabel;
    UILabel *_remarkLabel;
    UILabel *_otherLabel;
    NMCheckBox *_checkBox;
    NMAvatarView *_avatarView;
    NMMoreOperationButton *_moreOperationButton;
    UIColor *_bgColor;
    UIColor *_highlightedBgColor;
    NMUser *_user;
    UIButton *_sendMsgButton;
    UIImageView *_genderNameAppendixView;
    UIImageView *_vipNameAppendixView;
    UIImageView *_arrowImageView;
    NMBadgePointView *_badgeView;
    UIImageView *_subtitlePreAppendixView;
    NMFocusButton *_focusButton;
    _Bool _showSeparator;
    _Bool _newFlag;
    _Bool _showVipPro;
    UIView *_operationButton;
    id <NMUserCellDelegate> _delegate;
}

+ (double)cellHeight;
@property(nonatomic) id <NMUserCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showVipPro; // @synthesize showVipPro=_showVipPro;
@property(retain, nonatomic) UIView *operationButton; // @synthesize operationButton=_operationButton;
@property(retain, nonatomic) UILabel *otherLabel; // @synthesize otherLabel=_otherLabel;
@property(retain, nonatomic) UILabel *remarkLabel; // @synthesize remarkLabel=_remarkLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) _Bool newFlag; // @synthesize newFlag=_newFlag;
@property(readonly, nonatomic) _Bool showSeparator; // @synthesize showSeparator=_showSeparator;
@property(retain, nonatomic) NMUser *user; // @synthesize user=_user;
@property(retain, nonatomic) NMAvatarView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
@property(readonly, nonatomic) NMFocusButton *userIsFocusButton;
- (void)moreOperationClicked:(id)arg1;
- (void)checkBox:(id)arg1 checked:(_Bool)arg2;
- (id)subtitlePreAppedinx:(id)arg1;
- (id)vipNameAppendix:(id)arg1 isNightMode:(_Bool)arg2;
- (id)genderNameAppendix:(id)arg1;
- (_Bool)avatarNeedStar;
- (double)rightMargin;
- (void)setSubTitle:(id)arg1;
- (id)remarkStringWithTitleType:(unsigned long long)arg1;
- (id)titleStringWithTitleType:(unsigned long long)arg1;
- (void)handleVipMarkNightMode:(id)arg1;
- (void)setVipIcon;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)focusButtonClicked:(id)arg1 buttonType:(unsigned long long)arg2;
- (void)sendMsgButtonClicked:(id)arg1;
- (void)layoutSubviews;
- (void)initButtonWithButtonType:(unsigned long long)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 buttonType:(unsigned long long)arg3 titleType:(unsigned long long)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 buttonType:(unsigned long long)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
