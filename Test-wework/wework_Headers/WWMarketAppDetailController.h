//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKTableViewController.h"

@class NSArray, NSMutableDictionary, NSSet, UIView, WWKCommonEmptyView, WWMarketAppInstallFloatingView;

@interface WWMarketAppDetailController : WWKTableViewController
{
    shared_ptr_4d8cf9e1 _rcmdAppPtr;
    shared_ptr_acde9f7b _providerCorpPtr;
    vector_c253e700 _relativeAppList;
    shared_ptr_39f023b2 _userCmtLstPtr;
    _Bool _isUITestMode;
    _Bool _shouldExtendPreviewInfo;
    _Bool _isMeasuringCellHeight;
    NSArray *_secArr;
    NSArray *_introRowArr;
    NSArray *_commentRowArr;
    NSArray *_providerRowArr;
    NSArray *_categoryRowArr;
    NSSet *_showAllCmtIdSet;
    NSMutableDictionary *_commentIdCellHeightDic;
    WWMarketAppInstallFloatingView *_installFloatingView;
    double _floatingShowingOffset;
    UIView *_loadingBoardView;
    WWKCommonEmptyView *_loadingProgressView;
}

@property(retain, nonatomic) WWKCommonEmptyView *loadingProgressView; // @synthesize loadingProgressView=_loadingProgressView;
@property(retain, nonatomic) UIView *loadingBoardView; // @synthesize loadingBoardView=_loadingBoardView;
@property(nonatomic) double floatingShowingOffset; // @synthesize floatingShowingOffset=_floatingShowingOffset;
@property(retain, nonatomic) WWMarketAppInstallFloatingView *installFloatingView; // @synthesize installFloatingView=_installFloatingView;
@property(nonatomic) _Bool isMeasuringCellHeight; // @synthesize isMeasuringCellHeight=_isMeasuringCellHeight;
@property(nonatomic) _Bool shouldExtendPreviewInfo; // @synthesize shouldExtendPreviewInfo=_shouldExtendPreviewInfo;
@property(retain, nonatomic) NSMutableDictionary *commentIdCellHeightDic; // @synthesize commentIdCellHeightDic=_commentIdCellHeightDic;
@property(retain, nonatomic) NSSet *showAllCmtIdSet; // @synthesize showAllCmtIdSet=_showAllCmtIdSet;
@property(retain, nonatomic) NSArray *categoryRowArr; // @synthesize categoryRowArr=_categoryRowArr;
@property(retain, nonatomic) NSArray *providerRowArr; // @synthesize providerRowArr=_providerRowArr;
@property(retain, nonatomic) NSArray *commentRowArr; // @synthesize commentRowArr=_commentRowArr;
@property(retain, nonatomic) NSArray *introRowArr; // @synthesize introRowArr=_introRowArr;
@property(retain, nonatomic) NSArray *secArr; // @synthesize secArr=_secArr;
@property(nonatomic) _Bool isUITestMode; // @synthesize isUITestMode=_isUITestMode;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setRecommendAppPtr:(shared_ptr_4d8cf9e1)arg1;
- (int)p_commentIDAtIndexPath:(id)arg1;
- (unsigned long long)p_categoryCellTypeWithRowNumber:(long long)arg1;
- (unsigned long long)p_providerCellTypeWithRowNumber:(long long)arg1;
- (unsigned long long)p_commentCellTypeWithRowNumber:(long long)arg1;
- (unsigned long long)p_introCellTypeWithRowNumber:(long long)arg1;
- (unsigned long long)p_secTypeWithSecNumber:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)onCell_viewAppCategoryDetail;
- (void)onCell_viewSingleCommentWithCommentId:(long long)arg1;
- (void)onCell_ClickBrandNameLabel;
- (void)onCell_viewComment;
- (void)onCell_writeComment;
- (void)onCell_previewImgClickedUrlStr:(id)arg1 index:(int)arg2 urlStrArr:(id)arg3;
- (void)onCell_InstallBtn;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)p_refreshTableData;
- (void)p_buildTableDataSource;
- (void)p_buildUITestTableDataSource;
- (void)p_queryAppDetailInfo;
- (void)scrollViewDidScroll:(id)arg1;
- (void)p_updateFloatingView;
- (void)viewDidLayoutSubviews;
- (void)noti_commentStateChanged;
- (void)noti_appStateChanged;
- (void)p_removeNoti;
- (void)p_registNoti;
- (void)p_updateLoadingType:(unsigned long long)arg1 withErrorMsg:(id)arg2;
- (void)p_initUI;
- (void)p_initLogic;
- (id)backButtonTitle;
- (id)init;
- (void)dealloc;

@end

