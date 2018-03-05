//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UILabel, WWKInteractiveLabel, WWKMessage;

@interface WWKQuoteTextView : UIView
{
    double _borderSpacing;
    WWKMessage *_quoteMessage;
    WWKInteractiveLabel *_quotesLabel;
    UIView *_borderView;
    UILabel *_authorLabel;
    struct UIEdgeInsets _contentInset;
}

@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) WWKInteractiveLabel *quotesLabel; // @synthesize quotesLabel=_quotesLabel;
@property(retain, nonatomic) WWKMessage *quoteMessage; // @synthesize quoteMessage=_quoteMessage;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) double borderSpacing; // @synthesize borderSpacing=_borderSpacing;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic) unsigned long long numberOfLines;
@property(copy, nonatomic) NSAttributedString *quotes; // @dynamic quotes;
@property(copy, nonatomic) NSString *author; // @dynamic author;
- (id)initWithFrame:(struct CGRect)arg1;

@end

