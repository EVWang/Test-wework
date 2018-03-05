//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKApprovalUIWebViewController.h"

#import "UIWebViewDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WKScriptMessageHandler-Protocol.h"

@class JWeixinOpenAPILogicImpl, NSMutableArray, NSMutableDictionary, NSSet, NSString, UILongPressGestureRecognizer, WWKApiSSOHandler, WWKWebBannerView, WebviewJSVoiceHelper;
@protocol WWKWXWebViewControllerDelegate;

@interface WWKWXWebViewController : WWKApprovalUIWebViewController <UIWebViewDelegate, WKNavigationDelegate, WKScriptMessageHandler>
{
    _Bool _hasShowContinueVisit;
    unsigned int _perfWebType;
    unsigned int _finishNavigationTime;
    JWeixinOpenAPILogicImpl *_jWeixinOpenAPILogicImpl;
    WebviewJSVoiceHelper *_voiceHelper;
    NSString *_currentVisitURL;
    long long _shareType;
    long long _webSourceType;
    id <WWKWXWebViewControllerDelegate> _delegate;
    unsigned long long _gidWebView_vid;
    NSMutableDictionary *_cachedVerifiedApiDict;
    WWKWebBannerView *_bannerView;
    unsigned long long _navigatorUserAgentState;
    NSString *_thirdAppSSOSchema;
    NSString *_thirdAppID;
    WWKApiSSOHandler *_sso;
    NSString *_lastMainDocumentURL;
    NSString *_validOAuth2URL;
    NSMutableArray *_lastUserActionURLs;
    double _lastExchangeStTime;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    NSString *_updateStHost;
}

@property(nonatomic) unsigned int finishNavigationTime; // @synthesize finishNavigationTime=_finishNavigationTime;
@property(copy, nonatomic) NSString *updateStHost; // @synthesize updateStHost=_updateStHost;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(nonatomic) double lastExchangeStTime; // @synthesize lastExchangeStTime=_lastExchangeStTime;
@property(retain, nonatomic) NSMutableArray *lastUserActionURLs; // @synthesize lastUserActionURLs=_lastUserActionURLs;
@property(retain, nonatomic) NSString *validOAuth2URL; // @synthesize validOAuth2URL=_validOAuth2URL;
@property(retain, nonatomic) NSString *lastMainDocumentURL; // @synthesize lastMainDocumentURL=_lastMainDocumentURL;
@property(retain, nonatomic) WWKApiSSOHandler *sso; // @synthesize sso=_sso;
@property(retain, nonatomic) NSString *thirdAppID; // @synthesize thirdAppID=_thirdAppID;
@property(retain, nonatomic) NSString *thirdAppSSOSchema; // @synthesize thirdAppSSOSchema=_thirdAppSSOSchema;
@property(nonatomic) unsigned long long navigatorUserAgentState; // @synthesize navigatorUserAgentState=_navigatorUserAgentState;
@property(nonatomic) _Bool hasShowContinueVisit; // @synthesize hasShowContinueVisit=_hasShowContinueVisit;
@property(retain, nonatomic) WWKWebBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) NSMutableDictionary *cachedVerifiedApiDict; // @synthesize cachedVerifiedApiDict=_cachedVerifiedApiDict;
@property(nonatomic) unsigned int perfWebType; // @synthesize perfWebType=_perfWebType;
@property(nonatomic) unsigned long long gidWebView_vid; // @synthesize gidWebView_vid=_gidWebView_vid;
@property(nonatomic) __weak id <WWKWXWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long webSourceType; // @synthesize webSourceType=_webSourceType;
@property(nonatomic) long long shareType; // @synthesize shareType=_shareType;
@property(copy, nonatomic) NSString *currentVisitURL; // @synthesize currentVisitURL=_currentVisitURL;
@property(readonly, nonatomic) WebviewJSVoiceHelper *voiceHelper; // @synthesize voiceHelper=_voiceHelper;
@property(retain, nonatomic) JWeixinOpenAPILogicImpl *jWeixinOpenAPILogicImpl; // @synthesize jWeixinOpenAPILogicImpl=_jWeixinOpenAPILogicImpl;
- (void).cxx_destruct;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (unsigned long long)fetchVID;
- (_Bool)redirectWechat:(id)arg1;
- (_Bool)ssoLoginButtonTouched:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)setWebSourceType:(long long)arg1 withSchema:(id)arg2 withAppID:(id)arg3 withHandler:(id)arg4;
- (void)forSSOLeftButton;
- (void)onRefreshSSO:(id)arg1;
- (void)onCancelThirdAppSSO:(id)arg1;
- (_Bool)doOAuth2RefreshToThridPartyWeb:(int)arg1 resp:(const struct CheckOAuthRsp *)arg2 continueVisitRequest:(id)arg3;
- (_Bool)doOAuth2RefreshToFailTipsWeb:(int)arg1 resp:(const struct CheckOAuthRsp *)arg2 mainDocumentUrl:(id)arg3;
- (_Bool)doOAuth2RefreshNavigationWithWechatUA:(int)arg1 resp:(const struct CheckOAuthRsp *)arg2 origUrl:(id)arg3;
- (void)onHistoryAPIMayChangeMainDocumentURL:(id)arg1;
- (_Bool)exchangeSTForRequest:(id)arg1 withWorkWechatHost:(const basic_string_a490aa4c *)arg2 withoutOAuthHost:(_Bool)arg3;
- (void)recordUserAction:(id)arg1 navigationType:(long long)arg2;
- (_Bool)isValidOAuth2RedirectedURL:(id)arg1;
- (id)isValidMainDocumentURL:(id)arg1;
- (_Bool)isTencentOANeedOAuth2:(id)arg1;
- (_Bool)doWWKWXWebViewControllerDelegate:(id)arg1;
- (void)p_handleCheckAuthFail:(int)arg1 AndErrorMsg:(basic_string_a490aa4c)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)getWebViewController;
- (id)willSendRequest:(id)arg1 redirectResponse:(id)arg2;
- (void)injectWechatRedirectJavaScript:(id)arg1;
- (void)evaluationExtraJavaScript;
- (void)webViewDidLongPress:(id)arg1;
- (id)defaultShareParams;
- (_Bool)isValidForwardMessageInOpenAPI;
- (_Bool)isValidToShareTimelineInOpenAPI;
- (_Bool)isValidToShareWechatInOpenAPI;
- (void)p_actionCollect;
- (void)forwardDidClick;
- (void)forwardDidClickWithJSSDKParams:(id)arg1;
- (void)shareToTimelineDidClick;
- (void)shareToWechatDidClick;
- (void)shareToWechatDidClickWithJSSDKParams:(id)arg1;
- (void)setCachedVerifiedApiList:(id)arg1 forURL:(id)arg2;
- (id)cachedVerifiedApiListForURL:(id)arg1;
- (void)doReturn;
- (void)onReturn;
- (void)reload;
- (void)loadRequest:(id)arg1;
- (void)loadRequest:(id)arg1 exchangeST:(long long)arg2 extraQueryItems:(id)arg3;
- (void)loadRequest:(id)arg1 withVid:(unsigned long long)arg2 andSt:(id)arg3 extraQueryItems:(id)arg4;
- (void)loadRequest:(id)arg1 exchangeST:(long long)arg2;
- (void)loadRequest:(id)arg1 withVidAndSt:(id)arg2 extraQueryItems:(id)arg3;
- (void)loadRequest:(id)arg1 extraQueryItems:(id)arg2;
- (_Bool)showsMenuAction:(id)arg1;
- (id)navigatorUserAgent;
- (id)wxworkUserAgent;
- (void)viewWillLayoutSubviews;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initParam;
- (id)initWithURL:(id)arg1 withAppID:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(copy, nonatomic) NSSet *blacklistMenuItems;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

