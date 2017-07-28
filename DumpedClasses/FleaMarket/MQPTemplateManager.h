//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSMutableArray, NSMutableDictionary;

@interface MQPTemplateManager : NSObject
{
    NSMutableDictionary *_cachedQuickPayTpls;
    id <WKTemplateDownloadProtocol> _downloadManager;
    id <WKTemplateStorageProtocol> _dbManager;
    NSCache *_cacheTemplate;
    NSMutableArray *_blockArray;
}

+ (id)tplVersion;
+ (id)defaultManager;
@property(retain) NSMutableArray *blockArray; // @synthesize blockArray=_blockArray;
@property(retain, nonatomic) NSCache *cacheTemplate; // @synthesize cacheTemplate=_cacheTemplate;
@property(retain, nonatomic) id <WKTemplateStorageProtocol> dbManager; // @synthesize dbManager=_dbManager;
@property(retain, nonatomic) id <WKTemplateDownloadProtocol> downloadManager; // @synthesize downloadManager=_downloadManager;
@property(retain, nonatomic) NSMutableDictionary *cachedQuickPayTpls; // @synthesize cachedQuickPayTpls=_cachedQuickPayTpls;
- (void).cxx_destruct;
- (void)notifyTemplatesDownloadDone:(id)arg1 error:(id)arg2;
- (void)cachedDownload:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)cachedTemplatesByIds:(id)arg1;
- (void)addTemplateCaches:(id)arg1;
- (void)addTemplateCache:(id)arg1;
- (_Bool)saveTemplates:(id)arg1;
- (void)requestTemplates:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)cachedTemplateById:(id)arg1;
- (_Bool)save:(id)arg1;
- (void)setupTemplateManager;
- (id)init;

@end
