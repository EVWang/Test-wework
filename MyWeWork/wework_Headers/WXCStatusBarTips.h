//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIWindow;

@interface WXCStatusBarTips : UIView
{
    UIView *topBar;
    UIWindow *overlayWindow;
    UILabel *stringLabel;
    UIImageView *tipsIconImage;
}

+ (void)dismiss;
+ (void)showWithStatus:(id)arg1;
+ (void)showWithTips:(id)arg1;
+ (id)sharedView;
@property(retain, nonatomic) UIImageView *tipsIconImage; // @synthesize tipsIconImage;
@property(retain, nonatomic) UILabel *stringLabel; // @synthesize stringLabel;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *topBar; // @synthesize topBar;
@property(readonly, nonatomic) UIWindow *overlayWindow; // @synthesize overlayWindow;
- (void)dismiss;
- (void)showWithStatus:(id)arg1 barColor:(id)arg2 textColor:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

