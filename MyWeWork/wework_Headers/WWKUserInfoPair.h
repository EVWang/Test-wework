//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WWKUserInfoPair : NSObject
{
    _Bool _disableEdit;
    long long _type;
    NSString *_title;
    NSString *_content;
    scoped_refptr_e1f85e48 _user;
}

+ (id)pairWithType:(long long)arg1 title:(id)arg2 content:(id)arg3;
@property(nonatomic) scoped_refptr_e1f85e48 user; // @synthesize user=_user;
@property(nonatomic) _Bool disableEdit; // @synthesize disableEdit=_disableEdit;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

