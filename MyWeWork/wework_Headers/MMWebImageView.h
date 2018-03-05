//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIImage;
@protocol MMWebImageViewDelegate;

@interface MMWebImageView : UIImageView
{
    UIImage *_defaultImage;
    id <MMWebImageViewDelegate> _loadingDelegate;
}

@property(nonatomic) __weak id <MMWebImageViewDelegate> loadingDelegate; // @synthesize loadingDelegate=_loadingDelegate;
- (void).cxx_destruct;
- (id)getUrl;
- (id)getDefaultImage;
- (id)getImage;
- (void)setDefaultImage:(id)arg1;
- (void)setEmptyImageURL;
- (void)setImageURL:(id)arg1 forceUpdate:(_Bool)arg2;
- (void)setImageURL:(id)arg1;

@end

