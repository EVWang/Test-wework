//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface WWKConvWorkStatusView : UIView
{
    _Bool _showMore;
    UILabel *_tipLabel;
    UIButton *_showMoreButton;
}

@property(retain, nonatomic) UIButton *showMoreButton; // @synthesize showMoreButton=_showMoreButton;
@property(nonatomic) _Bool showMore; // @synthesize showMore=_showMore;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)layoutSubViewsWithWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)onShowMore;
- (void)setImage:(id)arg1 withTitle:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

