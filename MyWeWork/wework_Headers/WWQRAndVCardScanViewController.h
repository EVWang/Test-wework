//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "WWKLoginConnectViewControllerDelegate-Protocol.h"
#import "WWOCRProcBaseDelegate-Protocol.h"

@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, FMOCRCameraCoverView, NSString, NSTimer, WWCMROCRMaskView, WWCMROCRProcessor, WWCMROCRScanResult, WWCMROCRToast, WWCardWallScanResultAnimationView;
@protocol WWQRAndVCardScanViewControllerDelegate;

@interface WWQRAndVCardScanViewController : UIViewController <WWOCRProcBaseDelegate, WWKLoginConnectViewControllerDelegate, AVCaptureVideoDataOutputSampleBufferDelegate, UIImagePickerControllerDelegate>
{
    unique_ptr_16662cd1 scanImage;
    struct QBar *qbarLib;
    _Bool _tryingQBar;
    struct CGRect scanRect;
    unsigned int _scanSkip;
    _Bool _slientPopWhenDisappear;
    _Bool _originalTranslucent;
    _Bool _noNeedResetNavigationBar;
    _Bool _imgScanVCard;
    AVCaptureSession *_session;
    id <WWQRAndVCardScanViewControllerDelegate> _qrScanDelegate;
    unsigned long long _qrScanMode;
    unsigned long long _qrScanType;
    CDUnknownBlockType _handler;
    WWCMROCRProcessor *_ocrProcessor;
    FMOCRCameraCoverView *_ocrCoverView;
    WWCMROCRToast *_ocrToastView;
    AVCaptureDeviceInput *_input;
    AVCaptureVideoDataOutput *_output;
    AVCaptureStillImageOutput *_stillImageOutput;
    WWCMROCRMaskView *_ocrMaskView;
    WWCardWallScanResultAnimationView *_resultAnimationView;
    NSTimer *_scanDetectRefreshTimer;
    WWCMROCRScanResult *_staticVCardScanResult;
    NSString *_staticQRScanResultStr;
    struct CGSize _cmrImgSize;
    struct CGRect _lastVCardRect;
}

@property(copy, nonatomic) NSString *staticQRScanResultStr; // @synthesize staticQRScanResultStr=_staticQRScanResultStr;
@property(retain, nonatomic) WWCMROCRScanResult *staticVCardScanResult; // @synthesize staticVCardScanResult=_staticVCardScanResult;
@property(retain, nonatomic) NSTimer *scanDetectRefreshTimer; // @synthesize scanDetectRefreshTimer=_scanDetectRefreshTimer;
@property(nonatomic) _Bool imgScanVCard; // @synthesize imgScanVCard=_imgScanVCard;
@property(nonatomic) struct CGSize cmrImgSize; // @synthesize cmrImgSize=_cmrImgSize;
@property(nonatomic) _Bool noNeedResetNavigationBar; // @synthesize noNeedResetNavigationBar=_noNeedResetNavigationBar;
@property(nonatomic) _Bool originalTranslucent; // @synthesize originalTranslucent=_originalTranslucent;
@property(retain, nonatomic) WWCardWallScanResultAnimationView *resultAnimationView; // @synthesize resultAnimationView=_resultAnimationView;
@property(retain, nonatomic) WWCMROCRMaskView *ocrMaskView; // @synthesize ocrMaskView=_ocrMaskView;
@property(retain, nonatomic) AVCaptureStillImageOutput *stillImageOutput; // @synthesize stillImageOutput=_stillImageOutput;
@property(retain, nonatomic) AVCaptureVideoDataOutput *output; // @synthesize output=_output;
@property(retain, nonatomic) AVCaptureDeviceInput *input; // @synthesize input=_input;
@property(retain, nonatomic) WWCMROCRToast *ocrToastView; // @synthesize ocrToastView=_ocrToastView;
@property(retain, nonatomic) FMOCRCameraCoverView *ocrCoverView; // @synthesize ocrCoverView=_ocrCoverView;
@property(nonatomic) struct CGRect lastVCardRect; // @synthesize lastVCardRect=_lastVCardRect;
@property(retain, nonatomic) WWCMROCRProcessor *ocrProcessor; // @synthesize ocrProcessor=_ocrProcessor;
@property(nonatomic) _Bool slientPopWhenDisappear; // @synthesize slientPopWhenDisappear=_slientPopWhenDisappear;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) unsigned long long qrScanType; // @synthesize qrScanType=_qrScanType;
@property(nonatomic) unsigned long long qrScanMode; // @synthesize qrScanMode=_qrScanMode;
@property(nonatomic) __weak id <WWQRAndVCardScanViewControllerDelegate> qrScanDelegate; // @synthesize qrScanDelegate=_qrScanDelegate;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)p_imgWithCMSampleBufferRef:(struct opaqueCMSampleBuffer *)arg1;
- (unique_ptr_16662cd1)p_cropSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromRect:(struct CGRect)arg2 outWidth:(int *)arg3 outHeight:(int *)arg4;
- (void)p_setRectOfInterest;
- (void)p_tryToSetSessionPreset:(id)arg1;
- (id)p_getNSStringFromUTF8Bytes:(const char *)arg1 LENGTH:(int)arg2;
- (void)p_imgScanVCardWithInfo:(id)arg1 andHud:(id)arg2;
- (void)p_imgScanQRWithInfo:(id)arg1 andHud:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (_Bool)p_sampleBufferForQRCode:(struct opaqueCMSampleBuffer *)arg1;
- (void)p_sampleBufferForVCard:(struct opaqueCMSampleBuffer *)arg1;
- (void)p_initImgSizeAndQRScanRectWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)ocr_onScanDetectTimer:(id)arg1;
- (void)ocrInvalidateScanDetectTimer;
- (void)ocrScheduleScanDetectTimer;
- (id)vcardResultAnimationView;
- (id)ocrStillImgOutput;
- (void)restoreNaviBar;
- (void)p_continueAllScan;
- (void)p_stopAllScan;
- (void)p_showImagePicker;
- (void)item_rightDidClick:(id)arg1;
- (void)item_leftDidClick:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)p_initUI;
- (void)p_initAVSession;
- (void)p_initQBar;
- (void)p_initLogic;
- (void)p_doClean;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;
- (double)p_areaOfCornerArr:(id)arg1;
- (void)processor:(id)arg1 wantTurnTorchLightOn:(_Bool)arg2 withCurrentBrightnessValue:(double)arg3;
- (void)processor:(id)arg1 analysisDebugWithImg1:(id)arg2 img2:(id)arg3 img3:(id)arg4 img4:(id)arg5;
- (void)processor:(id)arg1 scanUICoverProgressWithCorners:(id)arg2 imageSize:(struct CGSize)arg3 shouldUpdateCover:(_Bool)arg4 shouldClearCover:(_Bool)arg5;
- (void)processor:(id)arg1 scanPhase:(unsigned long long)arg2;
- (void)vcard_recognizeFromStaticResult:(id)arg1;
- (void)p_tonyVCardRecognizeWithResult:(id)arg1 animated:(_Bool)arg2;
- (void)p_updateVCardRectFromConerPoints:(id)arg1;
- (void)p_updateLastVCardRectFromOcrResultCornerArr:(id)arg1 srcImgSize:(struct CGSize)arg2;
- (void)p_doTakePictureAndPresentResult;
- (id)p_findCaptureConnection;
- (void)vcard_ocrScanPause:(_Bool)arg1;
- (void)vcard_processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)vcard_initUI;
- (void)vcard_updateUIWithCameraRenderView:(id)arg1 andOcrMaskView:(id)arg2;
- (void)vcard_initLogic;
- (void)showLoginConnectView;
- (void)loginConnectViewController:(id)arg1 willDismissWithResult:(unsigned long long)arg2;
- (void)doLoginConnect:(id)arg1;
- (_Bool)qr_preHandleHardCodeQRCode:(id)arg1;
- (void)qr_pushUserDetail:(id)arg1;
- (_Bool)qr_processScanResult:(id)arg1 type:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

