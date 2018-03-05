//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UILabel, WWKSurveyCardItem;

@interface WWKConversationSurveyItemView : UIView
{
    CDUnknownBlockType _buttonClick;
    long long _status;
    WWKSurveyCardItem *_surveyItem;
    UILabel *_titleLabel;
    NSMutableArray *_buttons;
}

@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WWKSurveyCardItem *surveyItem; // @synthesize surveyItem=_surveyItem;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) CDUnknownBlockType buttonClick; // @synthesize buttonClick=_buttonClick;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)layoutSubViewsWithWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)onBtnClick:(id)arg1;
- (void)onResetButtonsSelectStatus;
- (id)createSingleSelectModeButton;
- (void)configButton:(id)arg1 withTaskButton:(id)arg2;
@property(readonly, nonatomic) _Bool isSelected;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

