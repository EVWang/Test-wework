//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, WAAppTaskLoadingViewInfo, WAAppTaskReferrerInfo, WAAppTaskWebLaunchInfo, WAApptaskPluginResInfo, WAPageFlowAppInfo, WAPageFlowSessionInfo;

@interface WAAppTaskExtInfo : NSObject
{
    _Bool _beSpecificPage;
    WAAppTaskReferrerInfo *_referrerInfo;
    WAApptaskPluginResInfo *_pluginResInfo;
    WAAppTaskWebLaunchInfo *_webLaunchInfo;
    NSString *_chatName;
    NSString *_shareKey;
    WAPageFlowAppInfo *_taskAppInfo;
    WAPageFlowSessionInfo *_taskSessionInfo;
    WAAppTaskLoadingViewInfo *_loadingViewInfo;
    NSString *_opensdkAppID;
}

@property(copy, nonatomic) NSString *opensdkAppID; // @synthesize opensdkAppID=_opensdkAppID;
@property(retain, nonatomic) WAAppTaskLoadingViewInfo *loadingViewInfo; // @synthesize loadingViewInfo=_loadingViewInfo;
@property(retain, nonatomic) WAPageFlowSessionInfo *taskSessionInfo; // @synthesize taskSessionInfo=_taskSessionInfo;
@property(retain, nonatomic) WAPageFlowAppInfo *taskAppInfo; // @synthesize taskAppInfo=_taskAppInfo;
@property(nonatomic) _Bool beSpecificPage; // @synthesize beSpecificPage=_beSpecificPage;
@property(copy, nonatomic) NSString *shareKey; // @synthesize shareKey=_shareKey;
@property(copy, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(retain, nonatomic) WAAppTaskWebLaunchInfo *webLaunchInfo; // @synthesize webLaunchInfo=_webLaunchInfo;
@property(retain, nonatomic) WAApptaskPluginResInfo *pluginResInfo; // @synthesize pluginResInfo=_pluginResInfo;
@property(retain, nonatomic) WAAppTaskReferrerInfo *referrerInfo; // @synthesize referrerInfo=_referrerInfo;
- (void).cxx_destruct;

@end

