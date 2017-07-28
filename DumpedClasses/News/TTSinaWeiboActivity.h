//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TTActivityProtocol.h"
#import "TTWeiboShareDelegate.h"

@class NSString, TTSinaWeiboContentItem, UIViewController;

@interface TTSinaWeiboActivity : NSObject <TTWeiboShareDelegate, TTActivityProtocol>
{
    TTSinaWeiboContentItem *_contentItem;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) TTSinaWeiboContentItem *contentItem; // @synthesize contentItem=_contentItem;
- (void).cxx_destruct;
- (void)weiboShare:(id)arg1 sharedWithError:(id)arg2 customCallbackUserInfo:(id)arg3;
- (void)performActivityWithCompletion:(CDUnknownBlockType)arg1;
- (void)shareWithContentItem:(id)arg1 presentingViewController:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (id)shareLabel;
- (id)activityImageName;
- (id)contentTitle;
- (id)activityType;
- (id)contentItemType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak UIViewController *presentingViewController;
@property(readonly) Class superclass;

@end
