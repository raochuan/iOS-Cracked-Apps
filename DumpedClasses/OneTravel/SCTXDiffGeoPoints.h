//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array, SCTXDoublePoint;

@interface SCTXDiffGeoPoints : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCTXDoublePoint *base; // @dynamic base;
@property(retain, nonatomic) GPBInt32Array *dlatsArray; // @dynamic dlatsArray;
@property(readonly, nonatomic) unsigned long long dlatsArray_Count; // @dynamic dlatsArray_Count;
@property(retain, nonatomic) GPBInt32Array *dlngsArray; // @dynamic dlngsArray;
@property(readonly, nonatomic) unsigned long long dlngsArray_Count; // @dynamic dlngsArray_Count;
@property(nonatomic) _Bool hasBase; // @dynamic hasBase;

@end
