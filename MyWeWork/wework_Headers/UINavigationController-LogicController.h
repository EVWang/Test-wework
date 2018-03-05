//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@interface UINavigationController (LogicController)
- (_Bool)isNavStackLocked;
- (void)unlockNavStack;
- (void)lockNavStack;
- (_Bool)isUseNavStackLock;
- (void)clearPopNavStack;
- (void)PopNavStackIfNeed;
- (_Bool)PushToNavStackIfNeed:(id)arg1 operationType:(long long)arg2 bAnimated:(_Bool)arg3;
- (void)pushUniqueClassViewController:(id)arg1 animated:(_Bool)arg2;
- (void)PopViewControllerCount:(unsigned int)arg1 animated:(_Bool)arg2;
- (id)PopViewControllerAnimated:(_Bool)arg1;
- (id)DispatchPopViewControllerAnimated:(_Bool)arg1;
- (id)PopToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)PopToRootViewControllerAnimated:(_Bool)arg1;
- (void)PushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)getNextTopViewController;
- (id)getTopViewController;
- (void)onBackButtonClicked:(id)arg1;
- (id)getViewControllerImage:(id)arg1;
- (id)FindViewControllerBefore:(id)arg1;
@property(nonatomic) _Bool m_bAnimated;
- (id)interactivePopGestureRecognizer_internal;
@end

