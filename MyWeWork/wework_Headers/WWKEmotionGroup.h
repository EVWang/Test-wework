//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface WWKEmotionGroup : NSObject
{
    NSString *_group_id;
    NSString *_groupiconfile_id;
    NSString *_groupiconaes_key;
    NSString *_groupicon_url;
    NSString *_group_share_image_url;
    NSString *_group_name;
    NSString *_group_share_url;
    NSMutableArray *_emotions;
}

@property(retain, nonatomic) NSMutableArray *emotions; // @synthesize emotions=_emotions;
@property(copy, nonatomic) NSString *group_share_url; // @synthesize group_share_url=_group_share_url;
@property(copy, nonatomic) NSString *group_name; // @synthesize group_name=_group_name;
@property(copy, nonatomic) NSString *group_share_image_url; // @synthesize group_share_image_url=_group_share_image_url;
@property(retain, nonatomic) NSString *groupicon_url; // @synthesize groupicon_url=_groupicon_url;
@property(retain, nonatomic) NSString *groupiconaes_key; // @synthesize groupiconaes_key=_groupiconaes_key;
@property(retain, nonatomic) NSString *groupiconfile_id; // @synthesize groupiconfile_id=_groupiconfile_id;
@property(retain, nonatomic) NSString *group_id; // @synthesize group_id=_group_id;
- (void).cxx_destruct;
- (id)init;

@end

