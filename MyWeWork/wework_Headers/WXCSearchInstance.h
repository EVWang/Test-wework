//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, WXCSearchHelper;
@protocol OS_dispatch_queue, WXCSearchInstanceDelegate;

@interface WXCSearchInstance : NSObject
{
    NSObject<OS_dispatch_queue> *_searchQueue;
    WXCSearchHelper *_searchHelper;
    NSArray *_itemContacts;
    NSArray *_searchResult;
    NSString *_searchText;
    id <WXCSearchInstanceDelegate> _searchDelegate;
}

@property(nonatomic) __weak id <WXCSearchInstanceDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
- (void).cxx_destruct;
- (id)getContactFromSearchResultAtIndex:(int)arg1;
- (void)search:(id)arg1;
- (void)setSearchData:(id)arg1;
- (id)init;

@end

