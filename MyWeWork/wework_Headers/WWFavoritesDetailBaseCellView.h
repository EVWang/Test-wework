//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIViewController, WWFavoritesItem;

@interface WWFavoritesDetailBaseCellView : UIView
{
    WWFavoritesItem *mFavItem;
    unsigned long long mCellType;
    UIViewController *_mParentController;
}

@property(nonatomic) __weak UIViewController *mParentController; // @synthesize mParentController=_mParentController;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)initContentView;
- (void)initCommonView;
- (void)initView;
- (void)initContentData;
- (void)initCommonData;
- (double)getFavDetailCellHeight;
- (void)initData;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)getFavItem;
- (void)dealloc;
- (id)initWithFavItem:(id)arg1 cellType:(unsigned long long)arg2;

@end

