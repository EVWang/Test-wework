//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKConversationMessageBubbleView.h"

@class WWKRecommendCorpCardView;

@interface WWKConversationRecommendBubbleView : WWKConversationMessageBubbleView
{
    struct VirtualRecommCorpVidInfo cardinfo;
    WWKRecommendCorpCardView *_cardView;
}

@property(retain, nonatomic) WWKRecommendCorpCardView *cardView; // @synthesize cardView=_cardView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
- (void)viewDidTap:(id)arg1;
- (void)updateBubble:(_Bool)arg1;
- (_Bool)needsArrow;
- (void)updateData;
- (void)initSubviews;

@end

