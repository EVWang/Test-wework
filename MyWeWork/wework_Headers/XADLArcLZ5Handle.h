//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XADLZSSHandle.h"

@interface XADLArcLZ5Handle : XADLZSSHandle
{
    int flags;
    int flagbit;
}

- (int)nextLiteralOrOffset:(int *)arg1 andLength:(int *)arg2 atPosition:(long long)arg3;
- (void)resetLZSSHandle;
- (id)initWithHandle:(id)arg1 length:(long long)arg2;

@end

