//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKBaseAppMessageTitleView.h"

@class NSArray, NSMutableArray;

@interface WWKLargeMPNewsAppMessageDetailView : WWKBaseAppMessageTitleView
{
    CDUnknownBlockType _onSelectMpNewsItem;
    NSMutableArray *_mutableItemViews;
    struct MpNews _mpnewsMsg;
}

+ (double)LargeRowHeight;
@property(retain, nonatomic) NSMutableArray *mutableItemViews; // @synthesize mutableItemViews=_mutableItemViews;
@property(copy, nonatomic) CDUnknownBlockType onSelectMpNewsItem; // @synthesize onSelectMpNewsItem=_onSelectMpNewsItem;
@property(nonatomic) struct MpNews mpnewsMsg; // @synthesize mpnewsMsg=_mpnewsMsg;
- (id).cxx_construct;
- (void).cxx_destruct;
- (double)getHeightWithLimitWitdh:(double)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) NSArray *itemViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

