//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKSimpleTableViewCell.h"

@class UIImageView, UILabel;

@interface WWKInterfaceUserCell : WWKSimpleTableViewCell
{
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_jobLabel;
    UIImageView *_introductionImageView;
    UILabel *_introducationLabel;
}

+ (double)calculateCellHeightWithUser:(const scoped_refptr_e1f85e48 *)arg1;
@property(retain, nonatomic) UILabel *introducationLabel; // @synthesize introducationLabel=_introducationLabel;
@property(retain, nonatomic) UIImageView *introductionImageView; // @synthesize introductionImageView=_introductionImageView;
@property(retain, nonatomic) UILabel *jobLabel; // @synthesize jobLabel=_jobLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (struct CGSize)sizeWithFont:(id)arg1 andWidth:(double)arg2 forText:(id)arg3;
- (void)layoutSubviews;
- (void)setUser:(const scoped_refptr_e1f85e48 *)arg1 underDepartmentId:(unsigned long long)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

