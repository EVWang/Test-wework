//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "WWKCreateCorpCardCellDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface WWKInitCorpController : UITableViewController <WWKCreateCorpCardCellDelegate>
{
    struct CorpBriefInfo _corpInfo;
    NSMutableArray *_dataSource;
    _Bool _buttonEnable;
    long long _editingRow;
    _Bool _createCorpSuccess;
    struct CorpBriefInfo _createdCorpInfo;
    unsigned long long _old_vid;
    _Bool _updateName;
    NSString *_personInitMail;
    struct PhoneItem _personInitPhone;
}

@property(nonatomic) struct PhoneItem personInitPhone; // @synthesize personInitPhone=_personInitPhone;
@property(retain, nonatomic) NSString *personInitMail; // @synthesize personInitMail=_personInitMail;
@property(nonatomic) _Bool updateName; // @synthesize updateName=_updateName;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onKeybordDidShow;
- (void)p_endLoginWithDelay:(double)arg1;
- (void)p_beginLogin;
- (void)p_enterCorp:(const struct CorpBriefInfo *)arg1;
- (void)p_enterCorp:(const struct CorpBriefInfo *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)p_enterCorpAndModifyName:(id)arg1;
- (void)onCreateVirtulCorp;
- (void)onTextFieldDidReturn:(id)arg1 index:(long long)arg2 withCell:(id)arg3;
- (void)onTextFieldDidChange:(id)arg1 index:(long long)arg2 withCell:(id)arg3;
- (void)onTextFieldDidBeginEdit:(id)arg1 index:(long long)arg2 withCell:(id)arg3;
- (void)onTap:(id)arg1;
- (void)p_setButtonLoading:(_Bool)arg1;
- (void)p_setButtonEnable:(_Bool)arg1;
- (void)p_updateErrorMsg:(id)arg1;
- (void)p_updateButtonTitle:(id)arg1;
- (void)p_updateButton;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)deleteCorp;
- (void)initData;
- (void)setCorpInfo:(struct CorpBriefInfo *)arg1;
- (void)moreClick;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

