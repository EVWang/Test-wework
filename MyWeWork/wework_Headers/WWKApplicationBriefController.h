//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "WWKInteractiveLabelDelegate-Protocol.h"

@class NSString, WWKApplicationItem;

@interface WWKApplicationBriefController : UITableViewController <WWKInteractiveLabelDelegate>
{
    WWKApplicationItem *_applicationItem;
    _Bool _canJump;
}

@property(nonatomic) _Bool canJump; // @synthesize canJump=_canJump;
- (void).cxx_destruct;
- (void)actionApplyOpen;
- (id)p_createAdminTableViewFooter;
- (id)p_createMemberTableViewFooter;
- (void)interactiveLabel:(id)arg1 didTouchContext:(id)arg2 boundingRects:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setApplicationItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

