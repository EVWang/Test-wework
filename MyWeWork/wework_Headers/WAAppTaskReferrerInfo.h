//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CContact, NSString;

@interface WAAppTaskReferrerInfo : NSObject
{
    _Bool _isReferrerWeChatPlugin;
    unsigned int _originScene;
    unsigned int _hostVersion;
    unsigned int _pluginSessionID;
    NSString *_referrerAppID;
    id _referrerData;
    unsigned long long _operateScene;
    NSString *_pluginSDKAppID;
    CContact *_hostContact;
    NSString *_hostUserName;
}

@property(nonatomic) unsigned int pluginSessionID; // @synthesize pluginSessionID=_pluginSessionID;
@property(nonatomic) unsigned int hostVersion; // @synthesize hostVersion=_hostVersion;
@property(retain, nonatomic) NSString *hostUserName; // @synthesize hostUserName=_hostUserName;
@property(retain, nonatomic) CContact *hostContact; // @synthesize hostContact=_hostContact;
@property(nonatomic) unsigned int originScene; // @synthesize originScene=_originScene;
@property(retain, nonatomic) NSString *pluginSDKAppID; // @synthesize pluginSDKAppID=_pluginSDKAppID;
@property(nonatomic) _Bool isReferrerWeChatPlugin; // @synthesize isReferrerWeChatPlugin=_isReferrerWeChatPlugin;
@property(nonatomic) unsigned long long operateScene; // @synthesize operateScene=_operateScene;
@property(retain, nonatomic) id referrerData; // @synthesize referrerData=_referrerData;
@property(retain, nonatomic) NSString *referrerAppID; // @synthesize referrerAppID=_referrerAppID;
- (void).cxx_destruct;
- (id)description;

@end

