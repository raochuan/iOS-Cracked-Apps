//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GMSx_QTMInkTouchController, GMSx_QTMInkView, UIView;

@protocol QTMInkTouchControllerDelegate <NSObject>

@optional
- (void)inkTouchController:(GMSx_QTMInkTouchController *)arg1 didProcessInkView:(GMSx_QTMInkView *)arg2 atTouchLocation:(struct CGPoint)arg3;
- (_Bool)shouldInkTouchControllerProcessInkTouches:(GMSx_QTMInkTouchController *)arg1;
- (GMSx_QTMInkView *)inkTouchController:(GMSx_QTMInkTouchController *)arg1 inkViewAtTouchLocation:(struct CGPoint)arg2;
- (void)inkTouchController:(GMSx_QTMInkTouchController *)arg1 insertInkView:(UIView *)arg2 intoView:(UIView *)arg3;
@end
