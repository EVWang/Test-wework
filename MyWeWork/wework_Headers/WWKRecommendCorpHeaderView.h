//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIButton, UILabel, WWKRecommendCorpCardView;

@interface WWKRecommendCorpHeaderView : UIView
{
    _Bool _beginLoading;
    WWKRecommendCorpCardView *_recommnedView;
    UIButton *_joinButton;
    UIButton *_deleteButton;
    UILabel *_errorLabel;
    UIActivityIndicatorView *_indicatorView;
    struct RecommCorpVidInfo _cardInfo;
}

@property(nonatomic) _Bool beginLoading; // @synthesize beginLoading=_beginLoading;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIButton *joinButton; // @synthesize joinButton=_joinButton;
@property(retain, nonatomic) WWKRecommendCorpCardView *recommnedView; // @synthesize recommnedView=_recommnedView;
@property(nonatomic) struct RecommCorpVidInfo cardInfo; // @synthesize cardInfo=_cardInfo;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)deleteCorp;
- (void)onButtonClicked;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)layoutSubViewsWithWidth:(double)arg1;
- (void)layoutSubviews;
- (void)setButtonLoading:(_Bool)arg1;
- (void)setError:(id)arg1;
- (void)initSubviews;
- (id)init;

@end

