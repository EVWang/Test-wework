//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XADStreamHandle.h"

@interface XADBlockStreamHandle : XADStreamHandle
{
    char *_currblock;
    long long _blockstartpos;
    int _blocklength;
    _Bool _endofblocks;
}

- (void)endBlockStream;
- (void)setBlockPointer:(char *)arg1;
- (int)produceBlockAtOffset:(long long)arg1;
- (void)resetBlockStream;
- (void)_readNextBlock;
- (int)streamAtMost:(int)arg1 toBuffer:(void *)arg2;
- (void)resetStream;
- (void)seekToFileOffset:(long long)arg1;
- (id)initAsCopyOf:(id)arg1;
- (id)initWithHandle:(id)arg1 length:(long long)arg2 bufferSize:(int)arg3;
- (id)initWithName:(id)arg1 length:(long long)arg2;

@end

