//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@class NSString;

@interface FALCSongCouponModel : FAModel
{
    _Bool _useable;
    long long _cardId;
    NSString *_cardName;
    long long _num;
}

@property(nonatomic) _Bool useable; // @synthesize useable=_useable;
@property(nonatomic) long long num; // @synthesize num=_num;
@property(retain, nonatomic) NSString *cardName; // @synthesize cardName=_cardName;
@property(nonatomic) long long cardId; // @synthesize cardId=_cardId;
- (void).cxx_destruct;

@end

