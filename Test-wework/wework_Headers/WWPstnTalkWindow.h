//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

#import "WWPstnTalkMgrDelegate-Protocol.h"
#import "WWSafeTimerHolderDelegate-Protocol.h"

@class NSString, NSTimer, UIButton, UIImageView, UILabel, WWPstnTalkUserInfo, WWSafeTimerHolder, WXCContactAbstract, WXCPstnCallingAnimation;

@interface WWPstnTalkWindow : UIWindow <WWPstnTalkMgrDelegate, WWSafeTimerHolderDelegate>
{
    scoped_refptr_e1f85e48 _mPeerUserInfo;
    WXCContactAbstract *_mPeerContactInfo;
    WXCPstnCallingAnimation *_callingAnim;
    float _headSize;
    float _headMargin;
    float _SysCallBtnMargin;
    float _cancleBtnContentHeight;
    float _cancleBtnContentY;
    _Bool _pstnHanguped;
    UIImageView *_mBackgroundView;
    UIImageView *_mHeadImageView;
    UILabel *_mNameLabel;
    UILabel *_mDetailLabel;
    UIButton *_mCancelBtn;
    UIButton *_mRecallBtn;
    UILabel *_mRecallLabel;
    UIButton *_mSysCallBtn;
    UILabel *_mSysCallLabel;
    UILabel *_mPstnStateLabel;
    UILabel *_mBottomHintLabel;
    UIImageView *_mbottomHintLineView;
    WWPstnTalkUserInfo *_mCallerInfo;
    long long _mPstnState;
    NSString *_mProfileCorpName;
    NSTimer *_mPstnBackAutoRetryTimer;
    WWSafeTimerHolder *_mPstnBackAutoRetryTimerHolder;
    NSTimer *_mPstnBackCallWaitTimer;
    WWSafeTimerHolder *_mPstnBackCallWaitTimerHolder;
    NSTimer *_mPstnSyscallCheckTimer;
    WWSafeTimerHolder *_mPstnSyscallCheckTimerHolder;
}

@property(retain, nonatomic) WWSafeTimerHolder *mPstnSyscallCheckTimerHolder; // @synthesize mPstnSyscallCheckTimerHolder=_mPstnSyscallCheckTimerHolder;
@property(retain, nonatomic) NSTimer *mPstnSyscallCheckTimer; // @synthesize mPstnSyscallCheckTimer=_mPstnSyscallCheckTimer;
@property(retain, nonatomic) WWSafeTimerHolder *mPstnBackCallWaitTimerHolder; // @synthesize mPstnBackCallWaitTimerHolder=_mPstnBackCallWaitTimerHolder;
@property(retain, nonatomic) NSTimer *mPstnBackCallWaitTimer; // @synthesize mPstnBackCallWaitTimer=_mPstnBackCallWaitTimer;
@property(retain, nonatomic) WWSafeTimerHolder *mPstnBackAutoRetryTimerHolder; // @synthesize mPstnBackAutoRetryTimerHolder=_mPstnBackAutoRetryTimerHolder;
@property(retain, nonatomic) NSTimer *mPstnBackAutoRetryTimer; // @synthesize mPstnBackAutoRetryTimer=_mPstnBackAutoRetryTimer;
@property(copy, nonatomic) NSString *mProfileCorpName; // @synthesize mProfileCorpName=_mProfileCorpName;
@property(nonatomic) long long mPstnState; // @synthesize mPstnState=_mPstnState;
@property(nonatomic) _Bool pstnHanguped; // @synthesize pstnHanguped=_pstnHanguped;
@property(retain, nonatomic) WWPstnTalkUserInfo *mCallerInfo; // @synthesize mCallerInfo=_mCallerInfo;
@property(retain, nonatomic) UIImageView *mbottomHintLineView; // @synthesize mbottomHintLineView=_mbottomHintLineView;
@property(retain, nonatomic) UILabel *mBottomHintLabel; // @synthesize mBottomHintLabel=_mBottomHintLabel;
@property(retain, nonatomic) UILabel *mPstnStateLabel; // @synthesize mPstnStateLabel=_mPstnStateLabel;
@property(retain, nonatomic) UILabel *mSysCallLabel; // @synthesize mSysCallLabel=_mSysCallLabel;
@property(retain, nonatomic) UIButton *mSysCallBtn; // @synthesize mSysCallBtn=_mSysCallBtn;
@property(retain, nonatomic) UILabel *mRecallLabel; // @synthesize mRecallLabel=_mRecallLabel;
@property(retain, nonatomic) UIButton *mRecallBtn; // @synthesize mRecallBtn=_mRecallBtn;
@property(retain, nonatomic) UIButton *mCancelBtn; // @synthesize mCancelBtn=_mCancelBtn;
@property(retain, nonatomic) UILabel *mDetailLabel; // @synthesize mDetailLabel=_mDetailLabel;
@property(retain, nonatomic) UILabel *mNameLabel; // @synthesize mNameLabel=_mNameLabel;
@property(retain, nonatomic) UIImageView *mHeadImageView; // @synthesize mHeadImageView=_mHeadImageView;
@property(retain, nonatomic) UIImageView *mBackgroundView; // @synthesize mBackgroundView=_mBackgroundView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (float)DeviceSize:(float)arg1 iPhone6:(float)arg2 iPhone5:(float)arg3 iPhone4:(float)arg4;
- (void)onReceivedSysCall;
- (void)onPstnInviteResp:(unsigned int)arg1 callID:(id)arg2 errCode:(int)arg3 extraInfo:(const struct PstnExtraInfo *)arg4;
- (void)wxcSafeTimerHolderOnTimeOut:(id)arg1;
- (void)onPstnBackAutoRetryTimeout;
- (void)stopPstnBackAutoRetryTimer;
- (void)startPstnBackAutoRetryTimer:(unsigned int)arg1;
- (void)onPstnBackCallTimeout;
- (void)stopPstnBackCallTimer;
- (void)startPstnBackCallTimer;
- (void)onPstnSyscallCheckTimeout;
- (void)stopPstnSyscallCheckTimer;
- (void)startPstnSyscallCheckTimer;
- (void)showAlertTips:(long long)arg1;
- (void)p_hideRecallAndSyscallBtn;
- (void)updatePstnState:(long long)arg1;
- (void)changeToAutoRetyState;
- (void)layoutSubviews;
- (void)initConstraints;
- (void)p_sendPstnRequestInternal;
- (void)sendPstnRequest;
- (void)onSysCallBtnClick:(id)arg1;
- (void)onRecallPstnBtnClick:(id)arg1;
- (void)onCancelPstnBtnClick:(id)arg1;
- (void)closePstnTalkWindow;
- (void)updateData;
- (void)_destroyAnim;
- (void)initUI;
- (void)onDidEnterBackgroundNotification:(id)arg1;
- (void)onDidAppBecomeActiveNotification:(id)arg1;
- (void)dealloc;
- (void)orientChange;
- (id)initWithCallerInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

