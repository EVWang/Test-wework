//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKLocationRetrieverBaseTask.h"

@class NSMutableArray, NSTimerProxy;

@interface WWKLocationRetrieverForceTimeoutTask : WWKLocationRetrieverBaseTask
{
    NSTimerProxy *_timer;
    NSMutableArray *_locations;
    CDUnknownBlockType _firstBlock;
    double _timeout;
}

@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) CDUnknownBlockType firstBlock; // @synthesize firstBlock=_firstBlock;
@property(retain, nonatomic) NSMutableArray *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) NSTimerProxy *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)bs_mapViewDidFailByPermissionDeny:(id)arg1;
- (void)bs_mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)bs_mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)p_onTimerReached;
- (void)bs_startLocation:(_Bool)arg1;
- (id)init;

@end

