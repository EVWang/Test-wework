//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSArray, NSString;

@interface WAStatePermissionBytes : NSObject <PBCoding>
{
    NSArray *arrStatePermissionBytes;
}

+ (void)initialize;
@property(retain, nonatomic) NSArray *arrStatePermissionBytes; // @synthesize arrStatePermissionBytes;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (const map_24f1cf24 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

