//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface MMBizMenuInfo : NSObject
{
    unsigned int _uin;
    unsigned int _interativeMode;
    unsigned int _updateTime;
    NSMutableArray *_arrMenu;
    unsigned int _type;
}

@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSMutableArray *arrMenu; // @synthesize arrMenu=_arrMenu;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) unsigned int interactiveMode; // @synthesize interactiveMode=_interativeMode;
@property(nonatomic) unsigned int uin; // @synthesize uin=_uin;
- (void).cxx_destruct;
- (void)parseFromJsonDictionary:(id)arg1;
- (id)init;

@end

