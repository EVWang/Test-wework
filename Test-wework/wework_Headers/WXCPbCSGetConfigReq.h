//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPPBGeneratedMessage.h"

@class NSData, NSMutableArray, WXCPbDeviceInfo;

@interface WXCPbCSGetConfigReq : WXPPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *fieldType; // @dynamic fieldType;
@property(retain, nonatomic) WXCPbDeviceInfo *info; // @dynamic info;
@property(retain, nonatomic) NSData *syncKey; // @dynamic syncKey;

@end

