//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MirrorOpenGLFilter.h"

@class MirrorGLKProgram, MirrorOpenGLFrameBuffer;

@interface MirrorOpenGLStarsFilter : MirrorOpenGLFilter
{
    struct CGSize _pixelSizeOfImage;
    MirrorOpenGLFrameBuffer *_imageFrameBuffer;
    struct stars_s _starsInfoArray[100];
    int _starsCount;
    unsigned int _starsBuffer;
    MirrorGLKProgram *_starsProgram;
    double _pointSize;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)loadTexture:(struct CGImage *)arg1;
- (void)setStarsArray:(id)arg1;
- (void)loadShader;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (id)initWithImage:(id)arg1;

@end

