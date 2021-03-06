//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class Request;

@interface RequestBuilder : PBGeneratedMessageBuilder
{
    Request *resultRequest;
}

@property(retain) Request *resultRequest; // @synthesize resultRequest;
- (void).cxx_destruct;
- (id)clearRefer;
- (id)setRefer:(id)arg1;
- (id)refer;
- (_Bool)hasRefer;
- (id)clearGetMessagesRead;
- (id)mergeGetMessagesRead:(id)arg1;
- (id)setGetMessagesReadBuilder:(id)arg1;
- (id)setGetMessagesRead:(id)arg1;
- (id)getMessagesRead;
- (_Bool)hasGetMessagesRead;
- (id)clearMarkMessagesRead;
- (id)mergeMarkMessagesRead:(id)arg1;
- (id)setMarkMessagesReadBuilder:(id)arg1;
- (id)setMarkMessagesRead:(id)arg1;
- (id)markMessagesRead;
- (_Bool)hasMarkMessagesRead;
- (id)clearGetMessages;
- (id)mergeGetMessages:(id)arg1;
- (id)setGetMessagesBuilder:(id)arg1;
- (id)setGetMessages:(id)arg1;
- (id)getMessages;
- (_Bool)hasGetMessages;
- (id)clearSendMessage;
- (id)mergeSendMessage:(id)arg1;
- (id)setSendMessageBuilder:(id)arg1;
- (id)setSendMessage:(id)arg1;
- (id)sendMessage;
- (_Bool)hasSendMessage;
- (id)clearToken;
- (id)setToken:(id)arg1;
- (id)token;
- (_Bool)hasToken;
- (id)clearSequenceId;
- (id)setSequenceId:(long long)arg1;
- (long long)sequenceId;
- (_Bool)hasSequenceId;
- (id)clearCmd;
- (id)setCmd:(int)arg1;
- (int)cmd;
- (_Bool)hasCmd;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)mergeFrom:(id)arg1;
- (id)buildPartial;
- (id)build;
- (id)defaultInstance;
- (id)clone;
- (id)clear;
- (id)internalGetResult;
- (id)init;

@end

