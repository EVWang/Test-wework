//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "QMUIAlertActionDelegate-Protocol.h"
#import "QMUIModalPresentationContentViewControllerProtocol-Protocol.h"
#import "QMUIModalPresentationViewControllerDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, QMUIAlertAction, QMUIModalPresentationViewController, UIColor, UIControl, UILabel, UIScrollView, UIView;
@protocol QMUIAlertControllerDelegate;

@interface QMUIAlertController : UIViewController <QMUIAlertActionDelegate, QMUIModalPresentationContentViewControllerProtocol, QMUIModalPresentationViewControllerDelegate>
{
    NSString *_title;
    _Bool _needsUpdateAction;
    _Bool _needsUpdateTitle;
    _Bool _needsUpdateMessage;
    _Bool _orderActionsByAddedOrdered;
    _Bool _shouldRespondMaskViewTouch;
    _Bool _isShowing;
    double _alertContentMaximumWidth;
    UIColor *_alertSeperatorColor;
    NSDictionary *_alertTitleAttributes;
    NSDictionary *_alertMessageAttributes;
    NSDictionary *_alertButtonAttributes;
    NSDictionary *_alertButtonDisabledAttributes;
    NSDictionary *_alertCancelButtonAttributes;
    NSDictionary *_alertDestructiveButtonAttributes;
    double _alertContentCornerRadius;
    double _alertButtonHeight;
    UIColor *_alertHeaderBackgroundColor;
    UIColor *_alertButtonBackgroundColor;
    UIColor *_alertButtonHighlightBackgroundColor;
    double _alertTitleMessageSpacing;
    double _sheetContentMaximumWidth;
    UIColor *_sheetSeperatorColor;
    NSDictionary *_sheetTitleAttributes;
    NSDictionary *_sheetMessageAttributes;
    NSDictionary *_sheetButtonAttributes;
    NSDictionary *_sheetButtonDisabledAttributes;
    NSDictionary *_sheetCancelButtonAttributes;
    NSDictionary *_sheetDestructiveButtonAttributes;
    double _sheetCancelButtonMarginTop;
    double _sheetContentCornerRadius;
    double _sheetButtonHeight;
    UIColor *_sheetHeaderBackgroundColor;
    UIColor *_sheetButtonBackgroundColor;
    UIColor *_sheetButtonHighlightBackgroundColor;
    double _sheetTitleMessageSpacing;
    id <QMUIAlertControllerDelegate> _delegate;
    UIView *_customView;
    NSString *_message;
    long long _preferredStyle;
    QMUIModalPresentationViewController *_modalPresentationViewController;
    UIView *_containerView;
    UIControl *_maskView;
    UIView *_scrollWrapView;
    UIScrollView *_headerScrollView;
    UIScrollView *_buttonScrollView;
    UIView *_headerEffectView;
    UIView *_cancelButtoneEffectView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    QMUIAlertAction *_cancelAction;
    NSMutableArray *_alertActions;
    NSMutableArray *_destructiveActions;
    NSMutableArray *_alertTextFields;
    double _keyboardHeight;
    struct UIEdgeInsets _alertContentMargin;
    struct UIEdgeInsets _alertHeaderInsets;
    struct UIEdgeInsets _sheetContentMargin;
    struct UIEdgeInsets _sheetHeaderInsets;
}

+ (id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3;
+ (void)resetAppearance;
+ (id)appearance;
+ (void)initialize;
+ (_Bool)isAnyAlertControllerVisible;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) NSMutableArray *alertTextFields; // @synthesize alertTextFields=_alertTextFields;
@property(retain, nonatomic) NSMutableArray *destructiveActions; // @synthesize destructiveActions=_destructiveActions;
@property(retain, nonatomic) NSMutableArray *alertActions; // @synthesize alertActions=_alertActions;
@property(retain, nonatomic) QMUIAlertAction *cancelAction; // @synthesize cancelAction=_cancelAction;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *cancelButtoneEffectView; // @synthesize cancelButtoneEffectView=_cancelButtoneEffectView;
@property(retain, nonatomic) UIView *headerEffectView; // @synthesize headerEffectView=_headerEffectView;
@property(retain, nonatomic) UIScrollView *buttonScrollView; // @synthesize buttonScrollView=_buttonScrollView;
@property(retain, nonatomic) UIScrollView *headerScrollView; // @synthesize headerScrollView=_headerScrollView;
@property(retain, nonatomic) UIView *scrollWrapView; // @synthesize scrollWrapView=_scrollWrapView;
@property(retain, nonatomic) UIControl *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool shouldRespondMaskViewTouch; // @synthesize shouldRespondMaskViewTouch=_shouldRespondMaskViewTouch;
@property(nonatomic) _Bool orderActionsByAddedOrdered; // @synthesize orderActionsByAddedOrdered=_orderActionsByAddedOrdered;
@property(retain, nonatomic) QMUIModalPresentationViewController *modalPresentationViewController; // @synthesize modalPresentationViewController=_modalPresentationViewController;
@property(nonatomic) long long preferredStyle; // @synthesize preferredStyle=_preferredStyle;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(nonatomic) __weak id <QMUIAlertControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets sheetHeaderInsets; // @synthesize sheetHeaderInsets=_sheetHeaderInsets;
@property(nonatomic) double sheetTitleMessageSpacing; // @synthesize sheetTitleMessageSpacing=_sheetTitleMessageSpacing;
@property(retain, nonatomic) UIColor *sheetButtonHighlightBackgroundColor; // @synthesize sheetButtonHighlightBackgroundColor=_sheetButtonHighlightBackgroundColor;
@property(retain, nonatomic) UIColor *sheetButtonBackgroundColor; // @synthesize sheetButtonBackgroundColor=_sheetButtonBackgroundColor;
@property(retain, nonatomic) UIColor *sheetHeaderBackgroundColor; // @synthesize sheetHeaderBackgroundColor=_sheetHeaderBackgroundColor;
@property(nonatomic) double sheetButtonHeight; // @synthesize sheetButtonHeight=_sheetButtonHeight;
@property(nonatomic) double sheetContentCornerRadius; // @synthesize sheetContentCornerRadius=_sheetContentCornerRadius;
@property(nonatomic) double sheetCancelButtonMarginTop; // @synthesize sheetCancelButtonMarginTop=_sheetCancelButtonMarginTop;
@property(retain, nonatomic) NSDictionary *sheetDestructiveButtonAttributes; // @synthesize sheetDestructiveButtonAttributes=_sheetDestructiveButtonAttributes;
@property(retain, nonatomic) NSDictionary *sheetCancelButtonAttributes; // @synthesize sheetCancelButtonAttributes=_sheetCancelButtonAttributes;
@property(retain, nonatomic) NSDictionary *sheetButtonDisabledAttributes; // @synthesize sheetButtonDisabledAttributes=_sheetButtonDisabledAttributes;
@property(retain, nonatomic) NSDictionary *sheetButtonAttributes; // @synthesize sheetButtonAttributes=_sheetButtonAttributes;
@property(retain, nonatomic) NSDictionary *sheetMessageAttributes; // @synthesize sheetMessageAttributes=_sheetMessageAttributes;
@property(retain, nonatomic) NSDictionary *sheetTitleAttributes; // @synthesize sheetTitleAttributes=_sheetTitleAttributes;
@property(retain, nonatomic) UIColor *sheetSeperatorColor; // @synthesize sheetSeperatorColor=_sheetSeperatorColor;
@property(nonatomic) double sheetContentMaximumWidth; // @synthesize sheetContentMaximumWidth=_sheetContentMaximumWidth;
@property(nonatomic) struct UIEdgeInsets sheetContentMargin; // @synthesize sheetContentMargin=_sheetContentMargin;
@property(nonatomic) struct UIEdgeInsets alertHeaderInsets; // @synthesize alertHeaderInsets=_alertHeaderInsets;
@property(nonatomic) double alertTitleMessageSpacing; // @synthesize alertTitleMessageSpacing=_alertTitleMessageSpacing;
@property(retain, nonatomic) UIColor *alertButtonHighlightBackgroundColor; // @synthesize alertButtonHighlightBackgroundColor=_alertButtonHighlightBackgroundColor;
@property(retain, nonatomic) UIColor *alertButtonBackgroundColor; // @synthesize alertButtonBackgroundColor=_alertButtonBackgroundColor;
@property(retain, nonatomic) UIColor *alertHeaderBackgroundColor; // @synthesize alertHeaderBackgroundColor=_alertHeaderBackgroundColor;
@property(nonatomic) double alertButtonHeight; // @synthesize alertButtonHeight=_alertButtonHeight;
@property(nonatomic) double alertContentCornerRadius; // @synthesize alertContentCornerRadius=_alertContentCornerRadius;
@property(retain, nonatomic) NSDictionary *alertDestructiveButtonAttributes; // @synthesize alertDestructiveButtonAttributes=_alertDestructiveButtonAttributes;
@property(retain, nonatomic) NSDictionary *alertCancelButtonAttributes; // @synthesize alertCancelButtonAttributes=_alertCancelButtonAttributes;
@property(retain, nonatomic) NSDictionary *alertButtonDisabledAttributes; // @synthesize alertButtonDisabledAttributes=_alertButtonDisabledAttributes;
@property(retain, nonatomic) NSDictionary *alertButtonAttributes; // @synthesize alertButtonAttributes=_alertButtonAttributes;
@property(retain, nonatomic) NSDictionary *alertMessageAttributes; // @synthesize alertMessageAttributes=_alertMessageAttributes;
@property(retain, nonatomic) NSDictionary *alertTitleAttributes; // @synthesize alertTitleAttributes=_alertTitleAttributes;
@property(retain, nonatomic) UIColor *alertSeperatorColor; // @synthesize alertSeperatorColor=_alertSeperatorColor;
@property(nonatomic) double alertContentMaximumWidth; // @synthesize alertContentMaximumWidth=_alertContentMaximumWidth;
@property(nonatomic) struct UIEdgeInsets alertContentMargin; // @synthesize alertContentMargin=_alertContentMargin;
- (void).cxx_destruct;
- (void)requestHideAllModalPresentationViewController;
- (void)didClickAlertAction:(id)arg1;
- (void)handleMaskViewEvent:(id)arg1;
@property(readonly, nonatomic) NSArray *textFields;
- (void)updateAction;
@property(readonly, nonatomic) NSArray *actions;
- (void)updateMessageLabel;
- (void)updateTitleLabel;
@property(copy, nonatomic) NSString *title;
- (void)addCustomView:(id)arg1;
- (void)addTextFieldWithConfigurationHandler:(CDUnknownBlockType)arg1;
- (void)addAction:(id)arg1;
- (void)hideWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (void)customModalPresentationControllerAnimation;
- (void)initModalPresentationController;
- (id)orderedAlertActions:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3;
- (void)updateCornerRadius;
- (void)updateEffectBackgroundColor;
- (void)updateHeaderBackgrondColor;
- (void)didInitialized;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

