//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QRCodeCmd.h"

@class NSData, NSMutableDictionary, NSString;

@interface QRCodeCmd_0x14 : QRCodeCmd
{
    NSString *reserved;
    unsigned int dwAppid;
    NSData *qrCodeSig;
    unsigned char cLoginSigType;
    NSData *clientSt;
    unsigned long long ddwUin;
    NSMutableDictionary *reqTlvDataDic;
    unsigned int dwStTime;
    NSString *appName;
    NSString *errMsg;
}

@property(copy) NSString *errMsg; // @synthesize errMsg;
@property(copy) NSString *appName; // @synthesize appName;
@property unsigned int dwStTime; // @synthesize dwStTime;
@property unsigned long long ddwUin; // @synthesize ddwUin;
@property(retain) NSData *clientSt; // @synthesize clientSt;
@property(copy) NSData *qrCodeSig; // @synthesize qrCodeSig;
@property(copy) NSString *reserved; // @synthesize reserved;
@property unsigned int dwAppid; // @synthesize dwAppid;
- (void)setTlvDic:(id)arg1;
- (void)setTlv:(unsigned short)arg1 andData:(id)arg2;
- (id)initMemUserAppidSig;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
- (int)encode:(id)arg1;
- (void)dealloc;
- (id)init;

@end

