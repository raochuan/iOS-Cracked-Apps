//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQRichAudioFileWriter : NSObject
{
    struct OpaqueExtAudioFile *_audioFileHandle;
    unsigned int _outputAudioFileType;
    NSString *_outputAudioFilePath;
    struct AudioChannelLayout _outputAudioChannelLayout;
    struct AudioStreamBasicDescription _outputAudioFormat;
    struct AudioStreamBasicDescription _inputAudioFormat;
}

@property(copy, nonatomic) NSString *outputAudioFilePath; // @synthesize outputAudioFilePath=_outputAudioFilePath;
@property(nonatomic) struct AudioStreamBasicDescription inputAudioFormat; // @synthesize inputAudioFormat=_inputAudioFormat;
@property(nonatomic) struct AudioChannelLayout outputAudioChannelLayout; // @synthesize outputAudioChannelLayout=_outputAudioChannelLayout;
@property(nonatomic) unsigned int outputAudioFileType; // @synthesize outputAudioFileType=_outputAudioFileType;
@property(nonatomic) struct AudioStreamBasicDescription outputAudioFormat; // @synthesize outputAudioFormat=_outputAudioFormat;
- (_Bool)writeAudioFile:(unsigned int)arg1 andData:(struct AudioBufferList *)arg2;
- (_Bool)closeAudioFile;
- (_Bool)openAudioFile:(id)arg1;
- (id)init;

@end
