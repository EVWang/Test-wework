//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@class NSString;

@interface WloginTlv_0x201 : WloginTlv
{
    NSString *sPlatform;
    NSString *sInstallSource;
    NSString *sAcountSys;
    NSString *sUserDef;
}

@property(copy) NSString *sUserDef; // @synthesize sUserDef;
@property(copy) NSString *sAcountSys; // @synthesize sAcountSys;
@property(copy) NSString *sInstallSource; // @synthesize sInstallSource;
@property(copy) NSString *sPlatform; // @synthesize sPlatform;
- (int)encode:(id)arg1;
- (void)dealloc;

@end

