//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKBaseAppMessageTitleView.h"

@class UIImageView, UILabel;

@interface WWKSingleMPNewsAppMessageDetailView : WWKBaseAppMessageTitleView
{
    UILabel *_titleLabel;
    UIImageView *_imageView;
    UILabel *_summaryLabel;
    double _cacheHeight;
    struct MpNews _mpnewsMsg;
    struct NewsMsg _newsMsg;
}

@property(nonatomic) double cacheHeight; // @synthesize cacheHeight=_cacheHeight;
@property(nonatomic) __weak UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) struct NewsMsg newsMsg; // @synthesize newsMsg=_newsMsg;
@property(nonatomic) struct MpNews mpnewsMsg; // @synthesize mpnewsMsg=_mpnewsMsg;
- (id).cxx_construct;
- (void).cxx_destruct;
- (double)getHeightWithLimitWitdh:(double)arg1;
- (id)initWithCoder:(id)arg1;

@end

