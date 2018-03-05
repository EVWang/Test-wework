//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWRedEnvBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WWRedEnvPickerViewHolderDelegate-Protocol.h"
#import "WWRedEnvRankingListHeaderViewDelagate-Protocol.h"

@class MBProgressHUD, NSString, UITableView, UIView, WWFavoriteEmptyView, WWRedCustomTopMenu, WWRedEnvPickerViewHolder, WWRedEnvRankingListHeaderView;

@interface WWRedEnvRankingListController : WWRedEnvBaseViewController <WWRedEnvPickerViewHolderDelegate, WWRedEnvRankingListHeaderViewDelagate, UITableViewDataSource, UITableViewDelegate>
{
    struct vector<scoped_refptr<redenvelopes::RedEnvelopesRecvRankItem>, std::__1::allocator<scoped_refptr<redenvelopes::RedEnvelopesRecvRankItem>>> _mRankItemList;
    WWRedEnvPickerViewHolder *_mYearPickerHolder;
    NSString *_mSelectDate;
    WWRedEnvRankingListHeaderView *_mHeadView;
    UIView *_mContentView;
    UITableView *_mTableView;
    MBProgressHUD *_mLoadingHUD;
    WWFavoriteEmptyView *_mEmptyView;
    WWRedCustomTopMenu *_mCustomRightBar;
}

@property(retain, nonatomic) WWRedCustomTopMenu *mCustomRightBar; // @synthesize mCustomRightBar=_mCustomRightBar;
@property(retain, nonatomic) WWFavoriteEmptyView *mEmptyView; // @synthesize mEmptyView=_mEmptyView;
@property(retain, nonatomic) MBProgressHUD *mLoadingHUD; // @synthesize mLoadingHUD=_mLoadingHUD;
@property(retain, nonatomic) UITableView *mTableView; // @synthesize mTableView=_mTableView;
@property(retain, nonatomic) UIView *mContentView; // @synthesize mContentView=_mContentView;
@property(retain, nonatomic) WWRedEnvRankingListHeaderView *mHeadView; // @synthesize mHeadView=_mHeadView;
@property(copy, nonatomic) NSString *mSelectDate; // @synthesize mSelectDate=_mSelectDate;
@property(retain, nonatomic) WWRedEnvPickerViewHolder *mYearPickerHolder; // @synthesize mYearPickerHolder=_mYearPickerHolder;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onTopUserHeadImageViewClicked:(unsigned long long)arg1;
- (void)wwRedEnvPickerView:(id)arg1 didChooseRowTitle:(id)arg2 atSessionTitle:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)jumpToUserInfoViewController:(unsigned long long)arg1;
- (void)showLoadSuccUI;
- (void)showLoadFailUI;
- (void)delayShowLoading;
- (void)showLoadingUI:(_Bool)arg1;
- (void)showEmptyView:(_Bool)arg1;
- (void)updateUI;
- (void)loadData:(_Bool)arg1;
- (void)reLoadData:(_Bool)arg1;
- (id)getCurrYear;
- (id)getValidYears;
- (void)onSelectYear;
- (void)updateNaviSelectYear;
- (void)viewDidLayoutSubviews;
- (void)initUI;
- (id)backButtonTitle;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

