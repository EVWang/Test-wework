//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIImage, UIImageView;

@interface WWCMROCRVCardInfo : NSObject
{
    NSString *_pinyinName;
    NSString *_pinyinCorpName;
    scoped_refptr_c7f82f9a _cppNameCard;
    NSString *_mediaID;
    NSString *_name;
    NSArray *_phoneArr;
    NSArray *_mailArr;
    NSArray *_titleArr;
    NSArray *_companyArr;
    NSArray *_addressArr;
    NSArray *_telArr;
    NSArray *_faxArr;
    NSArray *_webSiteArr;
    UIImage *_image;
    UIImageView *_imageView;
}

+ (id)fromCPPProtoCard:(const struct NameCard *)arg1;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSArray *webSiteArr; // @synthesize webSiteArr=_webSiteArr;
@property(retain, nonatomic) NSArray *faxArr; // @synthesize faxArr=_faxArr;
@property(retain, nonatomic) NSArray *telArr; // @synthesize telArr=_telArr;
@property(retain, nonatomic) NSArray *addressArr; // @synthesize addressArr=_addressArr;
@property(retain, nonatomic) NSArray *companyArr; // @synthesize companyArr=_companyArr;
@property(retain, nonatomic) NSArray *titleArr; // @synthesize titleArr=_titleArr;
@property(retain, nonatomic) NSArray *mailArr; // @synthesize mailArr=_mailArr;
@property(retain, nonatomic) NSArray *phoneArr; // @synthesize phoneArr=_phoneArr;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)hasTag;
- (void)pickLogoImage2;
- (void)pickLogoImage;
- (const scoped_refptr_c7f82f9a *)getServiceNameCard;
- (void)setServiceNameCard:(const scoped_refptr_c7f82f9a *)arg1;
- (void)p_genPinyinCorpName;
- (void)p_genPinyinName;
- (id)pinyinCorpName;
- (id)pinyinName;

@end

