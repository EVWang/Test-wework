//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class WWKSendApplicationCard;

@interface WWKMyQRInfoController2 : UIViewController
{
    _Bool _isCloseScan;
    WWKSendApplicationCard *_mCardView;
    UIViewController *_mPresentedCtrl;
}

@property(nonatomic) __weak UIViewController *mPresentedCtrl; // @synthesize mPresentedCtrl=_mPresentedCtrl;
@property(retain, nonatomic) WWKSendApplicationCard *mCardView; // @synthesize mCardView=_mCardView;
@property(nonatomic) _Bool isCloseScan; // @synthesize isCloseScan=_isCloseScan;
- (void).cxx_destruct;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)scanQrCode;
- (void)rightNavigationItemPressed;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

