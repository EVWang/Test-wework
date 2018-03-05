//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WXCPCMAudioFile : NSObject
{
    struct AudioStreamBasicDescription mDataFormat;
    struct OpaqueAudioFileID *mAudioFile;
    NSString *mFileName;
    unsigned int mCurrentPacket;
}

- (_Bool)copyForName:(id)arg1;
- (_Bool)writeBytes:(void *)arg1 len:(unsigned int)arg2;
- (_Bool)openByName:(id)arg1;
- (void)setDataFormat:(struct AudioStreamBasicDescription)arg1;
- (void)dealloc;
- (id)init;
- (void)createAudioFile_WAVE:(id)arg1;

@end

