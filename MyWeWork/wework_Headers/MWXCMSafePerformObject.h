//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MWXCMObject.h"

@class NSMutableDictionary, NSRecursiveLock;

@interface MWXCMSafePerformObject : MWXCMObject
{
    NSRecursiveLock *m_lock;
    NSMutableDictionary *m_objs;
    NSMutableDictionary *m_selCancelTime;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)safeCancelPerformWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)safeCancelPerformWithTarget:(id)arg1;
- (void)doPerformSelector:(id)arg1;
- (void)safePerformSelector:(SEL)arg1 onTarget:(id)arg2 withObject:(id)arg3 afterDelay:(double)arg4;
- (id)init;

@end

