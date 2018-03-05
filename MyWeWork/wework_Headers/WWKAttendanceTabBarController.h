//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import "AttendanceServiceObserverDelegate-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"

@class NSString, UIView;

@interface WWKAttendanceTabBarController : UITabBarController <UITabBarControllerDelegate, AttendanceServiceObserverDelegate>
{
    struct AttendanceServiceProxyObserver *_proxyObserver;
    _Bool _isFromDemo;
    UIView *_bubbleMaskView;
    long long _fromType;
}

@property(nonatomic) long long fromType; // @synthesize fromType=_fromType;
@property(nonatomic) _Bool isFromDemo; // @synthesize isFromDemo=_isFromDemo;
@property(retain, nonatomic) UIView *bubbleMaskView; // @synthesize bubbleMaskView=_bubbleMaskView;
- (void).cxx_destruct;
- (void)OnRamdonCheckDidMaked:(scoped_refptr_e21d2ae3)arg1 errorCode:(int)arg2;
- (void)OnBinaryCheckDidMaked:(scoped_refptr_e21d2ae3)arg1 errorCode:(int)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (_Bool)p_isBubbleMaskExist;
- (void)p_dissmissBubbleMaskView;
- (void)p_showStatisticsBubbleHintView;
- (id)backButtonTitle;
- (void)viewDidLoad;
- (id)initWithFromType:(long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

