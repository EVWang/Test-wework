//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface WWCorpPayReceiptHeaderView : UIView
{
    UIView *_footerView;
    UIImageView *_iconImgView;
    UILabel *_receiptLbl;
}

@property(retain, nonatomic) UILabel *receiptLbl; // @synthesize receiptLbl=_receiptLbl;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)p_init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

