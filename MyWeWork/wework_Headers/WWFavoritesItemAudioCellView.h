//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWFavoritesItemBaseCellView.h"

@class UIImageView, UILabel;

@interface WWFavoritesItemAudioCellView : WWFavoritesItemBaseCellView
{
    UIImageView *_audioIconImageView;
    UILabel *_audioLengthLabel;
}

@property(retain, nonatomic) UILabel *audioLengthLabel; // @synthesize audioLengthLabel=_audioLengthLabel;
@property(retain, nonatomic) UIImageView *audioIconImageView; // @synthesize audioIconImageView=_audioIconImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)initContentData;
- (id)getVoiceMessageData;
- (void)initContentView;

@end

