//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface UniversalDetector : NSObject
{
    void *detector;
    NSString *charset;
    float confidence;
    const char *lastcstring;
}

+ (id)possibleMIMECharsets;
+ (id)detector;
- (unsigned long long)encoding;
- (float)confidence;
- (id)MIMECharset;
- (_Bool)done;
- (void)reset;
- (void)analyzeBytes:(const char *)arg1 length:(int)arg2;
- (void)analyzeData:(id)arg1;
- (void)dealloc;
- (id)init;

@end
