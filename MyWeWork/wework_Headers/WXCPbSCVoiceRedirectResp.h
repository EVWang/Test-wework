//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPPBGeneratedMessage.h"

@class NSMutableArray, NSString, WXCPbVoiceConf, WXCPbVoiceGroupInfo;

@interface WXCPbSCVoiceRedirectResp : WXPPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *addrlist; // @dynamic addrlist;
@property(retain, nonatomic) WXCPbVoiceConf *conf; // @dynamic conf;
@property(nonatomic) int encryptSwitch; // @dynamic encryptSwitch;
@property(retain, nonatomic) NSMutableArray *exitMembers; // @dynamic exitMembers;
@property(retain, nonatomic) NSString *groupId; // @dynamic groupId;
@property(retain, nonatomic) WXCPbVoiceGroupInfo *groupInfo; // @dynamic groupInfo;
@property(retain, nonatomic) NSMutableArray *grpUsrProfileList; // @dynamic grpUsrProfileList;
@property(retain, nonatomic) NSMutableArray *headSigns; // @dynamic headSigns;
@property(retain, nonatomic) NSMutableArray *liveaddrlist; // @dynamic liveaddrlist;
@property(retain, nonatomic) NSMutableArray *members; // @dynamic members;
@property(nonatomic) int roomid; // @dynamic roomid;
@property(nonatomic) long long roomkey; // @dynamic roomkey;
@property(retain, nonatomic) NSMutableArray *tcpaddrlist; // @dynamic tcpaddrlist;
@property(nonatomic) int tcpstarttime; // @dynamic tcpstarttime;

@end

