//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@protocol PvMergeWindowDelegate;

@interface WWPvMergeWindow : UIWindow
{
    id <PvMergeWindowDelegate> _mDelegate;
}

@property(nonatomic) __weak id <PvMergeWindowDelegate> mDelegate; // @synthesize mDelegate=_mDelegate;
- (void).cxx_destruct;
- (void)quitWithAnimationDidStop;
- (void)quitWithAnimation:(_Bool)arg1;
- (void)collapseWithAnimation;
- (void)extendWithAnimation;
- (void)hideStatus;
- (void)showStatus;
- (void)dealloc;
- (id)init;

@end

