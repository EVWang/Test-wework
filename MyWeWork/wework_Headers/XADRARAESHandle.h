//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XADBlockStreamHandle.h"

@class XADHandle;

@interface XADRARAESHandle : XADBlockStreamHandle
{
    XADHandle *parent;
    long long startoffs;
    CDStruct_6d82dd7c aes;
    unsigned char iv[16];
    unsigned char block[16];
    unsigned char buffer[65536];
}

+ (id)keyForPassword:(id)arg1 salt:(id)arg2 brokenHash:(_Bool)arg3;
- (int)produceBlockAtOffset:(long long)arg1;
- (void)resetBlockStream;
- (void)dealloc;
- (id)initWithHandle:(id)arg1 length:(long long)arg2 key:(id)arg3;
- (id)initWithHandle:(id)arg1 key:(id)arg2;

@end

