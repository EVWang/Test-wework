//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPPBGeneratedMessage.h"

@class NSData, NSMutableArray, NSString, WXCPbVoiceClientInfo, WXCPbVoiceLiveInfo;

@interface WXCPbVoiceGroupInfo : WXPPBGeneratedMessage
{
}

+ (void)initialize;
- (id)description;

// Remaining properties
@property(retain, nonatomic) NSData *authCookie; // @dynamic authCookie;
@property(retain, nonatomic) NSMutableArray *box; // @dynamic box;
@property(retain, nonatomic) WXCPbVoiceClientInfo *clientInfo; // @dynamic clientInfo;
@property(retain, nonatomic) NSString *groupHostUserName; // @dynamic groupHostUserName;
@property(retain, nonatomic) WXCPbVoiceLiveInfo *liveInfo; // @dynamic liveInfo;
@property(retain, nonatomic) NSData *liveInfoBuf; // @dynamic liveInfoBuf;
@property(nonatomic) unsigned long long mailId; // @dynamic mailId;
@property(retain, nonatomic) NSData *mailSubject; // @dynamic mailSubject;
@property(retain, nonatomic) NSData *mailappEncryptInfo; // @dynamic mailappEncryptInfo;
@property(retain, nonatomic) NSData *mailappVid; // @dynamic mailappVid;
@property(retain, nonatomic) NSData *msgShareUrl; // @dynamic msgShareUrl;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) unsigned long long playItemId; // @dynamic playItemId;
@property(retain, nonatomic) NSData *playItemInfo; // @dynamic playItemInfo;
@property(nonatomic) unsigned int pvon; // @dynamic pvon;
@property(retain, nonatomic) NSData *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) NSData *sessionPhoneCode; // @dynamic sessionPhoneCode;
@property(retain, nonatomic) NSData *sessionPhoneNum; // @dynamic sessionPhoneNum;
@property(retain, nonatomic) NSData *shareUrl; // @dynamic shareUrl;
@property(retain, nonatomic) NSData *shareUrlQq; // @dynamic shareUrlQq;
@property(retain, nonatomic) NSData *singleTalkBuf; // @dynamic singleTalkBuf;
@property(nonatomic) int voiceMode; // @dynamic voiceMode;
@property(nonatomic) int voiceType; // @dynamic voiceType;
@property(retain, nonatomic) NSString *wxGroupid; // @dynamic wxGroupid;

@end

