//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface MMMusicInfo : NSObject
{
    NSString *m_nsMusicID;
    NSString *m_nsTitle;
    NSString *m_nsSinger;
    NSString *m_nsEPName;
    NSString *m_nsCoverImg;
    NSString *m_nsCoverImgHD;
    NSString *m_nsLyrics;
    NSString *m_nsWebUrl;
    NSString *m_nsDataUrl;
    NSString *m_nsLowBandUrl;
    NSString *m_nsAppId;
    NSString *m_nsJSAPIWebUrl;
    NSString *m_webViewId;
    NSString *m_nsWAUsername;
    NSString *m_nsWAAppId;
    double m_nsStartTime;
    NSString *m_nsWebViewSrcId;
    _Bool m_isLocalFile;
    _Bool m_disableBanner;
    _Bool m_isSpam;
    _Bool m_isHLS;
}

@property(nonatomic) _Bool m_isHLS; // @synthesize m_isHLS;
@property(nonatomic) _Bool m_isSpam; // @synthesize m_isSpam;
@property(nonatomic) _Bool m_disableBanner; // @synthesize m_disableBanner;
@property(nonatomic) _Bool m_isLocalFile; // @synthesize m_isLocalFile;
@property(retain, nonatomic) NSString *m_nsWebViewSrcId; // @synthesize m_nsWebViewSrcId;
@property(nonatomic) double m_nsStartTime; // @synthesize m_nsStartTime;
@property(retain, nonatomic) NSString *m_nsWAAppId; // @synthesize m_nsWAAppId;
@property(retain, nonatomic) NSString *m_nsWAUsername; // @synthesize m_nsWAUsername;
@property(retain, nonatomic) NSString *m_webViewId; // @synthesize m_webViewId;
@property(retain, nonatomic) NSString *m_nsJSAPIWebUrl; // @synthesize m_nsJSAPIWebUrl;
@property(retain, nonatomic) NSString *m_nsAppId; // @synthesize m_nsAppId;
@property(retain, nonatomic) NSString *m_nsLowBandUrl; // @synthesize m_nsLowBandUrl;
@property(retain, nonatomic) NSString *m_nsDataUrl; // @synthesize m_nsDataUrl;
@property(retain, nonatomic) NSString *m_nsWebUrl; // @synthesize m_nsWebUrl;
@property(retain, nonatomic) NSString *m_nsLyrics; // @synthesize m_nsLyrics;
@property(retain, nonatomic) NSString *m_nsCoverImgHD; // @synthesize m_nsCoverImgHD;
@property(retain, nonatomic) NSString *m_nsCoverImg; // @synthesize m_nsCoverImg;
@property(retain, nonatomic) NSString *m_nsEPName; // @synthesize m_nsEPName;
@property(retain, nonatomic) NSString *m_nsSinger; // @synthesize m_nsSinger;
@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle;
@property(retain, nonatomic) NSString *m_nsMusicID; // @synthesize m_nsMusicID;
- (void).cxx_destruct;
- (_Bool)isLyricsEmpty;
- (_Bool)isMusicUrlEmpty;
- (_Bool)isShakeOversea;
- (_Bool)isQQMusic;
- (id)init;

@end

