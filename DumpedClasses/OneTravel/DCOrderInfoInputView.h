//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DCOrderInfoInputViewContext, DCRichButton, DCRichLabel, NSString, UIImageView;

@interface DCOrderInfoInputView : UIView
{
    _Bool _isHidenContentView;
    _Bool _isHaveText;
    DCOrderInfoInputViewContext *_viewContext;
    CDUnknownBlockType _clickButtonBlock;
    UIImageView *_iconImageView;
    DCRichLabel *_contentLable;
    DCRichButton *_clickButton;
    UIView *_rightLine;
    UIView *_bottomLine;
    NSString *_contentText;
    struct CGRect _iconFrame;
    struct CGRect _contentFrame;
}

@property(copy, nonatomic) NSString *contentText; // @synthesize contentText=_contentText;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) DCRichButton *clickButton; // @synthesize clickButton=_clickButton;
@property(retain, nonatomic) DCRichLabel *contentLable; // @synthesize contentLable=_contentLable;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) _Bool isHaveText; // @synthesize isHaveText=_isHaveText;
@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(nonatomic) struct CGRect iconFrame; // @synthesize iconFrame=_iconFrame;
@property(copy, nonatomic) CDUnknownBlockType clickButtonBlock; // @synthesize clickButtonBlock=_clickButtonBlock;
@property(nonatomic) _Bool isHidenContentView; // @synthesize isHidenContentView=_isHidenContentView;
@property(retain, nonatomic) DCOrderInfoInputViewContext *viewContext; // @synthesize viewContext=_viewContext;
- (void).cxx_destruct;
- (void)updatePlaceHolder;
- (void)reloadView;
- (void)setContentLableText:(id)arg1 withDetailText:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 withContext:(id)arg2;

@end

