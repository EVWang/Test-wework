//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WWKMarketCategoryListViewDelegate-Protocol.h"

@class NSString, UISearchDisplayController, UITableView, UIView, WWKMarketCategoryListView, WWKMarketSearchViewController, WWKPstnCalllogLoadingView, WWKSearchBar;

@interface WWKMarketListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UISearchDisplayDelegate, UISearchBarDelegate, WWKMarketCategoryListViewDelegate>
{
    int _categoryId;
    NSString *_categoryName;
    unsigned long long _count;
    unsigned long long _type;
    UIView *_backgroundEmptyView;
    _Bool _pushFromList;
    vector_afc6b55d _appDataScource;
    _Bool _isLoading;
    UITableView *_tableView;
    WWKSearchBar *_searchBar;
    UISearchDisplayController *_searchDisplayController;
    WWKMarketSearchViewController *_searchController;
    WWKPstnCalllogLoadingView *_loadingView;
    WWKMarketCategoryListView *_categoryFilterView;
}

+ (void)preloadListData;
@property(retain, nonatomic) WWKMarketCategoryListView *categoryFilterView; // @synthesize categoryFilterView=_categoryFilterView;
@property(retain, nonatomic) WWKPstnCalllogLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) WWKMarketSearchViewController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) UISearchDisplayController *searchDisplayController; // @synthesize searchDisplayController=_searchDisplayController;
@property(retain, nonatomic) WWKSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) int categoryId; // @synthesize categoryId=_categoryId;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateNavigationItem:(_Bool)arg1;
- (void)_updateTitle:(_Bool)arg1;
- (void)_updateUI;
- (vector_afc6b55d)_getCategoryList;
- (void)_loadData;
- (void)doAfterPickCategory:(shared_ptr_f79b27a2)arg1;
- (void)cancelSelect;
- (void)didSelectCategory:(shared_ptr_f79b27a2)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onClickCancel:(id)arg1;
- (void)onClickFilter:(id)arg1;
- (void)popViewController;
- (id)backButtonTitle;
- (void)onDidScreenRotated:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 withCategoryId:(int)arg2 withCategoryName:(id)arg3 withCategoryAppCount:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

