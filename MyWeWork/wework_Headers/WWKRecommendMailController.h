//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QMUICommonViewController.h"

@class UIButton, UILabel;

@interface WWKRecommendMailController : QMUICommonViewController
{
    CDUnknownBlockType _compleHandler;
    UILabel *_tipLabel;
    UILabel *_mailLabel;
    UIButton *_userButton;
    UIButton *_changeButton;
}

@property(retain, nonatomic) UIButton *changeButton; // @synthesize changeButton=_changeButton;
@property(retain, nonatomic) UIButton *userButton; // @synthesize userButton=_userButton;
@property(retain, nonatomic) UILabel *mailLabel; // @synthesize mailLabel=_mailLabel;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(copy, nonatomic) CDUnknownBlockType compleHandler; // @synthesize compleHandler=_compleHandler;
- (void).cxx_destruct;
- (void)allViewCenterX;
- (void)viewWillLayoutSubviews;
- (void)onClickChangeButton;
- (void)onClickUserButton;
- (void)initSubviews;
- (void)setNavigationItemsIsInEditMode:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewDidLoad;

@end

