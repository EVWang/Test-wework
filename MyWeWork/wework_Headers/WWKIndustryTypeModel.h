//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface WWKIndustryTypeModel : NSObject
{
    struct IndustryInfo _info;
    _Bool _check;
    NSMutableArray *_child;
}

@property(retain, nonatomic) NSMutableArray *child; // @synthesize child=_child;
@property(nonatomic) _Bool check; // @synthesize check=_check;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct IndustryInfo)info;
- (void)setInfo:(const struct IndustryInfo *)arg1;
- (id)initWithInfo:(const struct IndustryInfo *)arg1;

@end

