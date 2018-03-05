//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XADHandle.h"

@interface XADTarSparseHandle : XADHandle
{
    XADHandle *parent;
    struct XADTarSparseRegion *regions;
    int numRegions;
    int currentRegion;
    long long currentOffset;
    long long realFileSize;
}

- (int)readAtMost:(int)arg1 toBuffer:(void *)arg2;
- (void)seekToEndOfFile;
- (void)seekToFileOffset:(long long)arg1;
- (_Bool)atEndOfFile;
- (long long)offsetInFile;
- (long long)fileSize;
- (void)setSingleEmptySparseRegion;
- (void)addFinalSparseRegionEndingAt:(long long)arg1;
- (void)addSparseRegionFrom:(long long)arg1 length:(long long)arg2;
- (int)regionIndexForOffset:(long long)arg1;
- (void)dealloc;
- (id)initAsCopyOf:(id)arg1;
- (id)initWithHandle:(id)arg1 size:(long long)arg2;

@end

