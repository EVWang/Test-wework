//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString;

@interface CAppObserverCenter : MMService <MMService>
{
    NSMutableDictionary *m_eventObserverDic;
    NSMutableDictionary *m_messageObserverDic;
    NSMutableDictionary *m_pbEventObserverDic;
    NSMutableDictionary *m_observer2EventDict;
    NSMutableDictionary *m_observer2MessageDict;
    NSMutableDictionary *m_observer2PbEventDict;
}

@property(readonly, nonatomic) NSMutableDictionary *m_messageObserverDic; // @synthesize m_messageObserverDic;
- (void).cxx_destruct;
- (void)NotifyFromMainCtrl:(id)arg1 Event:(unsigned int)arg2;
- (void)NotifyFromMainCtrl:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)removeAllPBEventObserverListItem;
- (void)removePBEventObserverListItemByObject:(id)arg1;
- (void)removePBEventObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
- (void)addPBEventObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
- (void)removeAllMessageObserverListItem;
- (void)removeMessageObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
- (void)removeMessageObserverListItemByObject:(id)arg1;
- (void)addMessageObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
- (void)removeAllEventObserverListItem;
- (void)removeEventObserverListItemByObject:(id)arg1;
- (void)removeEventObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
- (void)addEventObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
- (void)removeObserverObject:(id)arg1 event2Observer:(id)arg2 observer2Event:(id)arg3;
- (void)removeObserverForEventOrMsg:(unsigned int)arg1 observer:(id)arg2 event2Observer:(id)arg3 observer2Event:(id)arg4;
- (void)addObserverForEventOrMsg:(unsigned int)arg1 observer:(id)arg2 event2Observer:(id)arg3 observer2Event:(id)arg4;
- (id)observerKey:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

