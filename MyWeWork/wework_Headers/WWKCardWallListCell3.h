//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel, UIView, WWCMROCRVCardInfo, WWCardWallCornerBackgroundView, WWKCardWallItemView;

@interface WWKCardWallListCell3 : UITableViewCell
{
    WWCMROCRVCardInfo *_cardInfo;
    WWKCardWallItemView *_itemView;
    UIButton *_containerView;
    UILabel *_headerTitle;
    UIView *_sepertor;
    WWCardWallCornerBackgroundView *_cornerImgbackView;
    UIImageView *_cornerImgView;
    _Bool _showAuthorAndNewIcon;
    _Bool _notShowTag;
    _Bool _isCardHolder;
}

@property(nonatomic) _Bool isCardHolder; // @synthesize isCardHolder=_isCardHolder;
@property(nonatomic) _Bool notShowTag; // @synthesize notShowTag=_notShowTag;
@property(nonatomic) _Bool showAuthorAndNewIcon; // @synthesize showAuthorAndNewIcon=_showAuthorAndNewIcon;
- (void).cxx_destruct;
- (void)onDidTap;
- (void)layoutSubviews;
- (struct CGSize)layoutSubViewsWithWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setData:(id)arg1;
- (void)initSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

