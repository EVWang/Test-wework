//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKAttendanceBaseController.h"

#import "AttendanceServiceObserverDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView, WWKAttendanceRulesTableEmptyView;

@interface WWKAttendanceRulesTableViewController : WWKAttendanceBaseController <UITableViewDelegate, UITableViewDataSource, AttendanceServiceObserverDelegate>
{
    struct AttendanceServiceProxyObserver *_proxyObserver;
    NSMutableArray *_dataSource;
    NSMutableArray *_tableDataSource;
    UITableView *_tableView;
    WWKAttendanceRulesTableEmptyView *_emptyView;
}

@property(retain, nonatomic) WWKAttendanceRulesTableEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *tableDataSource; // @synthesize tableDataSource=_tableDataSource;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)OnDelAttendOptionRule:(scoped_refptr_75d5a2b5)arg1;
- (void)OnModAttendOptionRule:(scoped_refptr_75d5a2b5)arg1;
- (void)OnAddAttendOptionRule:(scoped_refptr_75d5a2b5)arg1;
- (void)p_updateAttendanceOption;
- (void)p_onClickAddNewRule;
- (void)p_didClickMore;
- (_Bool)p_isRuleType:(id)arg1;
- (_Bool)p_isMoreType:(id)arg1;
- (void)p_hideEmptyView;
- (void)p_showEmptyViewShowBottomHint:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

