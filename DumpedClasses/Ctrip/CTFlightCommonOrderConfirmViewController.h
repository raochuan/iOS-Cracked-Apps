//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTFlightCarParkSelectViewDelegate.h"
#import "CTFlightCommonUpPushViewDelegate.h"
#import "CTFlightContactEditWidgetDelegate.h"
#import "CTFlightContactListWidgetDelegate.h"
#import "CTFlightCostDetailsDelegate.h"
#import "CTFlightDeliveryViewInvoiceTitleCellDelegate.h"
#import "CTFlightInvoiceTitleWidgetDelegate.h"
#import "CTFlightOrderConfirmDeliverySwitchCellDelegate.h"
#import "CTFlightOrderConfirmNewCProductPurchasedCellDelegate.h"
#import "CTFlightOverKeyboardViewDelegate.h"
#import "CTFlightUseAdditionalCouponWidgetDelegate.h"
#import "CTFlightUseCarViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"

@class CTFlightCommonTitleView, CTFlightCommonUpPushView, CTFlightCostDetailsFullScreenMaskView, CTFlightDeliveryUpPushInvoiceTitleView, CTFlightDeliveryView, CTFlightNavigationBar, CTFlightOrderConfirmBaseCacheBean, CTFlightPassengerInvoiceTitleViewModel, CTInvoiceTitleManagerCacheBean, CTVectorImageView, NSDate, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSString, NSTimer, UIButton, UIGestureRecognizer, UILabel, UITableView, UIToolbar, UIView;

@interface CTFlightCommonOrderConfirmViewController : CTRootViewController <CTFlightUseAdditionalCouponWidgetDelegate, CTFlightInvoiceTitleWidgetDelegate, CTFlightContactListWidgetDelegate, CTFlightContactEditWidgetDelegate, CTFlightCostDetailsDelegate, CTFlightUseCarViewControllerDelegate, CTFlightOrderConfirmDeliverySwitchCellDelegate, CTFlightCarParkSelectViewDelegate, CTFlightOrderConfirmNewCProductPurchasedCellDelegate, CTFlightDeliveryViewInvoiceTitleCellDelegate, CTFlightOverKeyboardViewDelegate, CTFlightCommonUpPushViewDelegate, UIAlertViewDelegate>
{
    NSMutableArray *arraySectionType;
    NSMutableDictionary *confirmCellTypeDic;
    _Bool isXProductSoldOut;
    NSString *couponCheckSeriviceToken;
    NSTimer *orderLimitTimer;
    int orderLimitSeconds;
    _Bool isNotFirstLoad;
    UIGestureRecognizer *tapGR;
    _Bool keyboardValidFlag;
    _Bool _isLoadingCoupon;
    int _myInvoiceTitleIndex;
    CTFlightOrderConfirmBaseCacheBean *_cache;
    UITableView *_flightOrderTableView;
    UIToolbar *_dateToolBar;
    NSString *_uuid;
    CTFlightDeliveryView *_myDeliveryView;
    CTInvoiceTitleManagerCacheBean *_invoiceTitleCacheBean;
    CTFlightCommonUpPushView *_exUpView;
    CTFlightDeliveryUpPushInvoiceTitleView *_invoiceTitleView;
    CTFlightPassengerInvoiceTitleViewModel *_editTitleModel;
    CTFlightNavigationBar *_flightNavigationBar;
    UIView *_viewBottomVirtual;
    UIView *_viewBottom;
    UILabel *_labelTotal;
    UILabel *_labelAmountDetail;
    UIView *_viewAmountDetailTag;
    NSLayoutConstraint *_amountDetailTagWidthCons;
    CTVectorImageView *_viewBottomArrowImag;
    UIButton *_buttonSender;
    CTFlightCostDetailsFullScreenMaskView *_costDetailMaskView;
    NSLayoutConstraint *_labelAmountWidthConstraint;
    NSLayoutConstraint *_labelAmountDetailWidthConstraint;
    CTFlightCommonTitleView *_titleView;
    UILabel *_limitMinutesLabel;
    UILabel *_limitSecondsLabel;
    UIView *_limitTimeView;
    CTVectorImageView *_limitTimeClockView;
    UIView *_limitTimeTipsView;
    NSDate *_enterTimeStamp;
    UILabel *_priceBottomCabinNameLabel;
    NSLayoutConstraint *_bottomTotalPriceLabelTopCons;
}

@property(retain, nonatomic) NSLayoutConstraint *bottomTotalPriceLabelTopCons; // @synthesize bottomTotalPriceLabelTopCons=_bottomTotalPriceLabelTopCons;
@property(retain, nonatomic) UILabel *priceBottomCabinNameLabel; // @synthesize priceBottomCabinNameLabel=_priceBottomCabinNameLabel;
@property(retain, nonatomic) NSDate *enterTimeStamp; // @synthesize enterTimeStamp=_enterTimeStamp;
@property(retain, nonatomic) UIView *limitTimeTipsView; // @synthesize limitTimeTipsView=_limitTimeTipsView;
@property(retain, nonatomic) CTVectorImageView *limitTimeClockView; // @synthesize limitTimeClockView=_limitTimeClockView;
@property(retain, nonatomic) UIView *limitTimeView; // @synthesize limitTimeView=_limitTimeView;
@property(retain, nonatomic) UILabel *limitSecondsLabel; // @synthesize limitSecondsLabel=_limitSecondsLabel;
@property(retain, nonatomic) UILabel *limitMinutesLabel; // @synthesize limitMinutesLabel=_limitMinutesLabel;
@property(retain, nonatomic) CTFlightCommonTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) NSLayoutConstraint *labelAmountDetailWidthConstraint; // @synthesize labelAmountDetailWidthConstraint=_labelAmountDetailWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *labelAmountWidthConstraint; // @synthesize labelAmountWidthConstraint=_labelAmountWidthConstraint;
@property(retain, nonatomic) CTFlightCostDetailsFullScreenMaskView *costDetailMaskView; // @synthesize costDetailMaskView=_costDetailMaskView;
@property(retain, nonatomic) UIButton *buttonSender; // @synthesize buttonSender=_buttonSender;
@property(retain, nonatomic) CTVectorImageView *viewBottomArrowImag; // @synthesize viewBottomArrowImag=_viewBottomArrowImag;
@property(nonatomic) __weak NSLayoutConstraint *amountDetailTagWidthCons; // @synthesize amountDetailTagWidthCons=_amountDetailTagWidthCons;
@property(nonatomic) __weak UIView *viewAmountDetailTag; // @synthesize viewAmountDetailTag=_viewAmountDetailTag;
@property(retain, nonatomic) UILabel *labelAmountDetail; // @synthesize labelAmountDetail=_labelAmountDetail;
@property(retain, nonatomic) UILabel *labelTotal; // @synthesize labelTotal=_labelTotal;
@property(retain, nonatomic) UIView *viewBottom; // @synthesize viewBottom=_viewBottom;
@property(retain, nonatomic) UIView *viewBottomVirtual; // @synthesize viewBottomVirtual=_viewBottomVirtual;
@property(retain, nonatomic) CTFlightNavigationBar *flightNavigationBar; // @synthesize flightNavigationBar=_flightNavigationBar;
@property(retain, nonatomic) CTFlightPassengerInvoiceTitleViewModel *editTitleModel; // @synthesize editTitleModel=_editTitleModel;
@property(nonatomic) int myInvoiceTitleIndex; // @synthesize myInvoiceTitleIndex=_myInvoiceTitleIndex;
@property(retain, nonatomic) CTFlightDeliveryUpPushInvoiceTitleView *invoiceTitleView; // @synthesize invoiceTitleView=_invoiceTitleView;
@property(retain, nonatomic) CTFlightCommonUpPushView *exUpView; // @synthesize exUpView=_exUpView;
@property(retain, nonatomic) CTInvoiceTitleManagerCacheBean *invoiceTitleCacheBean; // @synthesize invoiceTitleCacheBean=_invoiceTitleCacheBean;
@property(retain, nonatomic) CTFlightDeliveryView *myDeliveryView; // @synthesize myDeliveryView=_myDeliveryView;
@property(nonatomic) _Bool isLoadingCoupon; // @synthesize isLoadingCoupon=_isLoadingCoupon;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) UIToolbar *dateToolBar; // @synthesize dateToolBar=_dateToolBar;
@property(retain, nonatomic) UITableView *flightOrderTableView; // @synthesize flightOrderTableView=_flightOrderTableView;
@property(retain, nonatomic) CTFlightOrderConfirmBaseCacheBean *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)hideLimitTimeTipsView;
- (void)refreshLimitTimerView;
- (void)updateLimitTimeDownCounter;
- (void)removeLimieTimeUpdateObserver;
- (void)addLimitTimeUpdateObserver;
- (void)setupTimeTipView;
- (void)setupLimitTimeView;
- (_Bool)isInternational;
- (void)keyboardHide:(id)arg1;
- (void)hideKeyboard:(id)arg1;
- (void)keyboardShow:(id)arg1;
- (void)updateXProductCouponList;
- (void)gotoFlightCarUserNewViewControllerWithModel:(id)arg1;
- (void)gotoFlightCarUserOldViewControllerWithModel:(id)arg1;
- (void)gotoFlightCarUserViewControllerWithModel:(id)arg1;
- (void)returnFirstTripAndRefresh;
- (id)getGoMiddlePageVC;
- (id)getSecondFlightListVC;
- (id)getFirstFlightListVC;
- (void)gotoRoundWayGoMiddlePage;
- (void)gotoOrderDetailViewController;
- (void)goToSuccessPage;
- (_Bool)hasUseCarCouponInConfirmView;
- (void)backBarButtonClicked:(id)arg1;
- (id)getTraceParam;
- (void)customizeViewControllerBeforeAnimate:(id)arg1;
- (void)applicationDidEnterForeground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)flightOrderViewKeyboardWillHide:(id)arg1;
- (void)flightOrderViewKeyboardWillShow:(id)arg1;
- (void)refreshTitleView;
- (void)priceDetailButtonDidPressed:(id)arg1;
- (_Bool)contactEditWidget:(id)arg1 checkNode:(id)arg2;
- (void)contactEditWidget:(id)arg1 deleteNode:(id)arg2;
- (void)contactEditWidget:(id)arg1 editedNode:(id)arg2;
- (void)contactListWidget:(id)arg1 deleteNode:(id)arg2;
- (void)contactListWidget:(id)arg1 changedNode:(id)arg2;
- (_Bool)contactListWidget:(id)arg1 checkNode:(id)arg2 alert:(_Bool)arg3;
- (void)contactListWidget:(id)arg1 didSelect:(id)arg2;
- (void)selectInvoiceTitleModel:(id)arg1 andTitleWidget:(id)arg2;
- (void)submitButtonClicked;
- (void)flightOrderConfirmDeliverySwitchOpen:(_Bool)arg1;
- (void)useCarViewControllerDidTapBack;
- (void)useCarViewControllerDidTapConfirmWithProductModel:(id)arg1;
- (void)flightConfirmNewCProductPurchasedUncheckWithModel:(id)arg1;
- (void)flightConfirmNewCProductPurchasedEditWithModel:(id)arg1 cell:(id)arg2;
- (void)maskView:(id)arg1 willRemoveFromSuperView:(id)arg2;
- (void)beforeScreenMaskHide;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)sendGetPaymentInfoService;
- (void)doWithOrderChangeResultFailWith:(id)arg1;
- (_Bool)doWithOrderChangeFrameFailWithErrorCode:(int)arg1 serverErrorCode:(int)arg2 errorMsg:(id)arg3;
- (void)onXProductSoldOutContinuePay;
- (void)onXProductSoldOutCancel;
- (_Bool)checkXProductSoldOut:(id)arg1;
- (void)sendCreateOrderService;
- (_Bool)checkDispatchInfo;
- (_Bool)checkOrderInfo;
- (void)doSubmitOrder;
- (void)submitOrder:(id)arg1;
- (void)tapUpInsideSubmitButton:(id)arg1;
- (void)tapDownSubmitButton:(id)arg1;
- (void)flightSectionProductSaleCellClickOperationWith:(id)arg1;
- (void)showProductDescWithSectionIndex:(long long)arg1;
- (_Bool)needOperationWithFlightOrderTime;
- (id)getCouponPrice;
- (long long)getSumUseCarPrice;
- (id)getCouponCostDetailModel;
- (void)showFlightPriceDetailViewWithOriginCostList:(id)arg1;
- (void)toAddressEditPage;
- (void)resetViewStatusWithXProduct:(id)arg1;
- (void)setXproductCellTypeWithModel:(id)arg1 containArray:(id)arg2;
- (void)resetPackageSaleCellTypeWithType:(long long)arg1 sectionIndex:(long long)arg2;
- (id)getConfirmPageSelectedProductName;
- (_Bool)showInvoiceDesc;
- (_Bool)showInvoiceTitleCell;
- (_Bool)hasInvoiceTitleOfOrderPage;
- (void)setFlightDeliveryCellTypeWithCellArray:(id)arg1;
- (void)resetFormCellTypeWithType:(long long)arg1;
- (void)resetFlightCellType;
- (void)resetSectionType;
- (void)resetViewWithProductSelectChange;
- (void)refreshOrderAmount;
- (void)setOrderAmount;
- (long long)calAmmount;
- (void)saveHistoryRecord;
- (void)readHistoryDeliveryInfo;
- (void)readHistoryRecord;
- (void)sendCarUseServie:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (void)updateCarUsePriceMark;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setViewByCache;
- (void)setNavigationRightbuttonItems;
- (void)setNavigationBarCusTomTitleView:(id)arg1;
- (void)initNavigationBar;
- (void)initView;
- (void)initCache;
- (void)initData;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (_Bool)isEnableUseCarCoupon;
- (double)getAdditionalCouponCellHeight;
- (void)disMissCouponWidget;
- (void)onInputAdditionalCounponCodeChanged:(id)arg1;
- (void)onDeselectAdditionalCounpon:(id)arg1;
- (void)sendCheckAdditionalCouponRequest:(id)arg1 index:(int)arg2 resultCallback:(CDUnknownBlockType)arg3 withWidget:(id)arg4 isShowAnimation:(_Bool)arg5;
- (void)onSelectAdditionalCounpon:(id)arg1 index:(int)arg2 resultCallback:(CDUnknownBlockType)arg3 withWidget:(id)arg4 isShowAnimation:(_Bool)arg5;
- (void)gotoCouponWidget;
- (void)gotoUseAdditionalCouponWidget;
- (id)getAdditionalCouponCellWithTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)sendGetAdditionalCouponListRequest;
- (long long)getPassengerIdWithCellTag:(long long)arg1;
- (void)gotoAddInvoiceTitleWithOldTitleModel:(id)arg1 titleType:(id)arg2 passengerInforID:(long long)arg3;
- (void)selectPassengerInvoiceTitleModel:(id)arg1 andTitleWidget:(id)arg2;
- (void)showInvoiceTitleViewWithIndexRow:(long long)arg1 titleArray:(id)arg2;
- (id)getInvoiceModel;
- (void)invoiceTitleWidgetDidCancelSelect:(id)arg1;
- (void)invoiceTitleWidget:(id)arg1 didDeleteTitle:(id)arg2;
- (void)selectInvoiceTitleModel:(id)arg1 andTitleWidget:(id)arg2;
- (void)afterDismissViewWithView:(id)arg1;
- (_Bool)showTaxNumberWarningOverKeyBoard:(id)arg1;
- (id)warningTaxNumberContentOverKeyBoard:(id)arg1;
- (id)warningContentOverKeyBoard:(id)arg1;
- (_Bool)showWarningOverKeyBoard:(id)arg1;
- (void)clickOverKeyboardConfirmButton:(id)arg1;
- (id)getDefaultPassengerInvoiceTitleViewModelWithType:(id)arg1;
- (void)setupDefaultPassengerInvoiceTitleViewModel;
- (void)didClickedPersonOrCorpButtonInDeliveryViewInvoiceTitleCell:(id)arg1;
- (void)initInvoiceTitleData;
- (void)didClickedButtonInDeliveryViewInvoiceTitleCell:(id)arg1;
- (id)warningContentInTaxTextFieldWarningInDeliveryViewInvoiceTitleCell:(id)arg1;
- (_Bool)showTaxTextFieldWarningInDeliveryViewInvoiceTitleCell:(id)arg1;
- (void)taxTextFieldInDeliveryViewInvoiceTitleCellDidEndEditing:(id)arg1;
- (void)taxTextFieldInDeliveryViewInvoiceTitleCellDidChange:(id)arg1;
- (id)warningContentInPersonTextViewWarningInDeliveryViewInvoiceTitleCell:(id)arg1;
- (_Bool)showPersonTextViewWarningInDeliveryViewInvoiceTitleCell:(id)arg1;
- (void)personTextViewInDeliveryViewInvoiceTitleCellDidEndEditing:(id)arg1;
- (id)setupDeliveryDesc;
- (id)setupEmptyInvoiceCellModel;
- (id)getInvoiceTitleCellModel;
- (double)getFlightWarningCellHeightWithTableView:(id)arg1 indexPath:(id)arg2;
- (id)getFlightWarningCellWithTableView:(id)arg1 indexPath:(id)arg2;
- (double)getFlightDeliveryInvoiceTitleDescCellHeightWithTableView:(id)arg1 indexPath:(id)arg2;
- (id)getFlightDeliveryInvoiceTitleDescCellWithTableView:(id)arg1 indexPath:(id)arg2;
- (double)getFlightDeliveryDescTitleCellHeightWithTableView:(id)arg1 indexPath:(id)arg2;
- (id)getFlightDeliveryDescTitleCellWithTableView:(id)arg1 indexPath:(id)arg2;
- (double)getFlightDeliveryInvoiceTitleCellHeightWithTableView:(id)arg1 indexPath:(id)arg2;
- (id)getFlightDeliveryInvoiceTitleCellWithTableView:(id)arg1 indexPath:(id)arg2;
- (_Bool)isMutexWithDeliveryType;
- (_Bool)isContainer:(id)arg1 in:(id)arg2;
- (_Bool)isNeedExternInviceTitle;
- (void)setFlightOrderConfirmCacheBeanWithDeletaPackagelist:(id)arg1;
- (id)getDirectDeliveryPromptDescInfo;
- (id)getDeliveryTitleDescInfo;
- (id)getSelectProductPrice4InvoiceCal;
- (id)getSelectProductPrice;
- (_Bool)isSelectAnyFlightProduct;
- (_Bool)hasBoughtXProductCoupon;
- (_Bool)isSelectedAnyXProduct;
- (id)getFlightOrderAmountString;
- (id)getFlightOrderTotalPrice;
- (id)getFlightPricedetailArrayWithOriginCostList:(id)arg1;
- (id)getFlightSectionCellListWith:(long long)arg1;
- (_Bool)isCProductWithCellType:(long long)arg1;
- (_Bool)isSameCellType:(long long)arg1 otherCellType:(long long)arg2;
- (int)getFlightCellTypeIndexWithIndexPath:(id)arg1;
- (id)getFlightProductSaleModelWithPath:(id)arg1 classType:(Class)arg2;
- (id)getFlightAreaSetingModelWithSectionIndex:(unsigned long long)arg1;
- (int)getFlightCircleAngleTypeWithIndexPath:(id)arg1;
- (double)getFlightNormalTitleCellHeightWithTableView:(id)arg1 indexPath:(id)arg2 title:(id)arg3 flightcellType:(long long)arg4;
- (id)getFlightNormalTitleCellWithTableView:(id)arg1 indexPath:(id)arg2 title:(id)arg3 circleViewTyoe:(int)arg4 flightcellType:(long long)arg5 urlDesc:(id)arg6;
- (double)getFlightProductSaleTitleCellHeightWithTableView:(id)arg1 indexPath:(id)arg2;
- (id)getFlightProductSaleTitleCellWithTableView:(id)arg1 indexPath:(id)arg2;
- (double)getFlightDeliveryInvoiceAddressCellHeightWithTableView:(id)arg1 indexPath:(id)arg2;
- (id)getFlightDeliveryInvoiceAddressCellWithTableView:(id)arg1 indexPath:(id)arg2;
- (double)getFlightDeliverySwitchCellHeightWithTableView:(id)arg1 indexPath:(id)arg2;
- (id)getFlightDeliverySwitchCellWithTableView:(id)arg1 indexPath:(id)arg2;
- (double)getFlightBlackCellHeightWithTableView:(id)arg1 indexPath:(id)arg2;
- (id)getFlightBlackCellWithTableView:(id)arg1 indexPath:(id)arg2;
- (double)getFlightNewCProductDoubleSelectedDetailInfoCellHeightWithTableView:(id)arg1 indexPath:(id)arg2;
- (id)getFlightNewCProductDoubleSelectedDetailInfoCellWithTableView:(id)arg1 indexPath:(id)arg2;
- (double)getFlightNewCProductSingleSelectedCellHeightWithTableView:(id)arg1 indexPath:(id)arg2;
- (id)getFlightNewCProductSingleSelectedCellWithTableView:(id)arg1 indexPath:(id)arg2;
- (double)getFlightNewCProductCellHeightWithTableView:(id)arg1 indexPath:(id)arg2;
- (id)getFlightNewCProductCellWithTableView:(id)arg1 indexPath:(id)arg2;
- (double)getFlightBProductSelectedCellHeightWithTableView:(id)arg1 indexPath:(id)arg2;
- (id)getFlightBProductSelectedCellWithTableView:(id)arg1 indexPath:(id)arg2;
- (double)getFlightBProductUnselectedCellHeightWithTableView:(id)arg1 indexPath:(id)arg2;
- (id)getFlightBProductUnselectedCellWithTableView:(id)arg1 indexPath:(id)arg2;
- (double)getFlightAProductCellHeightWithTableView:(id)arg1 indexPath:(id)arg2;
- (id)getFlightAProductCellWithTableView:(id)arg1 indexPath:(id)arg2;
- (id)getFlightDefaultCell;
- (double)getFlightSectionnProductSaleCellHeightWithTableView:(id)arg1 indexPath:(id)arg2;
- (double)getFlightFormSectionCellHeightWithTableView:(id)arg1 indexPath:(id)arg2;
- (id)getFlightFormSectionCellWithTableView:(id)arg1 indexPath:(id)arg2;
- (id)getFlightSectionnProductSaleCellWithTableView:(id)arg1 indexPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

