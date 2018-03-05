//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "UINavigationControllerDelegate-Protocol.h"

@class NSString;
@protocol WWKRecommCorpControllerDelegate;

@interface WWKRecommendCorpController : UITableViewController <UINavigationControllerDelegate>
{
    _Bool _createRecommCorpSuccess;
    struct CorpBriefInfo _createdCorpInfo;
    _Bool _pushToCreateCtrl;
    NSString *_name;
    NSString *_personInitMail;
    id <WWKRecommCorpControllerDelegate> _delegate;
    struct PhoneItem _personInitPhone;
    struct RecommCorpVidInfo _cardInfo;
}

@property(nonatomic) struct RecommCorpVidInfo cardInfo; // @synthesize cardInfo=_cardInfo;
@property(nonatomic) __weak id <WWKRecommCorpControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct PhoneItem personInitPhone; // @synthesize personInitPhone=_personInitPhone;
@property(retain, nonatomic) NSString *personInitMail; // @synthesize personInitMail=_personInitMail;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onDeleteButtonClicked;
- (void)p_pushToVirtualVerifyCodeController:(id)arg1 isMailAddr:(_Bool)arg2;
- (void)p_popToRootViewController;
- (void)onCreatingJoinCorp;
- (void)onJoinButtonClicked;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

