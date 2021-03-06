//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

#import "IFNumberKeyboardDelegate.h"
#import "UITextFieldDelegate.h"

@class FMAvatarImageView, FMNoPasteTextField, FMTransferMoneyDO, NSString, UIButton, UILabel, UIView;

@interface FMTransferMoneyView : UIWindow <UITextFieldDelegate, IFNumberKeyboardDelegate>
{
    FMTransferMoneyDO *_transferInfo;
    NSString *_amount;
    UIView *_maskView;
    UIView *_contentView;
    FMAvatarImageView *_payeeAvatar;
    UILabel *_payeeNameLabel;
    UILabel *_amountLabel;
    UILabel *_rmbLabel;
    FMNoPasteTextField *_amountField;
    UIView *_seperator;
    UIButton *_transferButton;
    UILabel *_descriptionLabel;
    UIButton *_closeButton;
}

@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIButton *transferButton; // @synthesize transferButton=_transferButton;
@property(retain, nonatomic) UIView *seperator; // @synthesize seperator=_seperator;
@property(retain, nonatomic) FMNoPasteTextField *amountField; // @synthesize amountField=_amountField;
@property(retain, nonatomic) UILabel *rmbLabel; // @synthesize rmbLabel=_rmbLabel;
@property(retain, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) UILabel *payeeNameLabel; // @synthesize payeeNameLabel=_payeeNameLabel;
@property(retain, nonatomic) FMAvatarImageView *payeeAvatar; // @synthesize payeeAvatar=_payeeAvatar;
- (void).cxx_destruct;
- (void)numberKeyboardBackspace;
- (void)numberKeyboardDone;
- (void)numberKeyboardHide;
- (void)numberKeyboardInput:(id)arg1;
- (void)handleTransfer:(id)arg1;
- (void)onTransfer:(id)arg1;
- (void)onClose:(id)arg1;
- (void)setIsTransfer:(_Bool)arg1;
- (_Bool)isValidAmount;
- (id)getLocation;
- (void)updateTransferButtonState:(_Bool)arg1;
- (void)setTransferInfo:(id)arg1;
- (void)layout;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

