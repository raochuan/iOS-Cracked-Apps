//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface KQInviteFriendEntity : NSObject
{
    _Bool _in_group;
    _Bool _isSelected;
    long long _member_id;
    NSString *_name;
    NSString *_img;
}

@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool in_group; // @synthesize in_group=_in_group;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long member_id; // @synthesize member_id=_member_id;
- (void).cxx_destruct;

@end
