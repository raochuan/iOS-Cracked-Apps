//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface TBLocationSafeMutableArray : NSObject
{
    NSMutableArray *_innerArray;
    unsigned long long _count;
}

@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (void)enumerate:(CDUnknownBlockType)arg1;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)init;

@end

