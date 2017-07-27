//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface NVMPopoverViewConfig : NSObject
{
    double _cornerRadius;
    UIColor *_backgroundColor;
    unsigned long long _anchorPosition;
    double _anchorPadding;
    struct CGSize _arrowSize;
    struct UIEdgeInsets _contentEdgeInsets;
}

@property(nonatomic) double anchorPadding; // @synthesize anchorPadding=_anchorPadding;
@property(nonatomic) unsigned long long anchorPosition; // @synthesize anchorPosition=_anchorPosition;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) struct CGSize arrowSize; // @synthesize arrowSize=_arrowSize;
- (void).cxx_destruct;
- (void)addBottomRightArcForPath:(id)arg1 center:(struct CGPoint)arg2 radius:(double)arg3;
- (void)addBottomLeftArcForPath:(id)arg1 center:(struct CGPoint)arg2 radius:(double)arg3;
- (void)addTopRightArcForPath:(id)arg1 center:(struct CGPoint)arg2 radius:(double)arg3;
- (void)addTopLeftArcForPath:(id)arg1 center:(struct CGPoint)arg2 radius:(double)arg3;
- (id)pathWithRect:(struct CGRect)arg1;
- (struct UIEdgeInsets)realInsets;
- (id)init;

@end
