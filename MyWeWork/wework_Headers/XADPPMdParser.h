//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XADArchiveParser.h"

@interface XADPPMdParser : XADArchiveParser
{
}

+ (_Bool)recognizeFileWithHandle:(id)arg1 firstBytes:(id)arg2 name:(id)arg3;
+ (int)requiredHeaderSize;
- (id)formatName;
- (id)handleForEntryWithDictionary:(id)arg1 wantChecksum:(_Bool)arg2;
- (void)parse;

@end

