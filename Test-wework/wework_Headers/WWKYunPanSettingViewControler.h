//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WWKSelectContactsViewControllerDelegate-Protocol.h"
#import "WWKYunPanSettingViewControlerDelegate-Protocol.h"

@class NSMutableArray, NSString, QMUILabel, UITableView, WEWCloudObjectAcl, WEWCloudObjectEntry, WWKSelectContactsViewController, WWKTextFieldCell, WWKYunPanTitleView;
@protocol WWKYunPanSettingViewControlerDelegate;

@interface WWKYunPanSettingViewControler : UIViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, WWKSelectContactsViewControllerDelegate, WWKYunPanSettingViewControlerDelegate>
{
    vector_37a26bed _indexedUsrDatas;
    vector_53938b46 _cellDepartDatas;
    vector_53938b46 _mngUserDatas;
    vector_53938b46 _newAddedDatas;
    _Bool _isForMarket;
    _Bool _permissonDisplayDisabled;
    _Bool _mHasModifySettings;
    id <WWKYunPanSettingViewControlerDelegate> _delegate;
    UITableView *_mTableview;
    WWKTextFieldCell *_nameTextCell;
    NSMutableArray *_membersData;
    WEWCloudObjectEntry *_mCloudObjectEntry;
    WEWCloudObjectAcl *_objectAcl;
    long long _mSettingType;
    WWKSelectContactsViewController *_selectContactController;
    unsigned long long _lastSelectedAsMngMemberVid;
    unsigned long long _lastSelectedAsMngMemberAclType;
    WWKYunPanTitleView *_navTitleView;
    QMUILabel *_mTipsFooterLabel;
}

@property(retain, nonatomic) QMUILabel *mTipsFooterLabel; // @synthesize mTipsFooterLabel=_mTipsFooterLabel;
@property(retain, nonatomic) WWKYunPanTitleView *navTitleView; // @synthesize navTitleView=_navTitleView;
@property(nonatomic) unsigned long long lastSelectedAsMngMemberAclType; // @synthesize lastSelectedAsMngMemberAclType=_lastSelectedAsMngMemberAclType;
@property(nonatomic) unsigned long long lastSelectedAsMngMemberVid; // @synthesize lastSelectedAsMngMemberVid=_lastSelectedAsMngMemberVid;
@property(retain, nonatomic) WWKSelectContactsViewController *selectContactController; // @synthesize selectContactController=_selectContactController;
@property(nonatomic) _Bool mHasModifySettings; // @synthesize mHasModifySettings=_mHasModifySettings;
@property(nonatomic) long long mSettingType; // @synthesize mSettingType=_mSettingType;
@property(retain, nonatomic) WEWCloudObjectAcl *objectAcl; // @synthesize objectAcl=_objectAcl;
@property(retain, nonatomic) WEWCloudObjectEntry *mCloudObjectEntry; // @synthesize mCloudObjectEntry=_mCloudObjectEntry;
@property(retain, nonatomic) NSMutableArray *membersData; // @synthesize membersData=_membersData;
@property(retain, nonatomic) WWKTextFieldCell *nameTextCell; // @synthesize nameTextCell=_nameTextCell;
@property(retain, nonatomic) UITableView *mTableview; // @synthesize mTableview=_mTableview;
@property(nonatomic) _Bool permissonDisplayDisabled; // @synthesize permissonDisplayDisabled=_permissonDisplayDisabled;
@property(nonatomic) _Bool isForMarket; // @synthesize isForMarket=_isForMarket;
@property(nonatomic) __weak id <WWKYunPanSettingViewControlerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)checkAndUpdateActionDoneBtn;
- (void)addDepartment:(vector_a024b487 *)arg1 dicDepartmentAcl:(map_d8f62f6d)arg2;
- (void)addUser:(vector_89e6321f *)arg1 dicUserAcl:(map_d8f62f6d)arg2;
- (vector_53938b46)getAllMembers;
- (_Bool)updateMngUserPermisson:(unsigned long long)arg1 aclRole:(unsigned long long)arg2 isAutoReload:(_Bool)arg3;
- (_Bool)updateNewAddedPermisson:(unsigned long long)arg1 aclRole:(unsigned long long)arg2 isAutoReload:(_Bool)arg3;
- (void)updateDepartmentPermisson:(unsigned long long)arg1 aclRole:(unsigned long long)arg2;
- (int)removeMemberAt:(unsigned long long)arg1 dataIndex:(unsigned long long)arg2;
- (void)showMngUserTransferPermissonConfirm:(unsigned long long)arg1 aclRole:(unsigned long long)arg2 userName:(id)arg3;
- (void)showNewAddUserTransferPermissonConfirm:(unsigned long long)arg1 aclRole:(unsigned long long)arg2 userName:(id)arg3;
- (void)showTransferUserMemberPermissonConfirm:(unsigned long long)arg1 dataIndex:(unsigned long long)arg2 aclRole:(unsigned long long)arg3 userName:(id)arg4;
- (_Bool)revertUserMemberPermisson:(unsigned long long)arg1 revertRole:(unsigned long long)arg2;
- (_Bool)updateUserMemberPermisson:(unsigned long long)arg1 dataIndex:(unsigned long long)arg2 aclRole:(unsigned long long)arg3 isAutoReload:(_Bool)arg4;
- (vector_37a26bed)getVailUserMember;
- (id)sectionIndexTitlesForRecentContactsTableView:(_Bool)arg1;
- (_Bool)isLastCellInSection:(id)arg1;
- (_Bool)isFirstCellInSection:(id)arg1;
- (void)actionDone;
- (_Bool)checkSettingHasChanged;
- (void)showMakeSureAlert;
- (void)actionCancel:(id)arg1;
- (void)actionSettingDone:(id)arg1;
- (void)actionNewSettingDone:(id)arg1;
- (void)ww_gotoNextAfterSelectMember:(vector_89e6321f)arg1 withDepartmentList:(vector_a024b487)arg2 selectContactViewController:(id)arg3;
- (void)ww_deleteRow:(id)arg1;
- (_Bool)canSelectDepartmentInSelectContactsViewController:(id)arg1;
- (void)selectContactsViewController:(id)arg1 didConfirmToSelectContacts:(vector_89e6321f)arg2;
- (void)selectContactsViewController:(id)arg1 didConfirmToSelectContacts:(vector_89e6321f)arg2 andDepartments:(vector_a024b487)arg3;
- (id)titleForNumberExceedMax:(id)arg1;
- (long long)numberOfMaxSelectedContacts:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (long long)getStringLength:(id)arg1;
- (void)onTextFieldTextDidChange:(id)arg1;
- (void)ww_updateTipsFooterLabel;
- (void)ww_reloadTableView;
- (void)p_updateNavTitle:(int)arg1;
- (void)actionLastStep;
- (void)addMember;
- (void)setTopCloudObjectAcl:(id)arg1;
- (_Bool)ww_isCellShowDownArrow;
- (id)ww_getAddObjects;
- (id)ww_getAttribStringByAclRole:(unsigned long long)arg1;
- (_Bool)ww_isPreviewOrNewSettingType;
- (void)ww_didSelectNormalUser:(struct memberData *)arg1 dataIndex:(unsigned long long)arg2 index:(unsigned long long)arg3;
- (void)ww_didSelectDepartmentUser:(struct memberData *)arg1 dataIndex:(unsigned long long)arg2;
- (void)ww_didSelectNewAddUser:(struct memberData *)arg1 dataIndex:(unsigned long long)arg2;
- (void)ww_didSelectMngUser:(struct memberData *)arg1 dataIndex:(unsigned long long)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUsersList:(vector_89e6321f)arg1 witDepartsList:(vector_a024b487)arg2;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)initNavigationItem;
- (void)initUI;
- (void)viewDidLoad;
- (id)initWithCloudEntry:(id)arg1 settingType:(long long)arg2 isForMarket:(_Bool)arg3;
- (id)initWithCloudEntry:(id)arg1 settingType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

