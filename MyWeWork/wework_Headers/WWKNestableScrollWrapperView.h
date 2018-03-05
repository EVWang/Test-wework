//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIScrollView;

@interface WWKNestableScrollWrapperView : UIView
{
    UIScrollView *_innerScrollView;
    UIScrollView *_outerScrollView;
    struct CGRect _visibleRect;
}

@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
@property(nonatomic) __weak UIScrollView *outerScrollView; // @synthesize outerScrollView=_outerScrollView;
@property(retain, nonatomic) UIScrollView *innerScrollView; // @synthesize innerScrollView=_innerScrollView;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithScrollView:(id)arg1;

@end

