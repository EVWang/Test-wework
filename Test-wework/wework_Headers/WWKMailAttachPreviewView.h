//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NotificationProxyObserverDelegate-Protocol.h"

@class UIButton, UIImageView, UILabel, WWKMessageFile;
@protocol WWKMailAttachPreviewViewDelegate;

@interface WWKMailAttachPreviewView : UIView <NotificationProxyObserverDelegate>
{
    struct unique_ptr<NotificationProxyObserver, std::__1::default_delete<NotificationProxyObserver>> _ftn_state_observer;
    WWKMessageFile *_fileMessage;
    id <WWKMailAttachPreviewViewDelegate> _delegate;
    UIImageView *_failImageView;
    UIImageView *_loadImageView;
    UILabel *_progressLabel;
    UIButton *_retryButton;
    UILabel *_failHintLabel;
}

@property(retain, nonatomic) UILabel *failHintLabel; // @synthesize failHintLabel=_failHintLabel;
@property(retain, nonatomic) UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) UIImageView *loadImageView; // @synthesize loadImageView=_loadImageView;
@property(retain, nonatomic) UIImageView *failImageView; // @synthesize failImageView=_failImageView;
@property(nonatomic) __weak id <WWKMailAttachPreviewViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WWKMessageFile *fileMessage; // @synthesize fileMessage=_fileMessage;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)p_loadingImagePercentString:(id)arg1;
- (void)onNotification:(int)arg1 source:(const struct NotificationSource *)arg2 details:(const struct NotificationDetails *)arg3;
- (void)didMoveToSuperview;
- (void)p_loadImageFail;
- (id)initWithFrame:(struct CGRect)arg1;

@end

