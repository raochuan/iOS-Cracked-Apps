//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMCellComponent.h"

#import "FMDOCompatible.h"

@class NSString, UIColor;

@interface FMDetailCommonHeaderComponent : FMCellComponent <FMDOCompatible>
{
    _Bool _showShadowLine;
    NSString *_commonHeaderTitle;
    unsigned long long _commonHeaderHeight;
    UIColor *_backgroundColor;
}

@property(nonatomic) _Bool showShadowLine; // @synthesize showShadowLine=_showShadowLine;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) unsigned long long commonHeaderHeight; // @synthesize commonHeaderHeight=_commonHeaderHeight;
@property(copy, nonatomic) NSString *commonHeaderTitle; // @synthesize commonHeaderTitle=_commonHeaderTitle;
- (void).cxx_destruct;
- (_Bool)fmSetupWithDO:(id)arg1 extraObject:(id)arg2;
- (Class)viewClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
