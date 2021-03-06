//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKBaseAppMessageTitleView.h"

@class UIButton, UILabel, UIProgressView;

@interface WWKVoiceAppMessageDetailView : WWKBaseAppMessageTitleView
{
    _Bool _isPlaying;
    UIButton *_playButton;
    UILabel *_nameLabel;
    UIProgressView *_progressView;
    CDUnknownBlockType _onClickPlayButton;
    struct VoiceMsg _voiceMsg;
}

@property(copy, nonatomic) CDUnknownBlockType onClickPlayButton; // @synthesize onClickPlayButton=_onClickPlayButton;
@property(nonatomic) __weak UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UIButton *playButton; // @synthesize playButton=_playButton;
@property(nonatomic) struct VoiceMsg voiceMsg; // @synthesize voiceMsg=_voiceMsg;
- (id).cxx_construct;
- (void).cxx_destruct;
- (double)getHeightWithLimitWitdh:(double)arg1;
- (void)startPlay:(_Bool)arg1;
- (void)didClickPlayButton:(id)arg1;

@end

