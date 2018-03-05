//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSError, NSLayoutConstraint, NSURL, NSURLAuthenticationChallenge, UIButton, UIImageView, UILabel;

@interface WWKWebErrorView : UIView
{
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UILabel *_detailLabel;
    UIButton *_detailButton;
    UIButton *_continueButton;
    NSLayoutConstraint *_collapseMessageConstraint;
    NSError *_error;
    NSURLAuthenticationChallenge *_challenge;
    CDUnknownBlockType _challengeCompletionHandler;
}

+ (id)errorView;
@property(copy, nonatomic) CDUnknownBlockType challengeCompletionHandler; // @synthesize challengeCompletionHandler=_challengeCompletionHandler;
@property(retain, nonatomic) NSURLAuthenticationChallenge *challenge; // @synthesize challenge=_challenge;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSLayoutConstraint *collapseMessageConstraint; // @synthesize collapseMessageConstraint=_collapseMessageConstraint;
@property(retain, nonatomic) UIButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) UIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)continueVisitDidClick:(id)arg1;
- (void)viewDetailDidClick:(id)arg1;
- (void)cancelPendingChallenge;
@property(readonly, nonatomic) NSURL *errorURL;
- (void)hide;
- (_Bool)showChallengeIfNeeded:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)localizedErrorDescription:(id)arg1;
- (id)errorConstantName:(id)arg1;
- (_Bool)showErrorIfNeeded:(id)arg1;
- (void)dealloc;
- (id)init;

@end

