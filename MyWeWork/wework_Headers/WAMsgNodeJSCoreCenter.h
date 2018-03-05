//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IWAMsgNodeJSCoreDelegate-Protocol.h"
#import "IWAMsgNodeResourceMgrExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "WAContactMgrExtension-Protocol.h"
#import "WAMsgNodeLaunchLogicDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, WAMsgNodeLaunchLogic;
@protocol OS_dispatch_group;

@interface WAMsgNodeJSCoreCenter : MMService <IWAMsgNodeJSCoreDelegate, WAContactMgrExtension, PBMessageObserverDelegate, WAMsgNodeLaunchLogicDelegate, IWAMsgNodeResourceMgrExt, MMService>
{
    WAMsgNodeLaunchLogic *_launchLogic;
    NSMutableDictionary *_coreId2ContextDict;
    NSMutableDictionary *_coreId2CoreData;
    NSMutableArray *_backgroundSuspendedCoreIdList;
    NSMutableDictionary *_appId2DowlnloadingCoreData;
    NSMutableSet *_waitingToStartCoreIdList;
    NSObject<OS_dispatch_group> *_fontGroup;
    struct _WACOpenType _openType;
    long long _smartRetainCount;
}

- (void).cxx_destruct;
- (_Bool)isSafeWithAppId:(id)arg1 debugMode:(unsigned int)arg2 widgetType:(unsigned int)arg3 version:(unsigned long long)arg4;
- (_Bool)isPendingCoreDataContainsCoreId:(unsigned int)arg1;
- (void)removePendingCoreDataListWithAppId:(id)arg1;
- (id)getPendingCoreDataListWithAppId:(id)arg1 debugMode:(unsigned int)arg2;
- (id)getPendingCoreDataListWithAppId:(id)arg1;
- (void)addPendingCoreData:(id)arg1;
- (void)checkPendingCoreData:(id)arg1;
- (void)setupContextWithCoreData:(id)arg1;
- (void)onImageUrlDownloaded:(id)arg1;
- (void)onPkgDownload:(id)arg1 appId:(id)arg2 debugMode:(unsigned int)arg3 version:(unsigned long long)arg4 errCode:(int)arg5 scene:(unsigned int)arg6 dataSize:(unsigned int)arg7;
- (void)onGetReleaseDownloadUrlFinish:(id)arg1 url:(id)arg2 checksum:(id)arg3 version:(unsigned long long)arg4 errCode:(int)arg5 scene:(unsigned int)arg6;
- (void)onGetDemoDownloadUrlFinish:(id)arg1 url:(id)arg2 checksum:(id)arg3 errCode:(int)arg4 scene:(unsigned int)arg5;
- (void)onGetDebugDownloadUrlFinish:(id)arg1 url:(id)arg2 checksum:(id)arg3 errCode:(int)arg4 scene:(unsigned int)arg5;
- (void)onLaunchAppId:(id)arg1 debugMode:(unsigned int)arg2 reqVersion:(unsigned long long)arg3 permissonInfo:(id)arg4 latestVersion:(unsigned long long)arg5 latestChecksum:(id)arg6 errCode:(int)arg7 scene:(unsigned int)arg8;
- (void)onJSCore:(unsigned int)arg1 openApp:(id)arg2;
- (void)onJSCore:(unsigned int)arg1 updateHeight:(double)arg2;
- (void)onJSCoreSetupFinished:(unsigned int)arg1;
- (void)onJSCore:(unsigned int)arg1 executed:(id)arg2 reserve:(_Bool)arg3;
- (void)reportCostTimeWithEventID:(unsigned long long)arg1 coreDataList:(id)arg2 isFinished:(_Bool)arg3 dataSize:(unsigned int)arg4;
- (void)reportCostTimeWithEventID:(unsigned long long)arg1 coreData:(id)arg2 isFinished:(_Bool)arg3 dataSize:(unsigned int)arg4;
- (void)delayPerformViewStateChangeWithObject:(id)arg1;
- (void)delayPerformViewStateChange:(unsigned long long)arg1 withCoreId:(unsigned int)arg2;
- (void)viewStateChange:(unsigned long long)arg1 withCoreList:(id)arg2;
- (void)viewStateChange:(unsigned long long)arg1 withCoreId:(unsigned int)arg2;
- (void)notifyOnTapWithCoreId:(unsigned int)arg1 atPoint:(struct CGPoint)arg2 forEvent:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)getJSLogMetaInfoWithCoreId:(unsigned int)arg1;
- (id)getJSLogWithCoreId:(unsigned int)arg1;
- (void)switchShowJSLogEntrance;
- (_Bool)shouldShowJSLogEntranceWithDebugMode:(unsigned long long)arg1;
- (id)fontGroup;
- (void)ensureCreatedFontGroup;
- (struct _WACOpenType)openTypeForCGFont;
- (void)ensureLoadedCGFont;
- (struct _WACOpenType)openTypeFor3rdTTF;
- (void)ensureLoaded3rdTTF;
- (id)getImageWithCoreId:(unsigned int)arg1 url:(id)arg2;
- (void)resumeAllCoreWhenEnterForeground;
- (void)pauseAllCoreWhenEnterBackground;
- (void)destoryFontData;
- (void)removeAllResource;
- (void)pauseCoreWithId:(unsigned int)arg1;
- (void)resumeCoreWithId:(unsigned int)arg1;
- (void)startCoreWithId:(unsigned int)arg1 force:(_Bool)arg2;
- (void)startCoreWithId:(unsigned int)arg1;
- (void)removeCoreWithId:(unsigned int)arg1;
- (unsigned int)createCoreWithAppId:(id)arg1 version:(unsigned long long)arg2 path:(id)arg3 query:(id)arg4 reqData:(id)arg5 canvasSize:(struct CGSize)arg6 title:(id)arg7 debugMode:(unsigned long long)arg8 scene:(unsigned long long)arg9 cpKey:(id)arg10 imageFlowStatId:(id)arg11 uniqStatId:(id)arg12 heightRange:(CDStruct_c3b9c2ee)arg13;
- (void)manualMinusRetainCount;
- (void)manualAddRetainCount;
- (unsigned int)genCoreId;
- (void)onBecomeActive;
- (void)onResignActive;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)initializeData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

