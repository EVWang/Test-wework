//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, WWCMROCRScanLoadingViewLayer;

@interface WWCMROCRScanLoadingView : UIView
{
    _Bool _isActivityIndicatorMode;
    _Bool _isAnimating;
    WWCMROCRScanLoadingViewLayer *_animationLayer;
    UIActivityIndicatorView *_activityView;
}

@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) WWCMROCRScanLoadingViewLayer *animationLayer; // @synthesize animationLayer=_animationLayer;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) _Bool isActivityIndicatorMode; // @synthesize isActivityIndicatorMode=_isActivityIndicatorMode;
- (void).cxx_destruct;
- (void)disMiss;
- (void)showLoading;
- (void)p_updateAnimatorHiddenState;
- (void)p_loadingForAnimationLayer;
- (void)p_loadingForActivityView;
- (void)layoutSubviews;
- (void)p_doInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

