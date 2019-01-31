//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XADHandle.h"

@interface XADStreamHandle : XADHandle
{
    long long streampos;
    long long streamlength;
    _Bool needsreset;
    _Bool endofstream;
    int nextstreambyte;
    struct CSInputBuffer *input;
}

- (void)setInputBuffer:(struct CSInputBuffer *)arg1;
- (void)setStreamLength:(long long)arg1;
- (_Bool)_prepareStreamSeekTo:(long long)arg1;
- (void)endStream;
- (int)streamAtMost:(int)arg1 toBuffer:(void *)arg2;
- (void)resetStream;
- (int)readAtMost:(int)arg1 toBuffer:(void *)arg2;
- (void)seekToEndOfFile;
- (void)seekToFileOffset:(long long)arg1;
- (_Bool)atEndOfFile;
- (long long)offsetInFile;
- (long long)fileSize;
- (void)dealloc;
- (id)initAsCopyOf:(id)arg1;
- (id)initWithHandle:(id)arg1 length:(long long)arg2 bufferSize:(int)arg3;
- (id)initWithHandle:(id)arg1 bufferSize:(int)arg2;
- (id)initWithHandle:(id)arg1 length:(long long)arg2;
- (id)initWithHandle:(id)arg1;
- (id)initWithName:(id)arg1 length:(long long)arg2;
- (id)initWithName:(id)arg1;
- (_Bool)isChecksumCorrect;
- (_Bool)hasChecksum;
- (double)estimatedProgress;

@end
