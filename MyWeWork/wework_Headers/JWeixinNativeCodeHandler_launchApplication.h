//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NativeCodeHandlerBase.h"

@class JWeixinCallWrapper;

@interface JWeixinNativeCodeHandler_launchApplication : NativeCodeHandlerBase
{
    JWeixinCallWrapper *_jWeixinCallWrapper;
}

+ (_Bool)requiresExplicitPermission;
- (void).cxx_destruct;
- (_Bool)isBlacklistedScheme:(id)arg1;
- (void)handleJSCallInNativeCode:(id)arg1;

@end

