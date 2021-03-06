//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "TencentApiInterfaceDelegate.h"
#import "TencentLoginDelegate.h"
#import "TencentWebViewDelegate.h"

@class APIResponse, NSArray, NSString, TencentOAuth, UIViewController;

@protocol TencentSessionDelegate <NSObject, TencentLoginDelegate, TencentApiInterfaceDelegate, TencentWebViewDelegate>

@optional
- (void)tencentOAuth:(TencentOAuth *)arg1 doCloseViewController:(UIViewController *)arg2;
- (void)tencentOAuth:(TencentOAuth *)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 userData:(id)arg5;
- (void)responseDidReceived:(APIResponse *)arg1 forMessage:(NSString *)arg2;
- (void)sendStoryResponse:(APIResponse *)arg1;
- (void)getIntimateFriendsResponse:(APIResponse *)arg1;
- (void)matchNickTipsResponse:(APIResponse *)arg1;
- (void)getVipRichInfoResponse:(APIResponse *)arg1;
- (void)getVipInfoResponse:(APIResponse *)arg1;
- (void)setUserHeadpicResponse:(APIResponse *)arg1;
- (void)addTopicResponse:(APIResponse *)arg1;
- (void)addOneBlogResponse:(APIResponse *)arg1;
- (void)uploadPicResponse:(APIResponse *)arg1;
- (void)addAlbumResponse:(APIResponse *)arg1;
- (void)addShareResponse:(APIResponse *)arg1;
- (void)checkPageFansResponse:(APIResponse *)arg1;
- (void)getListPhotoResponse:(APIResponse *)arg1;
- (void)getListAlbumResponse:(APIResponse *)arg1;
- (void)getUserInfoResponse:(APIResponse *)arg1;
- (void)tencentFailedUpdate:(int)arg1;
- (void)tencentDidUpdate:(TencentOAuth *)arg1;
- (_Bool)tencentNeedPerformReAuth:(TencentOAuth *)arg1;
- (_Bool)tencentNeedPerformIncrAuth:(TencentOAuth *)arg1 withPermissions:(NSArray *)arg2;
- (void)tencentDidLogout;
@end

