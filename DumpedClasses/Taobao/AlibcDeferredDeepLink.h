//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AlibcDeferredDeepLink : NSObject
{
}

+ (void)cleanDeepLinkInfo;
+ (id)signWithInfo:(id)arg1;
+ (id)urlSchemes;
+ (void)statisticsWithSourceAppKey:(id)arg1 utdid:(id)arg2 visa:(id)arg3 currentAppKey:(id)arg4 notDeepLinkReason:(unsigned long long)arg5;
+ (id)clipboardInfo;
+ (_Bool)handleDeepLinkWithSupport:(_Bool)arg1 options:(id)arg2 error:(id)arg3;

@end
