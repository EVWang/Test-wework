//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WWKSearchAppItem : NSObject
{
    unsigned long long _type;
    NSString *_title;
    NSString *_avatar;
    NSString *_openAPIPageUrl;
    scoped_refptr_fd92d7bf _conversation;
    pair_e3a3f84c _conversation_info;
    struct ThirdApplication _thirdApp;
    struct DefaultApplication _defaultApp;
    struct WSNewCorpAppDetail _corp_app_detail;
}

@property(nonatomic) struct ThirdApplication thirdApp; // @synthesize thirdApp=_thirdApp;
@property(nonatomic) struct DefaultApplication defaultApp; // @synthesize defaultApp=_defaultApp;
@property(nonatomic) struct WSNewCorpAppDetail corp_app_detail; // @synthesize corp_app_detail=_corp_app_detail;
@property(nonatomic) pair_e3a3f84c conversation_info; // @synthesize conversation_info=_conversation_info;
@property(nonatomic) scoped_refptr_fd92d7bf conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) NSString *openAPIPageUrl; // @synthesize openAPIPageUrl=_openAPIPageUrl;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

