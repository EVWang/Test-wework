//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKSimpleTableViewCell.h"

#import "UserProxyObserverDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UIView, WWKAvatarImageView, WWKConversationWSView;
@protocol WWKOrganizationCellDelegate;

@interface WWKOrganizationCell : WWKSimpleTableViewCell <UserProxyObserverDelegate>
{
    struct UserOrDepartment userOrDepartment_;
    struct unique_ptr<UserSmartProxyObserver, std::__1::default_delete<UserSmartProxyObserver>> _userProxyObserver;
    _Bool _needOnlineStatus;
    _Bool _forceNotShowCorpName;
    _Bool _forceNotShowCreator;
    WWKConversationWSView *_wsImageView;
    _Bool _parentTableHaveAZIndex;
    _Bool _inEditingMode;
    _Bool _isSelected;
    _Bool _supportModifyUser;
    WWKAvatarImageView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_detailLabel;
    UIImageView *_creatorImageView;
    UIButton *_selectButton;
    UIView *_maskView;
    UILabel *_groupOwnerLabel;
    id <WWKOrganizationCellDelegate> _delegate;
    UIImageView *_starImageView;
    UIImageView *_deleteImageView;
    UIImageView *_emailVerifyImageView;
    UIButton *_modifyUserButton;
}

@property(retain, nonatomic) UIButton *modifyUserButton; // @synthesize modifyUserButton=_modifyUserButton;
@property(retain, nonatomic) UIImageView *emailVerifyImageView; // @synthesize emailVerifyImageView=_emailVerifyImageView;
@property(retain, nonatomic) UIImageView *deleteImageView; // @synthesize deleteImageView=_deleteImageView;
@property(retain, nonatomic) UIImageView *starImageView; // @synthesize starImageView=_starImageView;
@property(nonatomic) __weak id <WWKOrganizationCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool supportModifyUser; // @synthesize supportModifyUser=_supportModifyUser;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool inEditingMode; // @synthesize inEditingMode=_inEditingMode;
@property(retain, nonatomic) UILabel *groupOwnerLabel; // @synthesize groupOwnerLabel=_groupOwnerLabel;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIButton *selectButton; // @synthesize selectButton=_selectButton;
@property(retain, nonatomic) UIImageView *creatorImageView; // @synthesize creatorImageView=_creatorImageView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) WWKAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) _Bool parentTableHaveAZIndex; // @synthesize parentTableHaveAZIndex=_parentTableHaveAZIndex;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isExternalUserCell;
- (void)updateOnlineStatus;
- (void)OnRemoveUser:(scoped_refptr_e1f85e48)arg1;
- (void)OnOnlineStatusChange:(scoped_refptr_e1f85e48)arg1 onlineStatus:(int)arg2;
- (void)OnUserPropertyChanged:(scoped_refptr_e1f85e48)arg1;
- (void)didClickUserEditButton;
- (void)resetData;
- (void)forceNotShowCreator:(_Bool)arg1;
- (void)forceNotShowCorpName:(_Bool)arg1;
- (void)setNeedOwner:(_Bool)arg1;
- (void)showStarContact:(_Bool)arg1;
- (void)setDepartmentItem:(scoped_refptr_85c18dd7)arg1;
- (void)setUserItem:(const scoped_refptr_e1f85e48 *)arg1 underDepartmentID:(unsigned long long)arg2;
- (void)setUserItem:(const scoped_refptr_e1f85e48 *)arg1 showCompleteName:(_Bool)arg2 showWorkStatus:(_Bool)arg3;
- (void)setUserItem:(const scoped_refptr_e1f85e48 *)arg1 showCompleteName:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setNeedOnlineStatus:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

