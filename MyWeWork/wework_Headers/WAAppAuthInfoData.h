//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WAAppAuthInfoData : MMObject
{
    unsigned int _state;
    NSString *_appid;
    NSString *_scopeKey;
    NSString *_scopeDesc;
}

@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *scopeDesc; // @synthesize scopeDesc=_scopeDesc;
@property(copy, nonatomic) NSString *scopeKey; // @synthesize scopeKey=_scopeKey;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
- (void).cxx_destruct;
- (id)description;

@end

