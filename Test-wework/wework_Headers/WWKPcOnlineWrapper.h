//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKDataWrapper.h"

@interface WWKPcOnlineWrapper : WWKDataWrapper
{
    _Bool _needRedPoint;
    _Bool _showPcOnline;
    _Bool _showTodo;
    int _deviceType;
    long long _todoCount;
}

@property(nonatomic) int deviceType; // @synthesize deviceType=_deviceType;
@property(nonatomic) _Bool showTodo; // @synthesize showTodo=_showTodo;
@property(nonatomic) _Bool showPcOnline; // @synthesize showPcOnline=_showPcOnline;
@property(nonatomic) _Bool needRedPoint; // @synthesize needRedPoint=_needRedPoint;
@property(nonatomic) long long todoCount; // @synthesize todoCount=_todoCount;
- (long long)getDisplayOrder;
- (_Bool)isEnableAction;
- (_Bool)getShield;
- (id)init;

@end

