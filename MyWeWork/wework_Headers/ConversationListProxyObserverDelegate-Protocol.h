//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol ConversationListProxyObserverDelegate <NSObject>

@optional
- (void)onReloadConvsProperty;
- (void)OnSyncStateChanged:(int)arg1 withOldState:(int)arg2;
- (void)OnOrderChange;
- (void)OnRemoveConversation:(const scoped_refptr_fd92d7bf *)arg1;
- (void)OnAddConversations:(const vector_8fc7f2c8 *)arg1;
- (void)OnAddConversation:(const scoped_refptr_fd92d7bf *)arg1;
@end

