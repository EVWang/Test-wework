//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WWKCheckinPushManager : NSObject
{
}

+ (id)sharedInstance;
- (void)p_registerLocalPush:(const struct GetCheckinReminderRuleRespData *)arg1;
- (void)p_updateShieldAndSummary;
- (void)unregisterLocalPush;
- (void)updateLocalPushWithLimited:(_Bool)arg1;

@end

