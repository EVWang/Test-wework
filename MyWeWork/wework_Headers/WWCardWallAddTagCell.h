//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWCardWallCell.h"

@class UIButton, UILabel;

@interface WWCardWallAddTagCell : WWCardWallCell
{
    UILabel *_addLabel;
    UIButton *_addButton;
}

@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) UILabel *addLabel; // @synthesize addLabel=_addLabel;
- (void).cxx_destruct;
- (void)addTagButtonDidClick:(id)arg1;
- (void)layoutSubviews;
- (void)initSubviews;

@end

