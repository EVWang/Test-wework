//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable;

@interface WWKLocale : NSObject
{
    NSArray *_managedViews;
    NSMapTable *_managedViewsMapping;
}

@property(retain, nonatomic) NSMapTable *managedViewsMapping; // @synthesize managedViewsMapping=_managedViewsMapping;
@property(retain, nonatomic) NSArray *managedViews; // @synthesize managedViews=_managedViews;
- (void).cxx_destruct;
- (id)localizedStringWithIdentifier:(id)arg1;
- (void)localeSettingDidChange:(id)arg1;
- (void)updateManagedViews;
- (void)updateManageView:(id)arg1;
- (void)addManagedView:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;

@end

