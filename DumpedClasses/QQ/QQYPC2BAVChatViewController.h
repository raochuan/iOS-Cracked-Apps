//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQP2PAVChatViewController.h"

@class QQYPC2BChatWebViewController;

@interface QQYPC2BAVChatViewController : QQP2PAVChatViewController
{
    _Bool _returnActionCtrl;
    QQYPC2BChatWebViewController *_webViewController;
}

@property(retain, nonatomic) QQYPC2BChatWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(nonatomic) _Bool returnActionCtrl; // @synthesize returnActionCtrl=_returnActionCtrl;
- (void)setShowPanelStyle;
- (void)onVCEnterForeground:(id)arg1;
- (void)updateNetworkLayout;
- (void)playFunnyCallMovie:(id)arg1;
- (void)onGetUserInfo:(id)arg1;
- (void)updateTipsLayoutForType:(int)arg1;
- (void)onSpeakerAction:(id)arg1;
- (void)onReturnAction;
- (void)handleClosed:(id)arg1;
- (void)netConnectAgainOnMain;
- (void)netChangeOnMain:(id)arg1;
- (void)CloseWhenNotified;
- (void)closedOnRunning;
- (void)onForceOffLine;
- (void)onFriendDeleted:(id)arg1;
- (void)closeAction;
- (void)loadConnectedCustomUIElements;
- (_Bool)isNeedBlockShowMsg;
- (void)layoutWebViewController;
- (void)showShowPanel:(_Bool)arg1;
- (void)showTimeAndNetWorkView:(_Bool)arg1;
- (void)showAudioWave:(_Bool)arg1;
- (struct CGRect)getWebContainerRect;
- (void)adJustWaveView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)loadBackgroundImage;
- (void)loadControlPanel;
- (void)refreshSpeakerMode;
- (void)initInterface;
- (void)onNetWorkViewUpdate:(id)arg1;
- (void)onShowPanelTipsUpdate:(id)arg1;
- (void)restartAudioAfterSysEvt;
- (void)stopAudioBySysEvt;
- (void)videoInterruptEnd;
- (void)videoInterruptStart;
- (void)onVideoRecordControllerAppear:(id)arg1;
- (void)onVideoRecordControllerDisappear:(id)arg1;
- (id)getControlPanel;
- (id)getShowPanelWithFrame:(struct CGRect)arg1;
- (id)buildQuitInfo;
- (void)dealloc;
- (id)initWithC2BChatModel:(id)arg1;

@end
