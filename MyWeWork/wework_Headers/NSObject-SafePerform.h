//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface NSObject (SafePerform)
+ (void)safeCancelPreviousPerformRequestsWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
+ (void)safeCancelPreviousPerformRequestsWithTarget:(id)arg1;
- (void)safePerformSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3;
@end

