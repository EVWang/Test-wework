//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface WeAppTabItemData : NSObject
{
    UIImage *iconImg;
    UIImage *selectedIconImg;
    NSString *titleText;
    NSString *linkUrl;
}

@property(copy, nonatomic) NSString *linkUrl; // @synthesize linkUrl;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText;
@property(retain, nonatomic) UIImage *selectedIconImg; // @synthesize selectedIconImg;
@property(retain, nonatomic) UIImage *iconImg; // @synthesize iconImg;
- (void).cxx_destruct;

@end

