//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface DDIMProfileUserModel : NSObject
{
    _Bool _isLongDetail;
    _Bool _isShowDetail;
    NSString *_user_name;
    NSNumber *_user_icon;
    NSString *_user_img;
    NSString *_user_summary;
    NSString *_user_info;
    NSString *_truncationInfo;
    NSNumber *_user_follow;
}

@property(nonatomic) _Bool isShowDetail; // @synthesize isShowDetail=_isShowDetail;
@property(nonatomic) _Bool isLongDetail; // @synthesize isLongDetail=_isLongDetail;
@property(copy, nonatomic) NSNumber *user_follow; // @synthesize user_follow=_user_follow;
@property(copy, nonatomic) NSString *truncationInfo; // @synthesize truncationInfo=_truncationInfo;
@property(copy, nonatomic) NSString *user_info; // @synthesize user_info=_user_info;
@property(copy, nonatomic) NSString *user_summary; // @synthesize user_summary=_user_summary;
@property(copy, nonatomic) NSString *user_img; // @synthesize user_img=_user_img;
@property(copy, nonatomic) NSNumber *user_icon; // @synthesize user_icon=_user_icon;
@property(copy, nonatomic) NSString *user_name; // @synthesize user_name=_user_name;
- (void).cxx_destruct;
- (double)summaryIntrinsicContentHeight;
- (double)profileUserViewHeight;
- (id)truncationInfoTextViewText:(id)arg1 ToFitWidth:(double)arg2;
- (void)updateUserInfo:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
