//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "AppMessageProxyObserverDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, WWKBaseAppMessageTitleView;

@interface WWKAppMessageTableViewCell : UITableViewCell <AppMessageProxyObserverDelegate>
{
    struct unique_ptr<AppMessageSmartProxyObserver, std::__1::default_delete<AppMessageSmartProxyObserver>> smart_msg_observer_;
    scoped_refptr_d3a1e30c _appMessage;
    WWKBaseAppMessageTitleView *_titleView;
    UILabel *_appLabel;
    UILabel *_timeLabel;
    UIButton *_retrivedButton;
    UIImageView *_appIconImageView;
}

@property(retain, nonatomic) UIImageView *appIconImageView; // @synthesize appIconImageView=_appIconImageView;
@property(retain, nonatomic) UIButton *retrivedButton; // @synthesize retrivedButton=_retrivedButton;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *appLabel; // @synthesize appLabel=_appLabel;
@property(retain, nonatomic) WWKBaseAppMessageTitleView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) scoped_refptr_d3a1e30c appMessage; // @synthesize appMessage=_appMessage;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)p_layoutSubViewsWithLimitWidth:(double)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)OnAppMessageUpdate:(const scoped_refptr_d3a1e30c *)arg1;
- (void)updateRetrived:(_Bool)arg1;
- (double)getHeightWithLimitWitdh:(double)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

