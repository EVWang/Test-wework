//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWCardWallCell.h"

@class UILabel, UIView;

@interface WWCardWallShareUserInfoCell : WWCardWallCell
{
    UILabel *_shareUserNameLabel;
    UILabel *_text;
    UIView *_lineLeft;
    UIView *_lineRight;
}

@property(retain, nonatomic) UIView *lineRight; // @synthesize lineRight=_lineRight;
@property(retain, nonatomic) UIView *lineLeft; // @synthesize lineLeft=_lineLeft;
@property(retain, nonatomic) UILabel *text; // @synthesize text=_text;
@property(retain, nonatomic) UILabel *shareUserNameLabel; // @synthesize shareUserNameLabel=_shareUserNameLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateData;
- (void)NeedsUpdataData;
- (void)initSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
