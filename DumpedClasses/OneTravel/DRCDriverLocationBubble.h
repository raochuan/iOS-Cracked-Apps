//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TTTAttributedLabel, UIImageView;

@interface DRCDriverLocationBubble : UIView
{
    UIImageView *_leftBg;
    UIImageView *_rightBg;
    TTTAttributedLabel *_lblDesc;
}

@property(retain, nonatomic) TTTAttributedLabel *lblDesc; // @synthesize lblDesc=_lblDesc;
@property(retain, nonatomic) UIImageView *rightBg; // @synthesize rightBg=_rightBg;
@property(retain, nonatomic) UIImageView *leftBg; // @synthesize leftBg=_leftBg;
- (void).cxx_destruct;
- (void)updateBubbleWithDriverLocationData:(id)arg1;
- (void)initView;
- (id)init;

@end
