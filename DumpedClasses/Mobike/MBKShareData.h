//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Mobike_Model.h"

@class NSString;

@interface MBKShareData : Mobike_Model
{
    NSString *_shareTitle;
    NSString *_shareContent;
    id _shareImage;
    NSString *_shareTargetUrl;
    id _shareThumbImage;
    NSString *_miniProgPath;
    NSString *_miniProgDefaultPage;
}

@property(copy, nonatomic) NSString *miniProgDefaultPage; // @synthesize miniProgDefaultPage=_miniProgDefaultPage;
@property(copy, nonatomic) NSString *miniProgPath; // @synthesize miniProgPath=_miniProgPath;
@property(retain, nonatomic) id shareThumbImage; // @synthesize shareThumbImage=_shareThumbImage;
@property(copy, nonatomic) NSString *shareTargetUrl; // @synthesize shareTargetUrl=_shareTargetUrl;
@property(retain, nonatomic) id shareImage; // @synthesize shareImage=_shareImage;
@property(copy, nonatomic) NSString *shareContent; // @synthesize shareContent=_shareContent;
@property(copy, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
- (void).cxx_destruct;

@end

