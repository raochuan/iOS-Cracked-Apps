//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AlibcApplication, AlibcAuthMtopRequest;

@interface AlibcFlowCustomsSDK : NSObject
{
    AlibcAuthMtopRequest *_request;
    AlibcApplication *_app;
    id <AlibcFcUrlNavigationProtocol> _appNavigate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <AlibcFcUrlNavigationProtocol> appNavigate; // @synthesize appNavigate=_appNavigate;
@property(retain, nonatomic) AlibcApplication *app; // @synthesize app=_app;
@property(retain, nonatomic) AlibcAuthMtopRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)failedStrageFromStrage:(id)arg1;
- (id)uriParamFromParam:(id)arg1 visa:(id)arg2;
- (_Bool)openThirdPartyAppWithUrl:(id)arg1;
- (id)visaUrlWithParam:(id)arg1 visa:(id)arg2;
- (void)openURL:(id)arg1 visa:(id)arg2 failedStrategy:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)userTrack:(id)arg1 url:(id)arg2 packageName:(id)arg3;
- (void)flowOutGoingCheckWithUrl:(id)arg1 visa:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)startSafeOpenURLCheck;
- (_Bool)handleOpenURL:(id)arg1 packageName:(id)arg2;
- (void)registerAppNavigate:(id)arg1;
- (void)initUTWithAppkey:(id)arg1;
- (_Bool)initWithAppkey:(id)arg1 launchOptions:(id)arg2;
- (void)setEnvironment:(unsigned long long)arg1;

@end
