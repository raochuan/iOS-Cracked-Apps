//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface IFTTTFilmstrip : NSObject
{
    NSMutableArray *_keyframes;
}

@property(retain, nonatomic) NSMutableArray *keyframes; // @synthesize keyframes=_keyframes;
- (void).cxx_destruct;
- (_Bool)canInterpolateNewValue:(id)arg1;
- (double)progressFromTime:(double)arg1 toTime:(double)arg2 atTime:(double)arg3 withEasingFunction:(CDUnknownBlockType)arg4;
- (unsigned long long)indexOfKeyframeAfterTime:(double)arg1;
- (id)valueAtTime:(double)arg1;
- (void)setValue:(id)arg1 atTime:(double)arg2 withEasingFunction:(CDUnknownBlockType)arg3;
- (void)setValue:(id)arg1 atTime:(double)arg2;
- (_Bool)isEmpty;
- (id)init;

@end
