//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZUpIpMgr.h"

@interface QZUploadV2IpMgr : QZUpIpMgr
{
    long long _retryCount;
}

+ (id)getIpMgrWithKey:(id)arg1;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
- (void)insertIp:(id)arg1;
- (id)generateIpArray:(id)arg1 iptype:(long long)arg2;
- (id)getCurrentIp;
- (id)getNextIp;
- (id)getIp;
- (id)getProtocolList;

@end
