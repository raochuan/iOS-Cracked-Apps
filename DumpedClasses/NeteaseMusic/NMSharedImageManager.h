//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface NMSharedImageManager : NSObject
{
    NSMutableDictionary *_imageCache;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)memoryWarning;
- (void)clearAllImageCache;
- (void)removeImage:(id)arg1;
- (id)imageNamed:(id)arg1 stretchableImageWithLeftCapWidth:(long long)arg2 topCapHeight:(long long)arg3 renderingMode:(long long)arg4;
- (id)imageNamed:(id)arg1 stretchableImageWithLeftCapWidth:(long long)arg2 topCapHeight:(long long)arg3;
- (id)imageNamed:(id)arg1 imageByScalingProportionallyToSize:(struct CGSize)arg2;
- (id)imageNamed:(id)arg1 renderingMode:(long long)arg2;
- (id)imageNamed:(id)arg1;
- (id)darkLinkImage;
- (id)linkImage;
- (void)dealloc;
- (id)init;

@end

