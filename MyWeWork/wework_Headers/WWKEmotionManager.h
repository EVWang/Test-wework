//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCache, NSMutableArray;

@interface WWKEmotionManager : NSObject
{
    NSCache *_presetEmotionCache;
    NSCache *_randomEmotionCache;
    NSMutableArray *_presetEmotionCount;
    long long _randomEmotionCount;
}

+ (unsigned long long)maxCollectionEmotionCount;
+ (id)sharedManager;
@property(nonatomic) long long randomEmotionCount; // @synthesize randomEmotionCount=_randomEmotionCount;
@property(retain, nonatomic) NSMutableArray *presetEmotionCount; // @synthesize presetEmotionCount=_presetEmotionCount;
@property(retain, nonatomic) NSCache *randomEmotionCache; // @synthesize randomEmotionCache=_randomEmotionCache;
@property(retain, nonatomic) NSCache *presetEmotionCache; // @synthesize presetEmotionCache=_presetEmotionCache;
- (void).cxx_destruct;
- (id)getPresetEmotionGroupNameWithGroupId:(id)arg1;
- (id)getPresetEmotionGroupShareURLWithGroupId:(id)arg1;
- (id)getPresetEmotionGroupTabURLWithGroupId:(id)arg1;
- (_Bool)isPresetEmotionGroupValidWithGroupID:(id)arg1;
- (void)preDownEmotions;
- (_Bool)checkCollectionEmotionsExceed;
- (long long)getPresetEmotionGroupPageCountAtPageIndex:(long long)arg1;
- (long long)presetPageIndexWithPresetEmotionButtonIndex:(long long)arg1;
- (long long)presetPageCountWithPresetEmotionButtonIndex:(long long)arg1;
- (long long)presetEmotionButtonIndexWithPresetPageIndex:(long long)arg1;
- (id)getPresetEmotionsAtPageIndex:(long long)arg1;
- (void)UpdateLocalToEmotion:(id)arg1 scaleSize:(struct CGSize)arg2 isDynamic:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)isCollectionEmotionsContainImageWithMD5:(id)arg1;
- (_Bool)isCollectionEmotionsContainMessageWithAttach:(id)arg1;
- (id)getPresetEmotions;
- (id)getAllPresetEmotions;
- (id)convertPbMsgToWWKEmotion:(struct Message *)arg1;
- (id)getCustomEmotionsAtPageIndex:(long long)arg1;
- (id)getCollectionEmotionItems;
- (id)getCollectionEmotions;

@end
