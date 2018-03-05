//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MGSwipeTableCell.h"

@class NSString, UIColor, UIImageView, UILabel, UIView;

@interface WWKMyTeamTableViewCell : MGSwipeTableCell
{
    UILabel *_statusLabel;
    UILabel *_unreadLabel;
    UIView *_unreadView;
    long long _myTeamPageType;
    UIImageView *_stateImageView;
    UIView *_seperatorView;
    _Bool _corpConfirm;
    int _badgeNumber;
    NSString *_status;
    UIColor *_statusLableColor;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    long long _corpStat;
}

@property(nonatomic) _Bool corpConfirm; // @synthesize corpConfirm=_corpConfirm;
@property(nonatomic) long long corpStat; // @synthesize corpStat=_corpStat;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIColor *statusLableColor; // @synthesize statusLableColor=_statusLableColor;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(nonatomic) int badgeNumber; // @synthesize badgeNumber=_badgeNumber;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)p_layoutSubViewsWithLimitWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)useSeperator;
- (void)initSubViews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

