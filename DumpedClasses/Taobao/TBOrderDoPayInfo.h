//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOrderObject.h"

@class NSArray, NSString;

@interface TBOrderDoPayInfo : TBOrderObject
{
    _Bool _simplePay;
    _Bool _securityPay;
    _Bool _canPay;
    NSString *_backUrl;
    NSString *_unSuccessUrl;
    NSString *_signStr;
    NSString *_alipayUrl;
    NSString *_price;
    NSString *_reason;
    NSArray *_orderIds;
    NSArray *_orderOutIds;
    NSArray *_relationOrders;
    long long _payType;
}

@property(nonatomic) long long payType; // @synthesize payType=_payType;
@property(nonatomic) _Bool canPay; // @synthesize canPay=_canPay;
@property(nonatomic) _Bool securityPay; // @synthesize securityPay=_securityPay;
@property(nonatomic, getter=isSimplePay) _Bool simplePay; // @synthesize simplePay=_simplePay;
@property(retain, nonatomic) NSArray *relationOrders; // @synthesize relationOrders=_relationOrders;
@property(retain, nonatomic) NSArray *orderOutIds; // @synthesize orderOutIds=_orderOutIds;
@property(retain, nonatomic) NSArray *orderIds; // @synthesize orderIds=_orderIds;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *alipayUrl; // @synthesize alipayUrl=_alipayUrl;
@property(retain, nonatomic) NSString *signStr; // @synthesize signStr=_signStr;
@property(retain, nonatomic) NSString *unSuccessUrl; // @synthesize unSuccessUrl=_unSuccessUrl;
@property(retain, nonatomic) NSString *backUrl; // @synthesize backUrl=_backUrl;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end
