//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface WWKManageSection : NSObject
{
    _Bool _isSelectAllSection;
    scoped_refptr_85c18dd7 _department;
    NSMutableArray *_users;
}

@property(retain, nonatomic) NSMutableArray *users; // @synthesize users=_users;
@property(nonatomic) scoped_refptr_85c18dd7 department; // @synthesize department=_department;
@property(nonatomic) _Bool isSelectAllSection; // @synthesize isSelectAllSection=_isSelectAllSection;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end

