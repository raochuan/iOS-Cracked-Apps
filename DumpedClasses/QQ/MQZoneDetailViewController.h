//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQZCommonFeedListViewController.h"

#import "BaseURLConnectionDelegate.h"
#import "MQZQbossDownQzoneAdvViewDelegate.h"
#import "MulMemSelBusiProcessDelegate.h"
#import "QUIActionSheetDelegate.h"
#import "QUIShareDelegate.h"
#import "UIAlertViewDelegate.h"

@class CAEmitterLayer, MQZPhotoBrowserViewController, MQZQbossDownQzoneAdvView, MQZoneAdBannerView, NSDictionary, NSMutableDictionary, NSString, QZAvatarView, QzoneFeedModel, UIView, UIViewController;

@interface MQZoneDetailViewController : MQZCommonFeedListViewController <BaseURLConnectionDelegate, MulMemSelBusiProcessDelegate, QUIActionSheetDelegate, UIAlertViewDelegate, MQZQbossDownQzoneAdvViewDelegate, QUIShareDelegate>
{
    CAEmitterLayer *_festivalEmitter;
    long long _numOfTotalEggPictures;
    long long _numOfEggPictureHasDownload;
    long long _uin;
    QzoneFeedModel *_srcFeedModel;
    long long _inputSource;
    long long _style;
    _Bool _hasJumpFirstToComment;
    NSMutableDictionary *_dictReplyReqID;
    long long _detailReqID;
    long long _forwardReqID;
    long long _shareReqID;
    long long _writeReqID;
    long long _adBannerReqID;
    long long _photoIndex;
    long long _hasMore;
    long long _hasEssenceCommentMore;
    long long _lastUpdateTime;
    _Bool _hasDetail;
    _Bool _firstEnter;
    _Bool _isDatafromExternal;
    _Bool _isReportExpose;
    _Bool _medalReportExpose;
    _Bool _isDetailLoading;
    NSString *_qqUrl;
    UIViewController *_preCtr;
    UIView *_bottomBar;
    MQZoneAdBannerView *_adBannerView;
    QZAvatarView *_faceImageView;
    _Bool _isAnima;
    _Bool _isInit;
    UIView *_todayInHistoryHeadView;
    long long _getVipReminderReqID;
    long long _getQBossAdvRequestID;
    MQZQbossDownQzoneAdvView *_qbossDownQzoneAdvView;
    UIView *_emptyCommentView;
    _Bool _isFromrelationExtended;
    NSDictionary *_relationExtendedReportCookieDict;
    long long _relationExtendedReportFeedIndex;
    long long _H5ClickFeedTime;
    _Bool _isPresentModalView;
    _Bool _enableFeedPictrueInteraction;
    QzoneFeedModel *_feedModel;
    long long _from;
    MQZPhotoBrowserViewController *_presentingController;
    NSString *_jumpCommentId;
    NSString *_jumpReplyId;
    long long _jumpCommentIndex;
    long long _jumpReplyIndex;
    NSMutableDictionary *_actionMap;
    long long _getSpaceRightReqID;
}

@property(nonatomic) _Bool enableFeedPictrueInteraction; // @synthesize enableFeedPictrueInteraction=_enableFeedPictrueInteraction;
@property(nonatomic) long long getSpaceRightReqID; // @synthesize getSpaceRightReqID=_getSpaceRightReqID;
@property(retain, nonatomic) NSMutableDictionary *actionMap; // @synthesize actionMap=_actionMap;
@property(nonatomic) long long jumpReplyIndex; // @synthesize jumpReplyIndex=_jumpReplyIndex;
@property(nonatomic) long long jumpCommentIndex; // @synthesize jumpCommentIndex=_jumpCommentIndex;
@property(retain, nonatomic) NSString *jumpReplyId; // @synthesize jumpReplyId=_jumpReplyId;
@property(retain, nonatomic) NSString *jumpCommentId; // @synthesize jumpCommentId=_jumpCommentId;
@property(nonatomic) _Bool isPresentModalView; // @synthesize isPresentModalView=_isPresentModalView;
@property(nonatomic) __weak MQZPhotoBrowserViewController *presentingController; // @synthesize presentingController=_presentingController;
@property(nonatomic) long long from; // @synthesize from=_from;
@property(retain, nonatomic) QzoneFeedModel *feedModel; // @synthesize feedModel=_feedModel;
@property(readonly, nonatomic) QzoneFeedModel *srcFeedModel; // @synthesize srcFeedModel=_srcFeedModel;
@property(readonly, nonatomic) long long uin; // @synthesize uin=_uin;
- (void).cxx_destruct;
- (void)reportTodc01691Table:(long long)arg1 secondAction:(long long)arg2 thirdAction:(long long)arg3;
- (void)putClickDataWithActionArea:(long long)arg1 actionDetail:(long long)arg2 feedModel:(id)arg3;
- (void)handleFeedCellCommentButtonClicked:(id)arg1 indexPath:(id)arg2;
- (long long)liveReportExpose;
- (void)removeFeedModel:(id)arg1;
- (void)removeFeedModelByUin:(long long)arg1;
- (void)onGetCardDecorationById;
- (void)onSetCardDecoration;
- (id)feedModelList4Font;
- (void)showFeedListToast:(id)arg1 tipType:(long long)arg2;
- (void)handleFeedCellCustomPraiseLikeButtonClicked:(id)arg1;
- (void)handleFeedCellFollowBtnClick:(id)arg1 indexPath:(id)arg2 param:(id)arg3;
- (void)handleFeedCellFamousFeedFollowBtnClick:(id)arg1 cell:(id)arg2 isFromOriginal:(_Bool)arg3 param:(id)arg4;
- (void)handleOpenHomepage:(long long)arg1 nick:(id)arg2;
- (void)handleFeedCellNeedLayout:(id)arg1 indexPath:(id)arg2;
- (void)handleFeedCellReplyButtonClicked:(id)arg1;
- (void)handleFeedCell:(id)arg1 imageClicked:(id)arg2 param:(id)arg3 indexPath:(id)arg4;
- (void)handleFeedCell:(id)arg1 videoClicked:(id)arg2 image:(id)arg3 indexPath:(id)arg4 param:(id)arg5;
- (_Bool)noRespondInteraction:(id)arg1;
- (void)handleFeedCellCommentReplyDelMenu:(id)arg1 comment:(long long)arg2 reply:(long long)arg3 commentType:(long long)arg4;
- (void)showBottomBannerView:(id)arg1;
- (void)adjustAdBannerPositionIfNeeded;
- (void)removeAdBanner;
- (void)adjustVipReminderBannerPositionIfNeeded;
- (void)showVipReminderView:(id)arg1 remindType:(unsigned long long)arg2 bossTrace:(id)arg3 zoneid:(id)arg4;
- (void)onGetVipReminderNotify:(id)arg1;
- (void)onMoodModifyNotify:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)clearCommentUnreadBkg:(id)arg1;
- (_Bool)findJumpCommentIndexAndSetUnreadBkg:(id)arg1;
- (void)onGetSpaceRightNotify:(id)arg1;
- (void)dealInfoForFavour:(id)arg1;
- (void)favourClicked;
- (void)feedCradReport:(long long)arg1;
- (void)onSelectionCompeleted:(id)arg1 nicks:(id)arg2;
- (void)onBusinessProcessWithSelectedMems:(id)arg1 currentViewControllerClass:(id)arg2 currentViewController:(id)arg3;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)leftButtonClick:(id)arg1;
- (long long)getRapidCommentFromType;
- (void)onClickedRedPocketBtn:(id)arg1;
- (void)onClickedBottomInputBtn:(id)arg1;
- (void)updateRapidCommentBtn:(id)arg1;
- (void)updateBottomBar:(id)arg1;
- (void)jumpToFirstCommentArea;
- (void)jumpToCommentArea;
- (void)jumpToCommentArea:(_Bool)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)firstNotEmptyIndexPathInTableView:(id)arg1;
- (long long)firstNotEmptySectionInTableView:(id)arg1;
- (long long)lastRealSectionInTableView:(id)arg1;
- (long long)lastNotEmptySectionInTableView:(id)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)setCellPosition:(id)arg1 inUITableView:(id)arg2;
- (id)getAnEmptyCellForTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)emptyCommentView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)isValidatedFeedModel;
- (void)onBtnReplyClicked:(id)arg1;
- (void)handleFeedCellForwardButtonClicked:(id)arg1 indexPath:(id)arg2 offset:(double)arg3 button:(id)arg4 forwardType:(long long)arg5;
- (int)onNotifyDelReplyResult:(id)arg1;
- (int)onNotifyDelCmtResult:(id)arg1;
- (int)onNotifyDelUgcResult:(id)arg1;
- (void)deleteResult:(id)arg1 ugc:(id)arg2 isNeedDeleteCurrentPhoto:(_Bool)arg3;
- (int)onNotifyShareResult:(id)arg1;
- (int)onNotifyForwardResult:(id)arg1;
- (void)onForwardRequest:(id)arg1;
- (int)onNotifyWriteCommentResult:(id)arg1;
- (int)onNotifyReplyMessageResult:(id)arg1;
- (int)onNotifyReplyCommentResult:(id)arg1;
- (int)onNotifyLikeResult:(id)arg1;
- (int)onNotifyCommentLikeResult:(id)arg1;
- (int)onNotifyForwardFeed:(id)arg1;
- (void)checkVideoIllegalInfo;
- (int)onNotifyFeedDetailResult:(id)arg1;
- (void)operationButtonClicked:(long long)arg1 param:(id)arg2;
- (void)onNotifyQBossGet:(id)arg1;
- (void)resetFeedContentLayoutInfo;
- (long long)onGetVideoPlayOnWifi:(id)arg1;
- (int)onSetConcernNotify:(id)arg1;
- (long long)onMarkFaceNotify:(id)arg1;
- (_Bool)inputBarSendText:(id)arg1 param:(id)arg2;
- (void)invalidShareRequestId;
- (void)bringInputBarToFront;
- (void)clickForwardBtn:(id)arg1 cell:(id)arg2;
- (void)inputBarDidDeactive:(id)arg1;
- (void)inputBarDidActive:(id)arg1;
- (_Bool)onHasMore;
- (_Bool)onLoadMore;
- (unsigned long long)onGetLastRefreshTime;
- (_Bool)onRefresh;
- (void)deleteLocalFeed;
- (void)loadLocalFeed;
- (void)handleOpenRemarkQunAlbum:(id)arg1;
- (void)handleShowImg:(id)arg1 touchItem:(id)arg2 index:(unsigned long long)arg3 photoProviders:(id)arg4;
- (void)handleDidSelectCell:(id)arg1;
- (_Bool)hasNoFeeds;
- (_Bool)handleClickRichTextItem:(id)arg1 itemRect:(struct CGRect)arg2 param:(id)arg3;
- (void)initNotificationObservers:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (long long)requestDelReplyWithFeedModel:(id)arg1 comment:(id)arg2 reply:(id)arg3;
- (long long)requestDelCommentWithFeedModel:(id)arg1 comment:(id)arg2;
- (_Bool)isNeedGetQbossQzone;
- (void)getQbossQzoneAdv;
- (void)onClickedQuote;
- (void)onDeleteMood;
- (void)onModifyMood;
- (void)onBtnQuoteClicked;
- (void)onBtnCommentClicked:(id)arg1;
- (void)handleGdtVideoClick:(id)arg1 position:(long long)arg2 acttype:(unsigned long long)arg3 param:(id)arg4;
- (void)newFeedAdvClickReportWithFeedModel:(id)arg1 andParam:(id)arg2;
- (void)reportExpose;
- (void)gdtReportWithType:(id)arg1 alertInfo:(id)arg2;
- (void)didConnectionFailed:(id)arg1;
- (void)didConnectionFinished:(int)arg1;
- (id)firstVideo:(id)arg1;
- (_Bool)isShowUnFollow;
- (_Bool)testVideoOrAudio;
- (_Bool)enableNotInterested;
- (_Bool)enableReportFeed;
- (_Bool)enableDeleteMessage;
- (_Bool)enableDeleteFeed;
- (_Bool)enableEditShuoShuo;
- (_Bool)canQuote;
- (_Bool)enableQuote;
- (void)initInputBarSource;
- (void)initInputBarDefaultPlaceholder;
- (void)setFeedTop;
@property(readonly, nonatomic) NSString *cacheKey;
- (void)initFeedModel;
- (void)onClickedUnFollow;
- (void)onClickedNotInterested;
- (void)onClickedMoreReport;
- (_Bool)canHideAllFeeds;
- (_Bool)canHideThisFeed;
- (_Bool)supportHideFeedFunc;
- (void)hideAllFeed;
- (void)hideThisFeed;
- (void)onClickedWeixinMomment;
- (void)onClickedWeixin;
- (void)onFowardToQQClicked;
- (void)onForwardToQzone;
- (_Bool)isNetWorkReachable;
- (void)shareDidAction:(id)arg1;
- (void)popSharePanel;
- (void)rightButtonClickMore:(id)arg1;
- (void)onPersonalSetting:(id)arg1;
- (void)onNotifySetFeedCover:(id)arg1;
- (void)clickOnHeaderImage;
- (void)reloadData;
- (void)loadFaceImage;
- (_Bool)isSupportRightDragToGoBack;
- (_Bool)isSupportInterruputRightDragToGoBack;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)getSpaceRight;
- (void)loadView;
- (void)dealloc;
- (id)initWithDetailData:(id)arg1;
- (id)initWithFavourData:(id)arg1;
- (id)initWithQQUrl:(id)arg1 from:(long long)arg2 preCtr:(id)arg3;
- (id)initWithUin:(long long)arg1 feedModel:(id)arg2 style:(long long)arg3 from:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
