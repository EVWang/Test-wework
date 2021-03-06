//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, UITableView, WWKMarketButtonTableViewCell;

@interface WWKBatchInstallViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    vector_c253e700 _recommondApps;
    vector_c253e700 _installedApps;
    vector_c253e700 _noInstalledApps;
    vector_c253e700 _toInstallApps;
    int _categoryId;
    shared_ptr_acde9f7b _providerCorpInfo;
    WWKMarketButtonTableViewCell *_actionButtonCell;
    _Bool _isEditting;
    UITableView *_tableView;
}

@property(nonatomic) _Bool isEditting; // @synthesize isEditting=_isEditting;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updateData:(vector_c253e700)arg1;
- (vector_c253e700)_sortRecommApps:(vector_c253e700)arg1;
- (vector_c253e700)_getAppsGroup:(_Bool)arg1;
- (void)_updateNavigationItem;
- (void)_updateTitle;
- (void)_loadData;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)popViewController;
- (void)onClickGotoInstall:(id)arg1;
- (void)onClickCancel:(id)arg1;
- (void)onClickBatchInstall:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)backButtonTitle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)refreshAfterAppsInstalled:(id)arg1;
- (void)onInstallAppsFinished:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithRecommentApps:(vector_c253e700)arg1 serviceCorpInfomation:(shared_ptr_acde9f7b)arg2 categoryId:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

