//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, WWKAdminAppSectionItem;

@interface WWKAppGroupSetCellHeader : UIView
{
    UIView *_seperator;
    UIView *_whitebackgroundView;
    UIButton *_editButton;
    UILabel *_titleLabel;
    UIImageView *_iconInfoImg;
    WWKAdminAppSectionItem *_data;
}

@property(retain, nonatomic) WWKAdminAppSectionItem *data; // @synthesize data=_data;
@property(retain, nonatomic) UIImageView *iconInfoImg; // @synthesize iconInfoImg=_iconInfoImg;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)doNothing;
- (id)contextMenuItems;
- (void)onDidTapImgView:(id)arg1;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

