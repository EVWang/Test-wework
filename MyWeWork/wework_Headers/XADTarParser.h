//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XADMacArchiveParser.h"

@class NSData;

@interface XADTarParser : XADMacArchiveParser
{
    NSData *currentGlobalHeader;
}

+ (_Bool)isTarChecksumCorrect:(id)arg1 checksum:(int)arg2;
+ (unsigned long long)readOctalNumberInRangeFromBuffer:(struct _NSRange)arg1 buffer:(id)arg2;
+ (long long)octalToDecimal:(long long)arg1;
+ (long long)readNumberInRangeFromBuffer:(struct _NSRange)arg1 buffer:(id)arg2;
+ (long long)longFromCString:(char *)arg1;
+ (double)doubleFromCString:(char *)arg1;
+ (_Bool)recognizeFileWithHandle:(id)arg1 firstBytes:(id)arg2 name:(id)arg3;
+ (int)getTarType:(id)arg1;
+ (int)requiredHeaderSize;
- (id)formatName;
- (id)rawHandleForEntryWithDictionary:(id)arg1 wantChecksum:(_Bool)arg2;
- (void)parseWithSeparateMacForks;
- (void)addTarEntryWithDictionaryAndSeek:(id)arg1;
- (void)parseGnuTarHeader:(id)arg1 toDict:(id)arg2;
- (void)parseUstarTarHeader:(id)arg1 toDict:(id)arg2;
- (void)parsePaxTarHeader:(id)arg1 toDict:(id)arg2;
- (int)parseGenericTarHeader:(id)arg1 toDict:(id)arg2;
- (void)parseSparseHeadersFromData:(id)arg1 numHeaders:(int)arg2 toDict:(id)arg3;
- (void)dealloc;

@end

