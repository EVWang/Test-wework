//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FOXEventDateTimePickerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MZFormSheetController, NSArray, NSString, UITableView;

@interface WWKRelaxSettingController : UIViewController <UITableViewDelegate, UITableViewDataSource, FOXEventDateTimePickerDelegate>
{
    unsigned long long _settingMode;
    NSString *_relaxHours;
    NSString *_goworkHours;
    NSString *_gohomeHours;
    long long _relaxHourInteger;
    MZFormSheetController *_formSheet;
    UITableView *_tableView;
    NSArray *_cellTypes;
}

@property(retain, nonatomic) NSArray *cellTypes; // @synthesize cellTypes=_cellTypes;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (unsigned long long)settingTypeWithIndexPath:(id)arg1;
- (id)detailCellTitlesWithIndexPath:(id)arg1;
- (id)cellTitlesWithSettingType:(unsigned long long)arg1;
- (id)cellTitlesWithIndexPath:(id)arg1;
- (int)weekDayWithSettingType:(unsigned long long)arg1;
- (_Bool)shouldChooseWeekDay:(unsigned long long)arg1;
- (id)footerTextWithSection:(long long)arg1;
- (id)headerTextWithSection:(long long)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)eventDateTimePicker:(id)arg1 didScrollToDateTime:(id)arg2;
- (void)eventDateTimePicker:(id)arg1 didChangeToDate:(id)arg2;
- (void)didDismissFoxActionView;
- (void)eventDateTimePicker:(id)arg1 dateTime:(id)arg2;
- (void)timeZoneChanged;
- (void)showTimeMenuWithTag:(long long)arg1;
- (void)reloadData;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)p_checkAndAddSwitchForMainPage;
- (id)initWithRelaxSettingMode:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

