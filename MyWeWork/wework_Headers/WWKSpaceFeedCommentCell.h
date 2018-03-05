//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WWKInteractiveLabelDelegate-Protocol.h"

@class CALayer, NSMutableArray, NSString, UIView, WEWCloudObjectEntry, WWKInteractiveLabel;
@protocol WWKSpaceFeedCommentCellDelegate;

@interface WWKSpaceFeedCommentCell : UITableViewCell <WWKInteractiveLabelDelegate>
{
    id <WWKSpaceFeedCommentCellDelegate> _delegate;
    UIView *_bgContainerView;
    WWKInteractiveLabel *_likeLabel;
    NSMutableArray *_commentLabels;
    CALayer *_seperatorOfLikeAndComment;
    WEWCloudObjectEntry *_cloudEntry;
}

@property(retain, nonatomic) WEWCloudObjectEntry *cloudEntry; // @synthesize cloudEntry=_cloudEntry;
@property(retain, nonatomic) CALayer *seperatorOfLikeAndComment; // @synthesize seperatorOfLikeAndComment=_seperatorOfLikeAndComment;
@property(retain, nonatomic) NSMutableArray *commentLabels; // @synthesize commentLabels=_commentLabels;
@property(retain, nonatomic) WWKInteractiveLabel *likeLabel; // @synthesize likeLabel=_likeLabel;
@property(retain, nonatomic) UIView *bgContainerView; // @synthesize bgContainerView=_bgContainerView;
@property(nonatomic) __weak id <WWKSpaceFeedCommentCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)interactiveLabel:(id)arg1 didTouchContext:(id)arg2 boundingRects:(id)arg3;
- (void)interactiveLabelDidTouch:(id)arg1;
- (id)p_generateAttributedStringWithLikeItem:(unsigned long long)arg1;
- (id)generateAttributedStringWithCommentItem:(id)arg1;
- (void)p_updateCommentLabels;
- (void)p_updateLikeLabel;
- (void)p_updateUIView;
- (void)setConfigData:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)layoutElements:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)initSubView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

