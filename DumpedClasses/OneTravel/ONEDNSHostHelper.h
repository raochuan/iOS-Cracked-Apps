//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, NSURLComponents;

@interface ONEDNSHostHelper : NSObject
{
    _Bool _isCycling;
    NSString *_originURL;
    NSURLComponents *_originURLCompents;
    double _lastParseTime;
    NSString *_name;
    NSMutableArray *_list;
    NSMutableArray *_usedList;
    long long _index;
    long long _randomCounter;
}

+ (id)helperWithURL:(id)arg1;
+ (id)helperWithDomain:(id)arg1;
+ (id)helperWithHost:(id)arg1;
@property(nonatomic) long long randomCounter; // @synthesize randomCounter=_randomCounter;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSMutableArray *usedList; // @synthesize usedList=_usedList;
@property(retain, nonatomic) NSMutableArray *list; // @synthesize list=_list;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) double lastParseTime; // @synthesize lastParseTime=_lastParseTime;
@property(nonatomic) _Bool isCycling; // @synthesize isCycling=_isCycling;
@property(retain, nonatomic) NSURLComponents *originURLCompents; // @synthesize originURLCompents=_originURLCompents;
@property(retain, nonatomic) NSString *originURL; // @synthesize originURL=_originURL;
- (void).cxx_destruct;
- (void)reportRequestIsSuccess:(_Bool)arg1;
- (id)ipList;
- (id)randomHostURL;
- (id)randomNext;
- (unsigned long long)randomIndex;
- (id)nextHostURL;
- (id)nextIp;
- (id)next;
- (_Bool)hasNext;
- (id)origin;
- (id)getOutDNSIPAtIndex:(unsigned long long)arg1;
- (id)init;

@end
