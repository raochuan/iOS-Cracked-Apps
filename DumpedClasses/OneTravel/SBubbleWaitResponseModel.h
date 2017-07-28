//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBaseBubbleWaitResponeModel.h"

@class NSAttributedString, NSString;

@interface SBubbleWaitResponseModel : SBaseBubbleWaitResponeModel
{
    _Bool _useMiniBusNewStyle;
    float _leftRowMiddleSpace;
    float _rightRowMiddleSpace;
    NSString *_leftFirst;
    NSString *_leftSecond;
    NSString *_rightFirst;
    NSString *_rightSecond;
    unsigned long long _beginTime;
    unsigned long long _timeOutSecond;
    NSAttributedString *_leftFirstAttr;
    long long _leftFirstTextAlignment;
    long long _leftSecondTextAlignment;
    NSAttributedString *_leftSecondAttr;
    NSAttributedString *_rightAttr;
}

@property(retain, nonatomic) NSAttributedString *rightAttr; // @synthesize rightAttr=_rightAttr;
@property(retain, nonatomic) NSAttributedString *leftSecondAttr; // @synthesize leftSecondAttr=_leftSecondAttr;
@property(nonatomic) long long leftSecondTextAlignment; // @synthesize leftSecondTextAlignment=_leftSecondTextAlignment;
@property(nonatomic) long long leftFirstTextAlignment; // @synthesize leftFirstTextAlignment=_leftFirstTextAlignment;
@property(retain, nonatomic) NSAttributedString *leftFirstAttr; // @synthesize leftFirstAttr=_leftFirstAttr;
@property(nonatomic) _Bool useMiniBusNewStyle; // @synthesize useMiniBusNewStyle=_useMiniBusNewStyle;
@property(nonatomic) float rightRowMiddleSpace; // @synthesize rightRowMiddleSpace=_rightRowMiddleSpace;
@property(nonatomic) float leftRowMiddleSpace; // @synthesize leftRowMiddleSpace=_leftRowMiddleSpace;
@property(nonatomic) unsigned long long timeOutSecond; // @synthesize timeOutSecond=_timeOutSecond;
@property(nonatomic) unsigned long long beginTime; // @synthesize beginTime=_beginTime;
@property(retain, nonatomic) NSString *rightSecond; // @synthesize rightSecond=_rightSecond;
@property(retain, nonatomic) NSString *rightFirst; // @synthesize rightFirst=_rightFirst;
@property(retain, nonatomic) NSString *leftSecond; // @synthesize leftSecond=_leftSecond;
@property(retain, nonatomic) NSString *leftFirst; // @synthesize leftFirst=_leftFirst;
- (void).cxx_destruct;

@end
