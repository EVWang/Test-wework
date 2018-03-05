//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QMSBaseResult.h"

@class NSArray, NSString;

@interface QMSPoiData : QMSBaseResult
{
    NSString *_id_;
    NSString *_title;
    NSString *_address;
    NSString *_tel;
    NSString *_category;
    long long _type;
    NSArray *_boundary;
    CDStruct_2c43369c _location;
}

@property(retain, nonatomic) NSArray *boundary; // @synthesize boundary=_boundary;
@property(nonatomic) CDStruct_c3b9c2ee location; // @synthesize location=_location;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *tel; // @synthesize tel=_tel;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *id_; // @synthesize id_=_id_;
- (void).cxx_destruct;
- (void)fillProperiesWithDictionary:(id)arg1;

@end

