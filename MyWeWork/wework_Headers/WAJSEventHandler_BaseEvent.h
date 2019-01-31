//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class WAWebViewController;
@protocol WAJSEventHandlerContextDelegate;

@interface WAJSEventHandler_BaseEvent : NSObject
{
    _Bool _runInMainThread;
    _Bool _isGameApp;
    unsigned int _callbackId;
    id <WAJSEventHandlerContextDelegate> _context;
    WAWebViewController *_webviewController;
}

@property(nonatomic) _Bool isGameApp; // @synthesize isGameApp=_isGameApp;
@property(nonatomic) _Bool runInMainThread; // @synthesize runInMainThread=_runInMainThread;
@property(nonatomic) __weak WAWebViewController *webviewController; // @synthesize webviewController=_webviewController;
@property(nonatomic) __weak id <WAJSEventHandlerContextDelegate> context; // @synthesize context=_context;
@property(nonatomic) unsigned int callbackId; // @synthesize callbackId=_callbackId;
- (void).cxx_destruct;
- (void)handleJSEvent:(id)arg1;
- (id)getAppID;
- (void)endWithResult:(id)arg1;

@end
