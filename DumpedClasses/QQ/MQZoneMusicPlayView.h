//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, NSTimer, QZBgVoice, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface MQZoneMusicPlayView : UIView <UIGestureRecognizerDelegate>
{
    long long _uin;
    id <MQZoneMusicCellDelegate> _cellDelegate;
    int _xo;
    UIButton *_controlButton;
    UILabel *_playInfoLabel;
    NSTimer *_playInfoUpdateTimer;
    UILabel *_numInfoLabel;
    UIImageView *_musicIcon;
    UIView *_topLineView;
    UIActivityIndicatorView *_indicatorView;
    UIButton *_fullBtn;
    UIImageView *_tiangleView;
    QZBgVoice *_bgVoiceInfo;
}

@property(retain, nonatomic) QZBgVoice *bgVoiceInfo; // @synthesize bgVoiceInfo=_bgVoiceInfo;
- (void).cxx_destruct;
- (void)autoPlay;
- (void)musicPlayStateChange;
- (void)getUserAllMusicList:(id)arg1;
- (void)controlButtonClick;
- (void)controlButtonStatePause;
- (void)controlButtonStatePlay;
- (void)updatePlayInfoWithAudio:(id)arg1;
- (void)updatePlayButtonState;
- (void)addSeparateLine;
- (void)generateSubviews;
- (void)touch;
- (void)didMoveToSuperview;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) __weak id <MQZoneMusicCellDelegate> cellDelegate; // @dynamic cellDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) long long uin; // @dynamic uin;

@end

