//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface WWKApplyProfileHeaderView : UIView
{
    UIView *_containerView;
    UIView *_shadowView;
    UIView *_titleView;
    UILabel *_titleLabel;
    UILabel *_nameLabel;
    UILabel *_mobileOrmailLabel;
    UILabel *_remarkLabel;
    UIImageView *_avatarView;
    UIView *_separatorView;
    struct ApplicationRecord _record;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)layoutSubViewWithWidth:(double)arg1;
- (void)layoutSubviews;
- (void)setApplyRecord:(const struct ApplicationRecord *)arg1;
- (void)initSubview;
- (id)initWithFrame:(struct CGRect)arg1;

@end

