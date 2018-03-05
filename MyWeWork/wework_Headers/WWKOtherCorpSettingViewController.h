//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray;

@interface WWKOtherCorpSettingViewController : UITableViewController
{
    vector_4c3fbd75 _corp_vec;
    unsigned long long _controllerType;
    NSArray *_cellTypes;
    struct CorpBriefInfo _current_corp;
    scoped_refptr_fd92d7bf _conversation;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)p_setCorpList:(const vector_4c3fbd75 *)arg1;
- (void)p_setPushWithSettingType:(unsigned long long)arg1;
- (unsigned long long)p_settingTypeWithIndexPath:(id)arg1;
- (id)p_cellTitlesWithIndexPath:(id)arg1;
- (unsigned long long)currentSettingType;
- (_Bool)p_isCurrentCheckPushType:(unsigned long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithConversation:(scoped_refptr_fd92d7bf)arg1;
- (id)initWithControllerType:(unsigned long long)arg1;
- (id)initWithControllerType:(unsigned long long)arg1 corp:(const struct CorpBriefInfo *)arg2;

@end

