//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportJSErrorItem : WAReportBaseItem
{
    NSString *_name;
    NSString *_desc;
    NSString *_stack;
}

@property(copy, nonatomic) NSString *stack; // @synthesize stack=_stack;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)reportString;

@end

