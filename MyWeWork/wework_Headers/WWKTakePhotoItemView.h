//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImage, UILabel, UIView;

@interface WWKTakePhotoItemView : UIButton
{
    UIView *_grayBackgroundView;
    UIImage *_photoImage;
    UIImage *_waterMaskImage;
    UIButton *_iconView;
    UILabel *_tipsLabel;
    UILabel *_tipsLabel2;
    UIButton *_takePhotoButton;
}

@property(retain, nonatomic) UIButton *takePhotoButton; // @synthesize takePhotoButton=_takePhotoButton;
@property(retain, nonatomic) UILabel *tipsLabel2; // @synthesize tipsLabel2=_tipsLabel2;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIButton *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIImage *waterMaskImage; // @synthesize waterMaskImage=_waterMaskImage;
@property(retain, nonatomic) UIImage *photoImage; // @synthesize photoImage=_photoImage;
- (void).cxx_destruct;
- (struct CGSize)layoutContentWithWidth:(double)arg1;
- (double)totalHeight;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateTakePhotoButtonTitle;
- (void)initSubViews;
- (id)waterMarkImage:(id)arg1 withText:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

