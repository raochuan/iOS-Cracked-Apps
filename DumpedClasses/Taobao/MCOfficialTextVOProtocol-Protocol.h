//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCOfficialMessageVOProtocol.h"

@class NSAttributedString, NSString;

@protocol MCOfficialTextVOProtocol <MCOfficialMessageVOProtocol>
@property(retain, nonatomic) NSString *content;
@property(retain, nonatomic) NSAttributedString *attributedContent;
@property(nonatomic) struct CGSize textSize;
@end
