//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol QMUIHelperDelegate;

@interface QMUIHelper : NSObject
{
    id <QMUIHelperDelegate> _helperDelegate;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
+ (void)staticTableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 withDataSource:(id)arg3;
+ (id)staticTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 withDataSource:(id)arg3;
+ (id)staticTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ofClass:(Class)arg3 withDataSource:(id)arg4;
+ (id)staticTableViewReuseIdentifierAtIndexPath:(id)arg1 withDataSource:(id)arg2;
+ (id)staticTableCellDataInDataSource:(id)arg1 withIndexPath:(id)arg2;
+ (id)parseBundleName:(id)arg1;
+ (id)imageInBundle:(id)arg1 withName:(id)arg2;
+ (id)imageWithName:(id)arg1;
+ (id)resourcesBundleWithName:(id)arg1;
+ (id)resourcesBundle;
+ (double)heightForDynamicTypeCell:(id)arg1;
+ (id)preferredContentSizeLevel;
+ (unsigned long long)keyboardAnimationOptionsWithNotification:(id)arg1;
+ (long long)keyboardAnimationCurveWithNotification:(id)arg1;
+ (double)keyboardAnimationDurationWithNotification:(id)arg1;
+ (double)keyboardHeightWithNotification:(id)arg1 inView:(id)arg2;
+ (double)keyboardHeightWithNotification:(id)arg1;
+ (struct CGRect)keyboardRectWithNotification:(id)arg1;
+ (double)lastKeyboardHeightInApplicationWindowWhenVisible;
+ (_Bool)isKeyboardVisible;
+ (void)initialize;
+ (unsigned int)categoryForLowVersionWithCategory:(id)arg1;
+ (void)setAudioSessionCategory:(id)arg1;
+ (void)redirectAudioRouteWithSpeaker:(_Bool)arg1 temporary:(_Bool)arg2;
+ (_Bool)inspectContextIfInvalidatedInReleaseMode:(struct CGContext *)arg1;
+ (void)inspectContextIfInvalidatedInDebugMode:(struct CGContext *)arg1;
+ (void)inspectContextSize:(struct CGSize)arg1;
+ (double)pixelOne;
+ (_Bool)isHighPerformanceDevice;
+ (struct CGSize)screenSizeFor35Inch;
+ (struct CGSize)screenSizeFor40Inch;
+ (struct CGSize)screenSizeFor47Inch;
+ (struct CGSize)screenSizeFor55Inch;
+ (_Bool)is35InchScreen;
+ (_Bool)is40InchScreen;
+ (_Bool)is47InchScreen;
+ (_Bool)is55InchScreen;
+ (_Bool)isSimulator;
+ (_Bool)isIPhone;
+ (_Bool)isIPod;
+ (_Bool)isIPadPro;
+ (_Bool)isIPad;
+ (struct CGAffineTransform)transformWithInterfaceOrientation:(long long)arg1;
+ (struct CGAffineTransform)transformForCurrentInterfaceOrientation;
+ (double)angleForTransformWithInterfaceOrientation:(long long)arg1;
+ (id)visibleViewController;
+ (void)resetDimmedApplicationWindow;
+ (void)dimmedApplicationWindow;
+ (void)renderStatusBarStyleLight;
+ (void)renderStatusBarStyleDark;
+ (void)actionSpringAnimationForView:(id)arg1;
@property(nonatomic) __weak id <QMUIHelperDelegate> helperDelegate; // @synthesize helperDelegate=_helperDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (double)lastKeyboardHeight;
- (void)setLastKeyboardHeight:(double)arg1;
- (_Bool)isKeyboardVisible;
- (void)setKeyboardVisible:(_Bool)arg1;
- (void)handleKeyboardWillHide:(id)arg1;
- (void)handleKeyboardWillShow:(id)arg1;
- (void)printLogWithCalledFunction:(const char *)arg1 log:(id)arg2;

@end

