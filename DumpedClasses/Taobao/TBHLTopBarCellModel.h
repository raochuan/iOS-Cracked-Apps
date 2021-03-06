//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;

@interface TBHLTopBarCellModel : TBJSONModel
{
    _Bool _bindAccess;
    _Bool _canDelete;
    _Bool _isSelected;
    NSString *_columnId;
    NSString *_specialColumnType;
    NSString *_name;
    NSString *_image;
    NSString *_tagText;
    NSString *_readNums;
    NSString *_tabFlag;
    NSString *_h5Url;
    NSArray *_subMenu;
}

+ (id)jsonToModelKeyMapDictionary;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool canDelete; // @synthesize canDelete=_canDelete;
@property(retain, nonatomic) NSArray *subMenu; // @synthesize subMenu=_subMenu;
@property(nonatomic) _Bool bindAccess; // @synthesize bindAccess=_bindAccess;
@property(copy, nonatomic) NSString *h5Url; // @synthesize h5Url=_h5Url;
@property(copy, nonatomic) NSString *tabFlag; // @synthesize tabFlag=_tabFlag;
@property(copy, nonatomic) NSString *readNums; // @synthesize readNums=_readNums;
@property(copy, nonatomic) NSString *tagText; // @synthesize tagText=_tagText;
@property(copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *specialColumnType; // @synthesize specialColumnType=_specialColumnType;
@property(copy, nonatomic) NSString *columnId; // @synthesize columnId=_columnId;
- (void).cxx_destruct;

@end

