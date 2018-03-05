//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface WATaskInfo : MMObject <PBCoding>
{
    _Bool bIsStackTask;
    unsigned int uiDebugModeType;
    NSString *appID;
    NSString *appName;
    NSString *username;
    NSString *headImgUrl;
}

+ (void)initialize;
@property(nonatomic) unsigned int uiDebugModeType; // @synthesize uiDebugModeType;
@property(nonatomic) _Bool bIsStackTask; // @synthesize bIsStackTask;
@property(copy, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl;
@property(copy, nonatomic) NSString *username; // @synthesize username;
@property(copy, nonatomic) NSString *appName; // @synthesize appName;
@property(copy, nonatomic) NSString *appID; // @synthesize appID;
- (void).cxx_destruct;
- (const map_24f1cf24 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

