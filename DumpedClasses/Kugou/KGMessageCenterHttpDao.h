//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ImageHttpDao.h"

@interface KGMessageCenterHttpDao : ImageHttpDao
{
}

+ (id)shareInstance;
- (void)reportMsgArr:(id)arg1 withError:(id *)arg2;
- (id)queryHistoricMessagesWithGuestUId:(id)arg1 withTags:(id)arg2 withError:(id *)arg3;
- (id)getSignString:(id)arg1 withPostBodyString:(id)arg2;
- (id)pullPlayBroadcastMessagesWithtag:(id)arg1 withError:(id *)arg2;
- (id)pullAllPlayBroadcastMessagesWithError:(id *)arg1;
- (_Bool)reportFansInviteMessage:(id)arg1 withUid:(id)arg2;
- (_Bool)reportPlayBeginMessage:(id)arg1 withUid:(id)arg2;
- (_Bool)deleteTheDataOfTagByHttpWithUid:(id)arg1 tags:(id)arg2;
- (id)queryKuGroupHeadImgAndName:(id)arg1 andAskWithOnlyWifi:(_Bool)arg2;
- (id)queryHistoricMessagesOfTagArrayWithUid:(id)arg1 withTags:(id)arg2;
- (_Bool)synchronizationGroupInfoToMsgCenterWithGroupID:(long long)arg1 withMemberId:(long long)arg2;
- (id)queryHistoricResultWithUid:(id)arg1 withTag:(id)arg2 withMaxId:(long long)arg3 withPagesize:(int)arg4 withError:(id *)arg5;
- (id)queryHistoricMessagesListDicWithUid:(id)arg1 withTag:(id)arg2 withMaxId:(long long)arg3 withIsNeedRepullNewMessage:(_Bool)arg4 withPagesize:(int)arg5 withError:(id *)arg6;
- (id)queryHistoricMessagesListDicWithUid:(id)arg1 withTag:(id)arg2 withMaxId:(long long)arg3 withPagesize:(int)arg4 withError:(id *)arg5;
- (id)queryHistoricMessagesListWithUid:(id)arg1 withTag:(id)arg2 withMaxId:(long long)arg3 withPagesize:(int)arg4 withIsEnd:(id *)arg5 withError:(id *)arg6;
- (id)queryNewMessageIdStateOfTagArrayWithUid:(id)arg1 withTags:(id)arg2;
- (_Bool)existFromTagWithUid:(id)arg1 withTag:(id)arg2;
- (_Bool)addToTagWithUid:(id)arg1 withTag:(id)arg2 withTime:(long long)arg3;
- (_Bool)reportMaxidWithTags:(id)arg1 withUid:(id)arg2;
- (id)sendGroupChat:(id)arg1 withGroupid:(id)arg2 withTag:(id)arg3 withMessage:(id)arg4 andError:(id *)arg5;
- (id)sendPrivateChat:(id)arg1 withTuid:(id)arg2 withMessage:(id)arg3 andError:(id *)arg4;
- (id)getHistoryTagsEntryandError:(id *)arg1;
- (id)getNewMessagesWhenSetup:(id)arg1;

@end
