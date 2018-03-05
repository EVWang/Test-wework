//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, UIImage;

@interface WWKCleanStorageItem : NSObject
{
    _Bool _removed;
    _Bool _excludeFromTotalSize;
    NSString *_key;
    NSString *_name;
    NSString *_sender;
    double _lastTime;
    unsigned long long _fileSize;
    UIImage *_icon;
    NSMutableArray *_attachs;
}

@property(readonly, nonatomic) NSMutableArray *attachs; // @synthesize attachs=_attachs;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(nonatomic) _Bool excludeFromTotalSize; // @synthesize excludeFromTotalSize=_excludeFromTotalSize;
@property(nonatomic) _Bool removed; // @synthesize removed=_removed;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
@property(copy, nonatomic) NSString *sender; // @synthesize sender=_sender;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)debugDescription;
@property(readonly, nonatomic) NSString *debugInfo;
- (id)init;

@end

