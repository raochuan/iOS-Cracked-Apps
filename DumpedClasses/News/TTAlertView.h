//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedButton, SSThemedLabel, TTAlphaThemedButton, UIView;

@interface TTAlertView : SSThemedView
{
    SSThemedView *_centerView;
    SSThemedLabel *_titleLb;
    SSThemedLabel *_messageLb;
    TTAlphaThemedButton *_tipBtn;
    TTAlphaThemedButton *_cancelBtn;
    SSThemedButton *_doneBtn;
    CDUnknownBlockType _plainAlertComplete;
    UIView *_suggestSuperview;
}

+ (id)_attributesWithFontSize:(double)arg1 lineSpacing:(double)arg2 lineBreakMode:(long long)arg3 textAlignment:(long long)arg4;
+ (id)attributedStringWithString:(id)arg1 fontSize:(double)arg2 lineSpacing:(double)arg3 lineBreakMode:(long long)arg4 textAlignment:(long long)arg5;
@property(nonatomic) __weak UIView *suggestSuperview; // @synthesize suggestSuperview=_suggestSuperview;
@property(copy, nonatomic) CDUnknownBlockType plainAlertComplete; // @synthesize plainAlertComplete=_plainAlertComplete;
@property(retain, nonatomic) SSThemedButton *doneBtn; // @synthesize doneBtn=_doneBtn;
@property(retain, nonatomic) TTAlphaThemedButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) TTAlphaThemedButton *tipBtn; // @synthesize tipBtn=_tipBtn;
@property(retain, nonatomic) SSThemedLabel *messageLb; // @synthesize messageLb=_messageLb;
@property(retain, nonatomic) SSThemedLabel *titleLb; // @synthesize titleLb=_titleLb;
@property(retain, nonatomic) SSThemedView *centerView; // @synthesize centerView=_centerView;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)doneBtnTouched:(id)arg1;
- (void)cancelBtnTouched:(id)arg1;
- (void)tipBtnTouched:(id)arg1;
- (void)layoutSubviews;
- (void)doLayOut;
- (void)hide;
- (void)show;
- (id)initPlainAlertWithTitle:(id)arg1 message:(id)arg2 cancelBtnTitle:(id)arg3 confirmBtnTitle:(id)arg4 animated:(_Bool)arg5 completed:(CDUnknownBlockType)arg6;
- (void)addKeyboardNotifications;
- (id)init;
- (void)dealloc;

@end

