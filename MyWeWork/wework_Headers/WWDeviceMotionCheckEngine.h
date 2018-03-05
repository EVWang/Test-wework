//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CMMotionManager, NSOperationQueue;

@interface WWDeviceMotionCheckEngine : NSObject
{
    _Bool _isRunning;
    CMMotionManager *_motionMgr;
    NSOperationQueue *_accQueue;
    CDUnknownBlockType _accelerHandler;
    CDUnknownBlockType _gyroHandler;
    CDStruct_31142d93 _accInfo;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType gyroHandler; // @synthesize gyroHandler=_gyroHandler;
@property(copy, nonatomic) CDUnknownBlockType accelerHandler; // @synthesize accelerHandler=_accelerHandler;
@property(retain, nonatomic) NSOperationQueue *accQueue; // @synthesize accQueue=_accQueue;
@property(retain, nonatomic) CMMotionManager *motionMgr; // @synthesize motionMgr=_motionMgr;
@property(readonly, nonatomic) CDStruct_31142d93 accInfo; // @synthesize accInfo=_accInfo;
@property(readonly, nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)p_checkAndPostDeviceChangeWithCurrentGX:(double)arg1 GY:(double)arg2 GZ:(double)arg3;
- (void)p_initHandler;
- (unsigned long long)p_orientationWithX:(double)arg1 Y:(double)arg2;
- (unsigned long long)curDeviceTakePhotoOrientation;
- (id)init;

@end

