//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString<Optional>;

@interface DCRouteOrderAutoMatchCloseInfoModel : JSONModel
{
    NSString<Optional> *_msg;
    NSString<Optional> *_confirm;
    NSString<Optional> *_cancel;
}

@property(copy, nonatomic) NSString<Optional> *cancel; // @synthesize cancel=_cancel;
@property(copy, nonatomic) NSString<Optional> *confirm; // @synthesize confirm=_confirm;
@property(copy, nonatomic) NSString<Optional> *msg; // @synthesize msg=_msg;
- (void).cxx_destruct;

@end

