//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, UIView;

@protocol GDMSegmentViewDelegate <NSObject>

@optional
- (void)segmentView:(UIView *)arg1 shouldShowHeaderMessage:(NSString *)arg2;
- (void)segmentView:(UIView *)arg1 didChangeContainerTabToIndex:(long long)arg2;
- (void)segmentViewShouldHideErrorView:(UIView *)arg1;
- (void)segmentView:(UIView *)arg1 shouldShowErrorViewWithError:(NSError *)arg2;
@end
