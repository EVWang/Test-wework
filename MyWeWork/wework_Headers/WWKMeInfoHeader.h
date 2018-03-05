//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, WWKAvatarImageView, WWKMeInfoCardView, WWKMeinfoContainer;
@protocol WWKMeInfoHeaderDelegate;

@interface WWKMeInfoHeader : UIView
{
    UIView *_cardContainer;
    UIView *_shadowView;
    WWKMeinfoContainer *_infoContainer;
    UILabel *_corpNameLabel;
    UILabel *_nameLabel;
    UILabel *_subNameLabel;
    UILabel *_jobLabel;
    UILabel *_emailLabel;
    UILabel *_mobileLabel;
    UILabel *_officePhoneLabel;
    WWKAvatarImageView *_avatarView;
    UIImageView *_realNameStatusView;
    UIButton *_shareButton;
    WWKMeInfoCardView *_cardView;
    UIButton *_newClickHeartCountView;
    scoped_refptr_e1f85e48 _user;
    _Bool _circled;
    id <WWKMeInfoHeaderDelegate> _delegate;
    long long _heartCount;
    id _context;
}

@property(nonatomic) __weak id context; // @synthesize context=_context;
@property(nonatomic) long long heartCount; // @synthesize heartCount=_heartCount;
@property(nonatomic) _Bool circled; // @synthesize circled=_circled;
@property(nonatomic) __weak id <WWKMeInfoHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onWorkStatusViewClicked;
- (void)onContainerClicked;
- (void)onShareButtonClicked:(id)arg1;
- (void)onCorpNameClicked:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)layoutContentWithWidth:(double)arg1;
- (void)layoutSubviews;
- (void)changeFont;
- (void)setUser:(const scoped_refptr_e1f85e48 *)arg1;
- (void)initSubviews;
- (id)init;

@end

