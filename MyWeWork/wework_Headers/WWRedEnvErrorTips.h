//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface WWRedEnvErrorTips : UIView
{
    NSString *_mTipsText;
    UILabel *_mTextLabel;
    UIView *_mLoopContainer;
}

@property(retain, nonatomic) UIView *mLoopContainer; // @synthesize mLoopContainer=_mLoopContainer;
@property(retain, nonatomic) UILabel *mTextLabel; // @synthesize mTextLabel=_mTextLabel;
@property(copy, nonatomic) NSString *mTipsText; // @synthesize mTipsText=_mTipsText;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)initUI;
- (id)init;

@end

