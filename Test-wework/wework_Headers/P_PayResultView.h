//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, WWCorpPayAccountedInfoCell, WWCorpPayReceiptCell, WWKAvatarImageView;

@interface P_PayResultView : UIView
{
    WWCorpPayReceiptCell *_receiptView;
    WWCorpPayAccountedInfoCell *_accountedInfoView;
    WWCorpPayReceiptCell *_qrView;
    UIView *_sepLineView;
    UIImageView *_weworkPayImgView;
    UILabel *_paySucLbl;
    UILabel *_renminbiSignLbl;
    UILabel *_amountLabl;
    UILabel *_hintInfoLabel;
    WWKAvatarImageView *_userAvatarView;
    UILabel *_userPayLbl;
    UIImageView *_accountedSuccImgView;
    UILabel *_accountedSuccLabel;
    unsigned long long _cpUIType;
}

@property(nonatomic) unsigned long long cpUIType; // @synthesize cpUIType=_cpUIType;
@property(retain, nonatomic) UILabel *accountedSuccLabel; // @synthesize accountedSuccLabel=_accountedSuccLabel;
@property(retain, nonatomic) UIImageView *accountedSuccImgView; // @synthesize accountedSuccImgView=_accountedSuccImgView;
@property(retain, nonatomic) UILabel *userPayLbl; // @synthesize userPayLbl=_userPayLbl;
@property(retain, nonatomic) WWKAvatarImageView *userAvatarView; // @synthesize userAvatarView=_userAvatarView;
@property(retain, nonatomic) UILabel *hintInfoLabel; // @synthesize hintInfoLabel=_hintInfoLabel;
@property(retain, nonatomic) UILabel *amountLabl; // @synthesize amountLabl=_amountLabl;
@property(retain, nonatomic) UILabel *renminbiSignLbl; // @synthesize renminbiSignLbl=_renminbiSignLbl;
@property(retain, nonatomic) UILabel *paySucLbl; // @synthesize paySucLbl=_paySucLbl;
@property(retain, nonatomic) UIImageView *weworkPayImgView; // @synthesize weworkPayImgView=_weworkPayImgView;
@property(retain, nonatomic) UIView *sepLineView; // @synthesize sepLineView=_sepLineView;
@property(retain, nonatomic) WWCorpPayReceiptCell *qrView; // @synthesize qrView=_qrView;
@property(retain, nonatomic) WWCorpPayAccountedInfoCell *accountedInfoView; // @synthesize accountedInfoView=_accountedInfoView;
@property(retain, nonatomic) WWCorpPayReceiptCell *receiptView; // @synthesize receiptView=_receiptView;
- (void).cxx_destruct;
- (void)updateCellWithQRItem:(const struct ReceiptItemDao *)arg1;
- (void)updateCellWithAccountedInfo:(const struct PayAccountedInfo *)arg1;
- (void)updateCellWithReceiptItem:(const struct ReceiptItemDao *)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (double)p_layout;
- (void)p_asyncUpdateAvatarAndName:(unsigned long long)arg1;
- (void)p_init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

