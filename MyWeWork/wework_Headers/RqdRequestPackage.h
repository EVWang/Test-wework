//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;
@protocol RqdObjTransToJceBufferProtocol;

@interface RqdRequestPackage : NSObject
{
    BOOL platformId;
    NSString *productId;
    NSString *bundleId;
    NSString *productVersion;
    NSString *channel;
    NSString *sdkVersion;
    int cmd;
    id <RqdObjTransToJceBufferProtocol> sBuffer;
    NSString *hardwareOs;
    NSString *model;
    NSDictionary *reserved;
    NSString *sessionId;
}

+ (id)createPackageForBlockData:(id)arg1;
+ (id)initWithData:(id)arg1 cmd:(int)arg2 sBuffer:(id)arg3;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId;
@property(retain, nonatomic) NSDictionary *reserved; // @synthesize reserved;
@property(retain, nonatomic) NSString *model; // @synthesize model;
@property(retain, nonatomic) NSString *hardwareOs; // @synthesize hardwareOs;
@property(retain, nonatomic) id <RqdObjTransToJceBufferProtocol> sBuffer; // @synthesize sBuffer;
@property(nonatomic) int cmd; // @synthesize cmd;
@property(retain, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion;
@property(retain, nonatomic) NSString *channel; // @synthesize channel;
@property(retain, nonatomic) NSString *productVersion; // @synthesize productVersion;
@property(retain, nonatomic) NSString *productId; // @synthesize productId;
@property(nonatomic) BOOL platformId; // @synthesize platformId;
- (void)dealloc;
- (void)createWUPModel:(struct RequestPkg *)arg1;

@end

