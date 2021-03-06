//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "OPSInputCaptchaViewDelegate.h"

@class NSString, OPSInputCaptchaView;

@interface OPSCancellationCaptchaViewController : UIViewController <OPSInputCaptchaViewDelegate>
{
    _Bool _captchaCodeVerified;
    _Bool _alertDismissing;
    OPSInputCaptchaView *_inputCaptchaView;
    double _keyboardHeight;
    NSString *_captchaCode;
}

@property(copy, nonatomic) NSString *captchaCode; // @synthesize captchaCode=_captchaCode;
@property(nonatomic) _Bool alertDismissing; // @synthesize alertDismissing=_alertDismissing;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) OPSInputCaptchaView *inputCaptchaView; // @synthesize inputCaptchaView=_inputCaptchaView;
@property(nonatomic) _Bool captchaCodeVerified; // @synthesize captchaCodeVerified=_captchaCodeVerified;
- (void).cxx_destruct;
- (void)doVerifyCaptchaCode;
- (void)doRequestCaptchaImage;
- (void)buttonCloseClickedWithOPSInputCaptchaView:(id)arg1;
- (void)buttonRefreshCaptchaClicked:(id)arg1;
- (void)imageViewCaptchaTapped:(id)arg1;
- (void)captchaInputDidReady:(id)arg1 captchaCode:(id)arg2;
- (void)handleApplicationDidBecomeActiveNotification:(id)arg1;
- (void)handleApplicationWillResignActiveNotification:(id)arg1;
- (void)handleKeyboardDidHideNotification:(id)arg1;
- (void)handleKeyboardDidShowNotification:(id)arg1;
- (void)handleKeyboardWillHideNotification:(id)arg1;
- (void)handleKeyboardWillShowNotification:(id)arg1;
- (void)layoutSelfViewCenterWithKeyboardHeight:(double)arg1;
- (void)registerNotifications;
- (void)layoutSelfView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

