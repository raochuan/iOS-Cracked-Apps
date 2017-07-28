//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, ONEVoIPMakeCallParameter;

@interface DCVoIP : NSObject
{
    unsigned long long _type;
    ONEVoIPMakeCallParameter *_directCallParameter;
    NSString *_orderId;
    NSString *_productId;
    NSString *_token;
    NSString *_srcPhone;
    NSString *_bindData;
    unsigned long long _clientType;
}

+ (id)create;
@property(nonatomic) unsigned long long clientType; // @synthesize clientType=_clientType;
@property(copy, nonatomic) NSString *bindData; // @synthesize bindData=_bindData;
@property(copy, nonatomic) NSString *srcPhone; // @synthesize srcPhone=_srcPhone;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) ONEVoIPMakeCallParameter *directCallParameter; // @synthesize directCallParameter=_directCallParameter;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)callVoipWithType:(unsigned long long)arg1 driver:(id)arg2 passenger:(id)arg3 success:(CDUnknownBlockType)arg4;
- (id)prepareWithModel:(id)arg1 success:(CDUnknownBlockType)arg2;
- (id)call;
- (id)prepareCall:(CDUnknownBlockType)arg1;
- (id)type:(unsigned long long)arg1;
- (id)orderId:(id)arg1;

@end
