//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QQApiObject : NSObject
{
    int _shareDestType;
    NSString *_title;
    NSString *_description;
    unsigned long long _cflag;
}

@property(nonatomic) int shareDestType; // @synthesize shareDestType=_shareDestType;
@property(nonatomic) unsigned long long cflag; // @synthesize cflag=_cflag;
@property(retain, nonatomic) NSString *description; // @synthesize description=_description;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)dealloc;
- (id)init;

@end
