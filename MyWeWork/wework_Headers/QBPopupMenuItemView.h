//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QBPopupMenu, QBPopupMenuItem, UIButton, UIImage;

@interface QBPopupMenuItemView : UIView
{
    QBPopupMenu *_popupMenu;
    UIButton *_button;
    QBPopupMenuItem *_item;
}

+ (id)itemViewWithItem:(id)arg1;
@property(retain, nonatomic) QBPopupMenuItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) __weak QBPopupMenu *popupMenu; // @synthesize popupMenu=_popupMenu;
- (void).cxx_destruct;
- (void)configureButton;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;
- (void)performAction;
@property(retain, nonatomic) UIImage *highlightedImage;
@property(retain, nonatomic) UIImage *image;
- (id)initWithItem:(id)arg1;

@end

