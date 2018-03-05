//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MBProgressHUDDelegate-Protocol.h"

@class NSString;
@protocol MMToastViewControllerDelegate;

@interface MMToastViewController : UIViewController <MBProgressHUDDelegate>
{
    id <MMToastViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <MMToastViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hudWasHidden:(id)arg1;
- (void)showSaveResultTip:(id)arg1 andText:(id)arg2 andDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

