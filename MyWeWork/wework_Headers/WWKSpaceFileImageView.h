//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NotificationProxyObserverDelegate-Protocol.h"

@class NSMutableArray, UIImageView, WWKForumPostGalleryView;

@interface WWKSpaceFileImageView : UIView <NotificationProxyObserverDelegate>
{
    struct scoped_ptr<NotificationProxyObserver> _ftn_state_observer;
    _Bool _mIsThumbDownLoadEnable;
    UIView *_mImageCliperView;
    UIImageView *_mImageView;
    WWKForumPostGalleryView *_mGalleryView;
    NSMutableArray *_mFileList;
    struct CGRect _imageRect;
}

@property(nonatomic) _Bool mIsThumbDownLoadEnable; // @synthesize mIsThumbDownLoadEnable=_mIsThumbDownLoadEnable;
@property(retain, nonatomic) NSMutableArray *mFileList; // @synthesize mFileList=_mFileList;
@property(retain, nonatomic) WWKForumPostGalleryView *mGalleryView; // @synthesize mGalleryView=_mGalleryView;
@property(retain, nonatomic) UIImageView *mImageView; // @synthesize mImageView=_mImageView;
@property(nonatomic) struct CGRect imageRect; // @synthesize imageRect=_imageRect;
@property(retain, nonatomic) UIView *mImageCliperView; // @synthesize mImageCliperView=_mImageCliperView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect)resizeThumbView:(id)arg1;
- (void)onNotification:(int)arg1 source:(const struct NotificationSource *)arg2 details:(const struct NotificationDetails *)arg3;
- (void)checkThumbFileState:(id)arg1;
- (void)p_browImageViewWithIndex:(long long)arg1 viewRect:(struct CGRect)arg2;
- (void)onBrowseMultiImagesClicked:(id)arg1;
- (void)onBrowseSingelImagesClicked:(id)arg1;
- (struct CGSize)layoutElements:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateImge:(id)arg1;
- (void)initElements;
- (void)addObservers;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

