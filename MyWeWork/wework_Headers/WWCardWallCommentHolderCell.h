//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWCardWallCell.h"

#import "QMUITextViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, QMUITextView;

@interface WWCardWallCommentHolderCell : WWCardWallCell <QMUITextViewDelegate, UITextFieldDelegate>
{
    QMUITextView *_comment;
}

@property(retain, nonatomic) QMUITextView *comment; // @synthesize comment=_comment;
- (void).cxx_destruct;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textView:(id)arg1 newHeightAfterTextChanged:(double)arg2;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
- (void)initSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

