//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKApiHandler.h"

@class NSString, WWKBaseReq;

@interface WWKSDKApiHandler : WWKApiHandler
{
    WWKBaseReq *_req;
}

+ (id)reqtypes;
@property(retain, nonatomic) WWKBaseReq *req; // @synthesize req=_req;
- (void).cxx_destruct;
- (void)finishWithResponse:(id)arg1;
- (void)finishWithErrCode:(int)arg1 errStr:(id)arg2;
@property(readonly, nonatomic) float version;
@property(readonly, nonatomic) NSString *agentID;
@property(readonly, nonatomic) NSString *corpID;
@property(readonly, nonatomic) NSString *appID;
- (id)initWithURL:(id)arg1 req:(id)arg2 sourceApplicationInfo:(id)arg3;
- (id)initWithURL:(id)arg1 req:(id)arg2;

@end

