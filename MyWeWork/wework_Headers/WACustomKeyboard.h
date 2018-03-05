//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIInputViewAudioFeedback-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WAEmotionViewDelegate-Protocol.h"

@class NSString, NSTimer, UIButton, UIImageView, UIPageControl, UIScrollView;
@protocol UITextInput, WACustomKeyboardDelegate;

@interface WACustomKeyboard : UIView <WAEmotionViewDelegate, UIScrollViewDelegate, UIInputViewAudioFeedback>
{
    UIScrollView *scrollView;
    UIPageControl *pageControl;
    UIImageView *_imgDelete;
    UIImageView *_imgDeleteHL;
    id <UITextInput> _textView;
    long long _maxLength;
    id <WACustomKeyboardDelegate> _delegate;
    NSTimer *_timer;
    double _height;
    UIButton *_extraButton;
}

@property(retain, nonatomic) UIButton *extraButton; // @synthesize extraButton=_extraButton;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak id <WACustomKeyboardDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long maxLength; // @synthesize maxLength=_maxLength;
- (void).cxx_destruct;
- (void)changePage:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)selectedEmotionView:(id)arg1;
- (double)getHeight;
- (void)characterPressed:(id)arg1;
- (void)deletePressed:(id)arg1;
- (void)characterDeleted;
- (void)startDelete;
- (void)deleteReleased:(id)arg1;
- (void)dismissPressed:(id)arg1;
@property(readonly, nonatomic) _Bool enableInputClicksWhenVisible;
@property(retain) id <UITextInput> textView; // @synthesize textView=_textView;
- (void)setExtraKey:(id)arg1;
- (void)setup4X4Keyboard:(_Bool)arg1;
- (void)setup3X4Keyboard:(_Bool)arg1;
- (void)setupEmojiKeyboard;
- (void)setType:(long long)arg1 showConfirm:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

