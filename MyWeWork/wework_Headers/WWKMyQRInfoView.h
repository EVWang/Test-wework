//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface WWKMyQRInfoView : UIView
{
    UILabel *_corpNameLabel;
    UIImageView *_avatarImage;
    UILabel *_nickNameLabel;
    UIImageView *_genderImage;
    UIImageView *_qrCodeImage;
    UIImageView *_logo;
}

@property(retain, nonatomic) UIImageView *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) UIImageView *qrCodeImage; // @synthesize qrCodeImage=_qrCodeImage;
@property(retain, nonatomic) UIImageView *genderImage; // @synthesize genderImage=_genderImage;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UIImageView *avatarImage; // @synthesize avatarImage=_avatarImage;
@property(retain, nonatomic) UILabel *corpNameLabel; // @synthesize corpNameLabel=_corpNameLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)scaleDim:(double)arg1;
- (double)scale;
- (void)buildSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

