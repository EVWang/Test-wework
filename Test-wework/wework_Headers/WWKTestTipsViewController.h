//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class WWKRecordingTipsView, WWKTipsWordsLabelView;

@interface WWKTestTipsViewController : UIViewController
{
    WWKTipsWordsLabelView *_tipsView1;
    WWKTipsWordsLabelView *_tipsView2;
    WWKRecordingTipsView *_tv;
}

@property(retain, nonatomic) WWKRecordingTipsView *tv; // @synthesize tv=_tv;
@property(retain, nonatomic) WWKTipsWordsLabelView *tipsView2; // @synthesize tipsView2=_tipsView2;
@property(retain, nonatomic) WWKTipsWordsLabelView *tipsView1; // @synthesize tipsView1=_tipsView1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)clickStart:(id)arg1;
- (void)viewDidLoad;

@end

