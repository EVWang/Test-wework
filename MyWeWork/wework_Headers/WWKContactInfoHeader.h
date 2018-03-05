//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QMUILabel, UIImageView, UILabel, WWKAvatarImageView, WWKCommonWSView, WWkNameCoverView;
@protocol WWKContactInfoHeaderDelegate;

@interface WWKContactInfoHeader : UIView
{
    UILabel *_corpFullNameLabel;
    UILabel *_secondFullNameLabel;
    UILabel *_corpNameLabel;
    QMUILabel *_nameLabel;
    QMUILabel *_jobLabel;
    QMUILabel *_emailLabel;
    QMUILabel *_mobileLabel;
    QMUILabel *_officePhoneLabel;
    WWKAvatarImageView *_avatarView;
    UIImageView *_genderView;
    UIImageView *_starContactView;
    UIImageView *_realNameStatusView;
    UIImageView *_turnOverImageView;
    UIImageView *_mailStatusView;
    UIView *_corpNameCoverClickView;
    WWkNameCoverView *_nameCoverClickView;
    UIView *_shadowView;
    UIView *_applyContainerView;
    UIView *_applySeperator;
    UILabel *_applyLabel;
    scoped_refptr_e1f85e48 _user;
    struct CorpBriefInfo _corpInfo;
    long long _fromChannel;
    WWKCommonWSView *_workStatusView;
    _Bool _hiddenHeart;
    id <WWKContactInfoHeaderDelegate> _delegate;
    UIView *_containerView;
}

@property(nonatomic) _Bool hiddenHeart; // @synthesize hiddenHeart=_hiddenHeart;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <WWKContactInfoHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)avatarDidTap:(id)arg1;
- (id)contextMenuItems;
- (void)menuControllerWillHide:(id)arg1;
- (void)onnameClicked;
- (void)onCorpNameClicked;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)layoutContentWithWidth:(double)arg1;
- (void)layoutSubviews;
- (id)showUserName;
- (void)hideInfoByWWCustomer;
- (void)setUser:(const scoped_refptr_e1f85e48 *)arg1 fromChannel:(long long)arg2;
- (_Bool)shouldHideCorpFullName;
- (_Bool)isWxFriend;
- (_Bool)isWorkMate;
- (_Bool)shouldHideCorpInfo;
- (id)corpFullName;
- (void)initSubviews;
- (id)init;

@end

