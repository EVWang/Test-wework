//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WAWebSocketTaskDelegate-Protocol.h"

@class NSMutableArray, NSString, WAWebSocketConfig;
@protocol OS_dispatch_queue, WAWebSocketHandlerDelegate;

@interface WAWebSocketHandler : NSObject <WAWebSocketTaskDelegate>
{
    NSString *_appID;
    NSObject<OS_dispatch_queue> *_workerQueue;
    WAWebSocketConfig *_webSocketConfig;
    NSMutableArray *_arrTask;
    id <WAWebSocketHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <WAWebSocketHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)webSocketTaskDidEnd:(id)arg1;
- (void)openSocketWithCompatibleSingleConnection:(_Bool)arg1 taskID:(id)arg2 url:(id)arg3 httpHeaders:(id)arg4 subProtocols:(id)arg5;
- (id)genNewSocketTaskID;
- (void)removeAllTask;
- (void)removeTask:(id)arg1;
- (void)addTask:(id)arg1;
- (id)getAllTask;
- (id)getTaskWithTaskID:(id)arg1;
- (id)getCompatibleSingleConnectionTask;
- (unsigned long long)getTaskCount;
- (_Bool)isReachMaxConcurrentCount;
- (void)closeAllTaskAndReleaseImmediately;
- (void)closeAllTaskWithReason:(id)arg1;
- (void)sendData:(id)arg1 withCompatibleSingleConnection:(_Bool)arg2 taskID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendString:(id)arg1 withCompatibleSingleConnection:(_Bool)arg2 taskID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)closeWithCompatibleSingleConnection:(_Bool)arg1 taskID:(id)arg2 code:(long long)arg3 reason:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)openWithCompatibleSingleConnection:(_Bool)arg1 taskID:(id)arg2 url:(id)arg3 httpHeaders:(id)arg4 isIgnoreCheckDomain:(_Bool)arg5 subProtocols:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)dealloc;
- (id)initWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 workerQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

