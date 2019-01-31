//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol WXDActionsheetViewDelegate;

@interface WXDActionsheetView : UIView
{
    UIView *backgroundView;
    double yPosition;
    int index;
    id <WXDActionsheetViewDelegate> _delegate;
}

@property __weak id <WXDActionsheetViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleTapGestureRecognizer:(id)arg1;
- (void)animateOff;
- (void)animateOn;
- (void)buttonDidClick:(id)arg1;
- (void)showAlert:(id)arg1;
- (void)showAlert;
- (id)initActionSheet:(id)arg1 cancelButtonTitle:(id)arg2 delegate:(id)arg3;

@end
