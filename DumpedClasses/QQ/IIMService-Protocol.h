//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, UIImage, UIViewController;

@protocol IIMService <NSObject>
- (void)removeNotificationObserver;
- (void)postRegisteNotification:(NSString *)arg1 Object:(id)arg2 userInfo:(NSDictionary *)arg3 priority:(_Bool)arg4;
- (void)postRegisteNotification:(NSString *)arg1 Object:(id)arg2 userInfo:(NSDictionary *)arg3;
- (_Bool)registerNotification:(id)arg1;
- (NSString *)getIMEI;
- (void)shareToFriend:(NSString *)arg1 summary:(NSString *)arg2 img:(UIImage *)arg3 appName:(NSString *)arg4 appId:(unsigned int)arg5 url:(NSString *)arg6 currentController:(UIViewController *)arg7 fileType:(NSString *)arg8 flashUrl:(NSString *)arg9 previewImageURL:(NSString *)arg10 isPushInViewController:(_Bool)arg11;
- (void)shareToFriend:(NSString *)arg1 summary:(NSString *)arg2 img:(UIImage *)arg3 appName:(NSString *)arg4 appId:(unsigned int)arg5 url:(NSString *)arg6 currentController:(UIViewController *)arg7 fileType:(NSString *)arg8 flashUrl:(NSString *)arg9 previewImageURL:(NSString *)arg10 isStructMsg:(_Bool)arg11 structMsgParam:(NSDictionary *)arg12 isPushInViewController:(_Bool)arg13;
- (void)shareToFriend:(NSString *)arg1 summary:(NSString *)arg2 img:(UIImage *)arg3 appName:(NSString *)arg4 appId:(unsigned int)arg5 url:(NSString *)arg6 currentController:(UIViewController *)arg7 fileType:(NSString *)arg8 flashUrl:(NSString *)arg9;
- (unsigned int)getGroupSendMessageRandom;
- (void)updateMultiAudioNetFlow:(int)arg1 size:(unsigned long long)arg2;
- (void)updateAudioNetFlow:(int)arg1 size:(unsigned long long)arg2;
- (void)updateVideoNetFlow:(int)arg1 size:(unsigned long long)arg2;
- (void)synEnterChatListController;
- (_Bool)synInsertMsgToDBInMicroMute:(NSArray *)arg1;
- (_Bool)synInsertMsgToDB:(NSArray *)arg1;
- (_Bool)synInsertMsgToDBWithoutNotification:(NSArray *)arg1;
- (unsigned long long)notificationCount;
@end

