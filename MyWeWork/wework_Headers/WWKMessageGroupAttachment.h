//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKMessageAttachment.h"

@class NSArray, NSString;

@interface WWKMessageGroupAttachment : WWKMessageAttachment
{
    NSArray *_contents;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *contents; // @synthesize contents=_contents;
- (void).cxx_destruct;
- (id)writeToDict:(id)arg1;
- (id)initWithDict:(id)arg1;
- (id)toForwardMessage:(struct ForwardMessages *)arg1;

@end

