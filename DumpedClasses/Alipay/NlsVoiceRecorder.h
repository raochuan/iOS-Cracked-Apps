//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSString;

@interface NlsVoiceRecorder : NSObject
{
    struct OpaqueAudioQueue *mQueue;
    _Bool _inBackground;
    int _state;
    id <NlsVoiceRecorderDelegate> _delegate;
    unsigned long long _currentVoiceVolume;
    NSMutableData *_bufferedVoiceData;
    NSString *_originCategory;
}

@property(copy, nonatomic) NSString *originCategory; // @synthesize originCategory=_originCategory;
@property(retain, nonatomic) NSMutableData *bufferedVoiceData; // @synthesize bufferedVoiceData=_bufferedVoiceData;
@property int state; // @synthesize state=_state;
@property(nonatomic) unsigned long long currentVoiceVolume; // @synthesize currentVoiceVolume=_currentVoiceVolume;
@property(nonatomic) id <NlsVoiceRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_appEnterForeground;
- (void)_appResignActive;
- (void)_unregisterForBackgroundNotifications;
- (void)_registerForBackgroundNotifications;
- (void)_handleVoiceFrame:(id)arg1;
- (id)_bufferPCMFrame:(struct AudioQueueBuffer *)arg1;
- (void)_stopAudioQueue;
- (_Bool)_startAudioQueue;
- (void)_disposeAudioQueue;
- (_Bool)_createAudioQueue;
- (void)_updateCurrentVoiceVolume;
- (_Bool)isStarted;
- (void)stop:(_Bool)arg1;
- (void)_start;
- (void)start;
- (void)dealloc;
- (id)init;

@end

