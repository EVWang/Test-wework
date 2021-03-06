//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKConversationMessageBubbleView.h"

@class UIImageView, UILabel, UIView, WWKHighlightButton, WWKMessageNotify;

@interface WWKConversationNotifyBubbleView : WWKConversationMessageBubbleView
{
    UILabel *_subjectLabel;
    UILabel *_summaryLabel;
    UIImageView *_thumbImageView;
    UILabel *_titleLabel;
    UIImageView *_dotSeperator;
    UIView *_seperator;
    UILabel *_statusLabel;
    UIImageView *_statusIcon;
    WWKHighlightButton *_refuseButton;
    WWKHighlightButton *_passButton;
    UIImageView *_topArrowImageView;
    UIImageView *_bottomArrowImageView;
    UIView *_bottomVerticalSeparator;
    WWKHighlightButton *_topApplyButton;
}

@property(retain, nonatomic) WWKHighlightButton *topApplyButton; // @synthesize topApplyButton=_topApplyButton;
@property(retain, nonatomic) UIView *bottomVerticalSeparator; // @synthesize bottomVerticalSeparator=_bottomVerticalSeparator;
@property(retain, nonatomic) UIImageView *bottomArrowImageView; // @synthesize bottomArrowImageView=_bottomArrowImageView;
@property(retain, nonatomic) UIImageView *topArrowImageView; // @synthesize topArrowImageView=_topArrowImageView;
@property(retain, nonatomic) WWKHighlightButton *passButton; // @synthesize passButton=_passButton;
@property(retain, nonatomic) WWKHighlightButton *refuseButton; // @synthesize refuseButton=_refuseButton;
@property(retain, nonatomic) UIImageView *statusIcon; // @synthesize statusIcon=_statusIcon;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UIView *seperator; // @synthesize seperator=_seperator;
@property(retain, nonatomic) UIImageView *dotSeperator; // @synthesize dotSeperator=_dotSeperator;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(retain, nonatomic) UILabel *subjectLabel; // @synthesize subjectLabel=_subjectLabel;
- (void).cxx_destruct;
- (struct ApplicationRecord)p_getApplicationRecord:(const basic_string_a490aa4c *)arg1;
- (id)p_createApplicationItemWithBusinessId:(unsigned long long)arg1;
- (_Bool)isApplicationCard;
- (void)viewDidTap:(id)arg1;
- (_Bool)shouldAutoHighlights;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)operateApplicationWithStatus:(_Bool)arg1;
- (void)didClickPassButton;
- (void)didClickRefuseButton;
- (void)didClickApplyButton;
- (void)updateData;
- (Class)messageItemClass;
- (void)initSubviews;

// Remaining properties
@property(readonly, nonatomic) WWKMessageNotify *messageItem; // @dynamic messageItem;

@end

