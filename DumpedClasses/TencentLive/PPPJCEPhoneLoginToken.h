//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSData, NSString;

@interface PPPJCEPhoneLoginToken : JceObjectV2
{
    BOOL jcev2_p_1_o_tokenKeyType;
    _Bool jcev2_p_4_o_isMainLogin;
    NSString *jcev2_p_0_o_tokenAppID;
    NSData *jcev2_p_2_o_tokenValue;
    NSString *jcev2_p_3_o_tokenUin;
    NSString *jcev2_p_5_o_qPic;
    NSString *jcev2_p_6_o_qqNick;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_qqNick, setter=setJce_qqNick:) NSString *jcev2_p_6_o_qqNick; // @synthesize jcev2_p_6_o_qqNick;
@property(retain, nonatomic, getter=jce_qPic, setter=setJce_qPic:) NSString *jcev2_p_5_o_qPic; // @synthesize jcev2_p_5_o_qPic;
@property(nonatomic, getter=jce_isMainLogin, setter=setJce_isMainLogin:) _Bool jcev2_p_4_o_isMainLogin; // @synthesize jcev2_p_4_o_isMainLogin;
@property(retain, nonatomic, getter=jce_tokenUin, setter=setJce_tokenUin:) NSString *jcev2_p_3_o_tokenUin; // @synthesize jcev2_p_3_o_tokenUin;
@property(retain, nonatomic, getter=jce_tokenValue, setter=setJce_tokenValue:) NSData *jcev2_p_2_o_tokenValue; // @synthesize jcev2_p_2_o_tokenValue;
@property(nonatomic, getter=jce_tokenKeyType, setter=setJce_tokenKeyType:) BOOL jcev2_p_1_o_tokenKeyType; // @synthesize jcev2_p_1_o_tokenKeyType;
@property(retain, nonatomic, getter=jce_tokenAppID, setter=setJce_tokenAppID:) NSString *jcev2_p_0_o_tokenAppID; // @synthesize jcev2_p_0_o_tokenAppID;
- (void).cxx_destruct;
- (id)init;

@end
