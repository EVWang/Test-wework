//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKCustomerDetailCell.h"

@class UILabel;

@interface WWKCustomerDetailRecordingCell3 : WWKCustomerDetailCell
{
    _Bool _isLastCell;
    UILabel *_timeLabel;
    UILabel *_contentLabel;
}

@property(nonatomic, setter=setLastCell:) _Bool isLastCell; // @synthesize isLastCell=_isLastCell;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
- (void)initSubviews;

@end

