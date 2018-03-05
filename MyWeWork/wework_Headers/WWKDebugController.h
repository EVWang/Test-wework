//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "CLLocationManagerDelegate-Protocol.h"
#import "QMUITextViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "WWKAssetGroupsControllerDelegate-Protocol.h"
#import "WWKCommonComposeViewControllerDelegate-Protocol.h"
#import "WWKForwardingControllerDelegate-Protocol.h"
#import "WWKVideoReocrdViewControllerDeleate-Protocol.h"

@class NSArray, NSObject, NSString, WWKAlertController;

@interface WWKDebugController : UITableViewController <UIAlertViewDelegate, WWKForwardingControllerDelegate, WWKVideoReocrdViewControllerDeleate, WWKCommonComposeViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, WWKAssetGroupsControllerDelegate, CLLocationManagerDelegate, QMUITextViewDelegate>
{
    NSObject *_threadCheckGuard;
    NSArray *_cellTitleActionPairs;
    WWKAlertController *_createTeamAlertController;
    SEL _forwardingDelegateSelector;
    struct NSString *_recordLocalId;
    struct NSString *_mediaId;
    NSString *_content;
}

- (void).cxx_destruct;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingImage:(id)arg2 editingInfo:(id)arg3;
- (void)didFinishPickPhotos:(id)arg1 isSendOriginalSize:(_Bool)arg2;
- (void)_chooseImageViaAlbum;
- (void)_chooseImageViaCamera;
- (void)testTipViewCtlr;
- (void)bioassayRecordController;
- (void)bioassayController;
- (void)showScanH5ViewController;
- (void)downloadRecordFile;
- (void)uploadRecordFile;
- (void)showScanIdCameraViewController;
- (void)getLiveDetectSeq;
- (void)cleanTestData;
- (void)LiveDetectVideoVerify;
- (void)LiveDetectVideoPin;
- (void)verifyIDCard;
- (void)IDCardOCRBack;
- (void)IDCardOCRFront;
- (void)StreamJournalList;
- (void)ModifyJournal;
- (void)DeleteJournal;
- (void)QueryJournalReporter;
- (void)QueryJournalSummary;
- (void)QueryJournalDetail;
- (void)SubmitJournal;
- (void)showHUDWithMode:(long long)arg1 text:(id)arg2;
- (void)markAllReaded;
-     // Error parsing type: v36@0:8^{Message={AtomicRefCount={atomic<int>=Ai}}{WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{ObserverList<model::MessageObserver, false>={WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{vector<model::MessageObserver *, std::__1::allocator<model::MessageObserver *> >=^^{MessageObserver}^^{MessageObserver}{__compressed_pair<model::MessageObserver **, std::__1::allocator<model::MessageObserver *> >=^^{MessageObserver}}}ii}{unique_ptr<pb::Message, std::__1::default_delete<pb::Message> >={__compressed_pair<pb::Message *, std::__1::default_delete<pb::Message> >=^{Message}}}}16^{Conversation=^^?{AtomicRefCount={atomic<int>=Ai}}{WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{ObserverList<model::ConversationObserver, false>={WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{vector<model::ConversationObserver *, std::__1::allocator<model::ConversationObserver *> >=^^{ConversationObserver}^^{ConversationObserver}{__compressed_pair<model::ConversationObserver **, std::__1::allocator<model::ConversationObserver *> >=^^{ConversationObserver}}}ii}{unique_ptr<pb::Conversation, std::__1::default_delete<pb::Conversation> >={__compressed_pair<pb::Conversation *, std::__1::default_delete<pb::Conversation> >=^{Conversation}}}{vector<scoped_refptr<model::ConversationMember>, std::__1::allocator<scoped_refptr<model::ConversationMember> > >=^{scoped_refptr<model::ConversationMember>}^{scoped_refptr<model::ConversationMember>}{__compressed_pair<scoped_refptr<model::ConversationMember> *, std::__1::allocator<scoped_refptr<model::ConversationMember> > >=^{scoped_refptr<model::ConversationMember>}}}BBBBBBB{unique_ptr<std::__1::set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >, std::__1::default_delete<std::__1::set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> > > >={__compressed_pair<std::__1::set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> > *, std::__1::default_delete<std::__1::set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> > > >=^{set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >}}}{set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >={__tree<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned long long, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<unsigned long long> >=Q}}}}24B32, name: forwardingMessage:ToConversation:isSuccess:
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (int)videoReocrdControllerMaxCanRecordTimeLen:(id)arg1;
- (void)saveConvertedVideoAndSend:(id)arg1;
- (void)p_tryToConvertMovToMP4AndThenSend:(id)arg1 withPicker:(id)arg2;
- (void)videoReocrdController:(id)arg1 didFinishRecordVideo:(id)arg2;
- (void)clearIndustyInfoSwitch;
- (void)offlineOtherCorpOpen;
- (void)offlineTestSwitch;
- (void)adminAssist;
- (void)removeRTXTipsFlag;
- (void)tableViewTest;
- (void)mutiCorpPushSetting;
- (void)openInviteWeixinRoom;
- (void)selectAppContacts;
- (void)verifyRealName;
- (void)httpmockSwitch;
- (void)forumPostList;
- (void)simulateReportLocation;
- (void)noPermissionAlert;
- (void)createForum;
- (void)openVirtualCorpBBS;
- (void)openForumPostWithWrongID;
- (void)openForumPostWithID;
- (void)openForumPost;
- (void)openForumCompose;
- (void)approvalWeApp;
- (void)changeWeAppPreloadMethod;
- (void)bridgeWeAppRequest;
- (void)weappDebugMode;
- (void)closeWeApp;
- (void)openKuaidi100WeApp;
- (void)openDiDiWeApp;
- (void)openMobikeWeApp;
- (void)openMobaNewsWeApp;
- (void)openEmotionWeApp;
- (void)openCalculatorWeApp;
- (void)openOfficalAnimationDemoWeApp;
- (void)openOfficalDemoWeApp;
- (void)openMaiDanWeApp;
- (void)openMaiDanWeAppSelectContact;
- (void)openApprovalWeApp;
- (void)clearTodoDB;
- (void)sendTodoDB;
- (void)animationController;
- (void)tryButtonDidClick:(id)arg1;
- (void)detailTodoController;
- (void)composeTodoController;
- (void)viewCardWallSelect;
- (void)viewCardWallStacked;
- (void)closeCardWall;
- (void)qrCardScan;
- (void)switchCardWall;
- (void)shareCardDemo;
- (void)exchangeCardDemo;
- (void)sendApplicationDemo;
- (void)myQrCode;
- (void)getAllWxFriends;
- (void)fetchCompressedOrg;
- (void)modifyCorpMode;
- (void)manageJoinMember;
- (void)enableTonyForeignerCardMode;
- (void)openExternalContacts;
- (void)findContacts;
- (void)refreshArch;
- (void)insertAllRedPoints;
- (void)stopShitSvrPush;
- (void)autoLoginTip;
- (void)scanIntro;
- (void)openWorkDayMode;
- (void)clearCancelRelaxTime;
- (void)shareXCX;
- (void)showWWKCurrentProcessNavigationRecord;
- (void)redoSearchIndexing;
- (void)clearWebViewCrashData;
- (void)switchWebViewKernel;
- (void)transferArchOpenIds;
- (void)composeViewControllerDidCancelPublishPost:(id)arg1;
- (void)composeViewController:(id)arg1 didPublishPost:(const struct WWKCommonComposePost *)arg2;
- (void)kmReplyComment;
- (void)kmComposeAnswer;
- (void)kmComposePost;
- (void)openEnterpriseContact;
- (void)openOpenApiSentChat;
- (void)showMarkdownDemoViaUIKit;
- (void)showMarkdownDemoViaWebview;
- (void)openAPIDemoContact;
- (void)appMsgList;
- (void)openAPIDemo;
- (void)isReportWebPerfCloudSwitch;
- (void)reportWWPerf;
- (void)upgradeOpenAPI;
- (void)firstTimeSetStarContact;
- (void)PCReportAway10s;
- (void)reportStarContactUnread;
- (void)testClearNotifications;
- (void)setLittleRelaxOneMinute;
- (void)fakeVid;
- (void)newWeixinInteraction;
- (void)simulateReview;
- (void)enableDebugFunctions;
- (void)showDirectoryInfo;
- (void)showProfileConf;
- (void)showCorpConf;
- (void)showSystemConf;
- (void)ChangeVirtualCorp;
- (void)adjustUnjoinedAlertCount;
- (void)departmentFragment;
- (void)openURL;
- (void)findUser;
- (void)blockUIThread;
- (void)downsamplingImageFile;
- (void)cleanStorageTimeInterval;
- (void)resetActivesync;
- (void)crashActivesync;
- (void)resetBizMailFirstAlert;
- (void)simulateBizMail;
- (void)simulateiMail;
- (void)simulateMailApp;
- (void)enableAttendance;
- (void)permissionToCreateCorp;
- (void)setWXNeedRefresh;
- (void)setWXExpired;
- (void)changeMultiPCSwitch;
- (void)changeEnvironment;
- (void)sizeWordsWidth;
- (void)chooseLanguage;
- (void)increArchSyncEnable;
- (void)iamTony;
- (void)prepareDebuggingOverlay;
- (void)loadReveal;
- (void)globalSearchSwitch;
- (void)setGapServerIP;
- (void)cgiTcpSwitch;
- (void)searchMailOnServer;
- (void)filterTypeConfig;
- (void)defaultMailConfig;
- (void)mailProtocolTest;
- (void)MailDebugLog;
- (void)OpenCurlLog;
- (void)truncateCrashLog;
- (void)simulateLaunchCrash;
- (void)forceCrash;
- (void)resetQyhRecvMsg;
- (void)deleteContactSyncKey;
- (void)dockerList;
- (void)rebuildLocalStorage;
- (void)deleteFiles;
- (void)deleteUserData;
- (void)clearBizmailData;
- (void)clearHighMemoryCache;
- (void)clearWebViewCache;
- (void)clearMailCache;
- (void)clearImageCache;
- (void)clearImageMemoryCache;
- (void)checkThreads;
- (void)viewVidGidCorpId;
- (void)viewNetflow;
- (void)viewOSS;
- (void)viewShareExtLog;
- (void)viewLog;
- (void)testFeedsList;
- (void)testFeedsSwitch;
- (void)resetFeatureExhibition;
- (void)featureExhibition;
- (void)myCorpList;
- (void)vcardScanDuration;
- (void)vcardParseType;
- (void)useWWCamera;
- (void)voipUseCallkit;
- (void)pushKitDidRegAlert;
- (void)shareImageTotimeline;
- (void)forumFtnOpen;
- (void)divTagTest;
- (void)screenshot;
- (void)translate;
- (void)NewAppCardSwitch;
- (void)AtFlowSwitch;
- (void)loadWaterMarkSwitch;
- (void)appPageSwitch;
- (void)cardMsgTestSwitch;
- (void)scanUserMerge;
- (void)voipTestSwitch;
- (void)favCtrlShowEmotion;
- (void)emotionManage;
- (void)PVMergeTest;
- (void)hongbaoTestSwitch;
- (void)gmailLogin;
- (void)modifyMail;
- (void)countryPick;
- (void)verifyDevice;
- (void)openWeKnowLink;
- (void)p_itilHongbaoToWxShareWithContent_url:(const basic_string_a490aa4c *)arg1 content:(const basic_string_a490aa4c *)arg2 title:(const basic_string_a490aa4c *)arg3 image:(id)arg4;
- (void)itilGetRankList;
- (void)itilGetRemain;
- (void)itilAddInviteMessage;
- (void)itilHongbaoWXInvite;
- (void)pmBuyHongbao5;
- (void)pmBuyHongbao4;
- (void)pmBuyHongbao3;
- (void)pmBuyHongbao2;
- (void)pmBuyHongbao1;
- (void)corpPayQueryProjectId;
- (void)corpPayJSDoWxPay;
- (void)corpPayJSFetchOpenId;
- (void)corpPayQueryReceiptPayResult;
- (void)corpPayGetOpenIdWithVid;
- (void)corpPayPayResultController;
- (void)corpPayReceiptInfoController;
- (void)corpPayAddC2BAckMsg;
- (void)corpPayAddLocalPaymentMsg;
- (void)corpPayAddLocalWelcomeMsg;
- (void)openJSWebView;
- (void)alertSwitch1Minute;
- (void)testRemindAlert;
- (void)testMultiPstn;
- (void)showAttendaceManageInfo;
- (void)AttendanceNew133;
- (void)registeriBeaconDevice;
- (void)showAttendanceRemindInfo;
- (void)showAttendanceLocalPush;
- (void)mailSetting;
- (void)memberAnalysis;
- (void)worklogAdminExperience;
- (void)approvalListWebEntrance;
- (void)approvalAdminExperience;
- (void)worklogGenerateShareMsg;
- (void)worklogInsertAppSummary;
- (void)worklogInsertAppWelcome;
- (void)viewFavUsage;
- (void)deleteWeAppData;
- (void)deleteForumData;
- (void)sendPstnDataDB;
- (void)deletePstnData;
- (void)sendCollectionDB;
- (void)sendWorkflowStorage;
- (void)clearWorkflowCache;
- (void)deleteCollectionData;
- (void)showAttendanceURLTest;
- (void)attendanceRecord;
- (void)tcliveJoinRoom;
- (void)tcliveCreateRoom;
- (void)tcliveLoginWithUserSig;
- (void)tcliveInitILiveSDK;
- (void)tcliveFetchUserSig;
- (void)MdXcxOpen;
- (void)MdCheckEmployee;
- (void)SMSEdit;
- (void)customerEdit;
- (void)customerHistory;
- (void)rtxEnableLoginByOutlook;
- (void)rtxVoteGetRecordList;
- (void)rtxVoteGetDetailInfo;
- (void)rtxVoteMakeChoice;
- (void)rtxVoteCreate;
- (void)rtxVoteMakeChoiceUI;
- (void)rtxqrLogin;
- (void)rtxDeparmentSync;
- (void)marketAddBubbleMsg;
- (void)marketCGIGetCorpAppInfoService;
- (void)marketCGIGetAppList;
- (void)gotoMarketListController;
- (void)marketAppDetailController;
- (void)setSelectMembersMethod;
- (void)liveServicePostCastInfoSrvc;
- (void)liveServicePostLiveCommentSrvc;
- (void)liveServiceUpdateLiveDetailInfoSrvc;
- (void)liveServiceAuthLiveSDKCodeSrvc;
- (void)liveServiceGetLiveList;
- (void)liveSocks5NameCard;
- (void)liveListController;
- (void)createTeam;
- (void)pstnProfileController;
- (void)pstnAddWelcomeMsg;
- (void)pstnCorpRemainController;
- (void)onContactController;
- (void)forceLoadAllSystemContactOnceADay;
- (void)forbidLoadSysContactOnLaunch;
- (void)cancelLocalNotificationTips;
- (void)loadAvatar;
- (void)rollbackSynckey;
- (void)openAPIDebugMode;
- (void)openAPIDemoMode;
- (void)firstSyncMail;
- (void)readmailToolbar;
- (void)_sendFileMsgToConversation:(scoped_refptr_fd92d7bf)arg1;
- (void)sendFileMsg;
- (void)_sendImageMsgToConversation:(scoped_refptr_fd92d7bf)arg1;
- (void)sendImageMsg;
- (void)_sendTextMsgToConversation:(scoped_refptr_fd92d7bf)arg1;
- (void)sendTextMsg;
- (void)enableCDNUploadVideoThumbnail;
- (void)enableWWFTNUploadFile;
- (void)enableCDNUploadImage;
- (void)enableCDNUploadFile;
- (void)chooseCDNServer;
- (void)thirdEncryptSdkStatus;
- (void)thirdEncryptStatus;
- (void)thirdEncryptHalfClose;
- (void)thirdEncryptPage;
- (void)thirdEncrypt;
- (void)deleteThirdEncryptFolder;
- (void)thirdEncryptForceFailed;
- (void)receiptEntryInterval;
- (void)receiptIconFunction;
- (void)revokeAndAddReceipt;
- (void)continousAddingReceipt;
- (void)embeddedAddingReceipt;
- (void)chooseForwardFileMethod;
- (void)enablePasteImage;
- (void)sendImageWithoutSize;
- (void)chooseSendImageMethod;
- (void)chooseVoiceCodec;
- (void)typingState;
- (void)parseTextMessage;
- (void)partialMessageList;
- (void)injectJSIntoWXWebView;
- (void)deleteSyncConfigkey;
- (void)syncConfig;
- (void)gyReportTest;
- (void)enableMailListAvatar;
- (void)enableMailLocalConfig;
- (void)enableDebugNotification;
- (void)enableSupportMulitMailProtocol;
- (void)queryMailAppContacts;
- (void)openRelaxGuide;
- (void)mulDeviceOnline;
- (void)announcementList;
- (void)startWXCDraw;
- (void)forwardMessage;
- (void)tokenSwitch;
- (void)externJobEnable;
- (void)drawerInterface;
- (void)pblogOss;
- (void)sendDBPerformance;
- (void)sendTeamDB;
- (void)sendContactDB;
- (void)sendSessionDB;
- (void)sendFile:(const struct FilePath *)arg1;
- (void)encryptSessionDB;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)navigationController;
- (void)closeDidClick:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCellTitleActionPairs:(id)arg1;
- (id)init;
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;
- (_Bool)canBecomeFirstResponder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

