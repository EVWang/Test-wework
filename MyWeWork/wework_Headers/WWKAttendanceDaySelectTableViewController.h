//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray;

@interface WWKAttendanceDaySelectTableViewController : UITableViewController
{
    scoped_refptr_75d5a2b5 rule_;
    NSArray *_dataSource;
}

@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
- (id).cxx_construct;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)p_isWorkDaySelect:(unsigned long long)arg1;
- (void)p_handleSelectWorkDay:(unsigned long long)arg1;
- (void)p_handleHolidayNeverCheckin:(id)arg1;
- (void)p_handleNonworkAllowCheckin:(id)arg1;
- (id)p_getTitleWithType:(unsigned long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithCheckinRule:(scoped_refptr_75d5a2b5)arg1;

@end

