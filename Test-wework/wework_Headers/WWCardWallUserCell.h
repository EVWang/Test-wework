//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView, WWKAvatarImageView;

@interface WWCardWallUserCell : UITableViewCell
{
    scoped_refptr_e1f85e48 _user;
    WWKAvatarImageView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_corpLabel;
    UIView *_separatorView;
}

@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UILabel *corpLabel; // @synthesize corpLabel=_corpLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) WWKAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) scoped_refptr_e1f85e48 user; // @synthesize user=_user;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

