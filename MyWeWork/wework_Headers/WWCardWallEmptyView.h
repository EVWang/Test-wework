//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol WWCardWallEmptyViewDelegate;

@interface WWCardWallEmptyView : UIView
{
    id <WWCardWallEmptyViewDelegate> _delegate;
    long long _historyCardCount;
    UIImageView *_iconView;
    UILabel *_detailLabel;
    UIButton *_operateButton;
    UIButton *_inputHistoryButton;
}

@property(retain, nonatomic) UIButton *inputHistoryButton; // @synthesize inputHistoryButton=_inputHistoryButton;
@property(retain, nonatomic) UIButton *operateButton; // @synthesize operateButton=_operateButton;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) long long historyCardCount; // @synthesize historyCardCount=_historyCardCount;
@property(nonatomic) __weak id <WWCardWallEmptyViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)onInput;
- (void)btn_scanAction:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)p_doInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

