//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMEvent, NMForwardedEventView, NSString;

@protocol NMForwardedEventViewDelegate <NSObject>
- (void)forwardedEventView:(NMForwardedEventView *)arg1 activityNameTouched:(NSString *)arg2 event:(NMEvent *)arg3;
- (void)forwardedEventView:(NMForwardedEventView *)arg1 activityTouched:(NSString *)arg2 event:(NMEvent *)arg3;
- (void)forwardedEventView:(NMForwardedEventView *)arg1 linkTouchedHTTPUrl:(NSString *)arg2 event:(NMEvent *)arg3;
- (void)forwardedEventView:(NMForwardedEventView *)arg1 backgroundButtonWithEvent:(NMEvent *)arg2;
- (void)forwardedEventView:(NMForwardedEventView *)arg1 contentButtonTouchedWithEvent:(NMEvent *)arg2;
- (void)forwardedEventView:(NMForwardedEventView *)arg1 multiImageViewTouchedAtIndex:(unsigned long long)arg2 event:(NMEvent *)arg3;
- (void)forwardedEventView:(NMForwardedEventView *)arg1 nickNameTouched:(NSString *)arg2 event:(NMEvent *)arg3;
@end
