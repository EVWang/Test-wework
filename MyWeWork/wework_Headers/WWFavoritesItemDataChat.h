//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWFavoritesItemData.h"

@class NSArray, NSString;

@interface WWFavoritesItemDataChat : WWFavoritesItemData
{
    _Bool _isHistoryForward;
    unsigned long long _chatByteCount;
    NSString *_from;
    NSString *_fromNoSelf;
    NSArray *_textArray;
    NSArray *_mailIDList;
    NSArray *_urlList;
    NSArray *_mailIDContentTypeArray;
    NSArray *_urlContentTypeArray;
    NSArray *_mailIDAesKeyArray;
    NSArray *_urlAesKeyArray;
    NSArray *_picThirdEncryptArray;
}

+ (void)parseTextArrayKeyToUinOrName:(id)arg1 pUin:(unsigned long long *)arg2 pName:(id *)arg3;
+ (id)genTextArrayKeyFromForwardMessage:(const struct ForwardMessage *)arg1;
@property(copy, nonatomic) NSArray *picThirdEncryptArray; // @synthesize picThirdEncryptArray=_picThirdEncryptArray;
@property(copy, nonatomic) NSArray *urlAesKeyArray; // @synthesize urlAesKeyArray=_urlAesKeyArray;
@property(copy, nonatomic) NSArray *mailIDAesKeyArray; // @synthesize mailIDAesKeyArray=_mailIDAesKeyArray;
@property(copy, nonatomic) NSArray *urlContentTypeArray; // @synthesize urlContentTypeArray=_urlContentTypeArray;
@property(copy, nonatomic) NSArray *mailIDContentTypeArray; // @synthesize mailIDContentTypeArray=_mailIDContentTypeArray;
@property(copy, nonatomic) NSArray *urlList; // @synthesize urlList=_urlList;
@property(copy, nonatomic) NSArray *mailIDList; // @synthesize mailIDList=_mailIDList;
@property(copy, nonatomic) NSArray *textArray; // @synthesize textArray=_textArray;
@property(nonatomic) _Bool isHistoryForward; // @synthesize isHistoryForward=_isHistoryForward;
@property(copy, nonatomic) NSString *fromNoSelf; // @synthesize fromNoSelf=_fromNoSelf;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
@property(nonatomic) unsigned long long chatByteCount; // @synthesize chatByteCount=_chatByteCount;
- (void).cxx_destruct;

@end

