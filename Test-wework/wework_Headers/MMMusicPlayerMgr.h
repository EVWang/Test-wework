//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class MMMusicInfo, NSString;

@interface MMMusicPlayerMgr : MMService <MMService>
{
    MMMusicInfo *_m_curMusicInfo;
}

@property(retain, nonatomic) MMMusicInfo *m_curMusicInfo; // @synthesize m_curMusicInfo=_m_curMusicInfo;
- (void).cxx_destruct;
- (void)setMusicPlayDirection:(int)arg1;
- (id)getMusicInfoByMusicKey:(id)arg1;
- (_Bool)isMusicItemsContainsMusicKey:(id)arg1;
- (id)getArrMusicItems;
- (double)getCurMusicBufferTime;
- (double)getCurMusicBufferProgress;
- (double)getCurMusicOffset;
- (double)getCurMusicDuration;
- (int)getMusicPlayState;
- (id)getCurMusicTitle;
- (id)getCurMusicInfo;
- (void)seekToTime:(double)arg1;
- (_Bool)stopWithMusicKey:(id)arg1;
- (void)stopPlay;
- (void)seekToTime:(double)arg1 playAuto:(_Bool)arg2;
- (void)resumePlay;
- (_Bool)pausePlayManual:(_Bool)arg1 pauseDownload:(_Bool)arg2;
- (void)playNextMusic;
- (void)playPreviousMusic;
- (void)playWithMusicKey:(id)arg1;
- (void)setMusicItemList:(id)arg1;
- (void)setAndPlayMusicItem:(id)arg1;
- (void)updateMusicListBySource:(int)arg1;
- (int)getMusicListSource;
- (void)setPlayMode:(int)arg1;
- (int)getMusicPlayMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

