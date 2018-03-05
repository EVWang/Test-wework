//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKAttendanceCheckCommonViewController.h"

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "WWKAssetGroupsControllerDelegate-Protocol.h"
#import "WWKMultiImageBrowseViewControllerDelegate-Protocol.h"

@class NSString;

@interface WWKAttendanceRamdonCheckViewController : WWKAttendanceCheckCommonViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, WWKAssetGroupsControllerDelegate, WWKMultiImageBrowseViewControllerDelegate>
{
    struct unique_ptr<ww_attendance::CacheLocationInfo, std::__1::default_delete<ww_attendance::CacheLocationInfo>> current_location_;
    struct unique_ptr<ClosureThrottling<std::__1::basic_string<char>>, std::__1::default_delete<ClosureThrottling<std::__1::basic_string<char>>>> throttling_ptr_;
    CDUnknownBlockType _imageResultBlock;
    CDUnknownBlockType _imageCancelBlock;
}

@property(copy, nonatomic) CDUnknownBlockType imageCancelBlock; // @synthesize imageCancelBlock=_imageCancelBlock;
@property(copy, nonatomic) CDUnknownBlockType imageResultBlock; // @synthesize imageResultBlock=_imageResultBlock;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cm_handleUpdateLocations:(id)arg1;
- (void)cm_finishLocationTask:(_Bool)arg1 AndDataTask:(_Bool)arg2;
- (void)cm_handleClickCheckinButton;
- (void)cm_handleUpdateLocationFailed;
- (void)fetchPOIInfoWithLocationResult:(unsigned long long)arg1 locations:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)p_makeCheck:(const scoped_refptr_e21d2ae3 *)arg1;
- (scoped_refptr_e21d2ae3)p_prepareCheckinData;
- (void)p_openCamera:(scoped_refptr_e21d2ae3)arg1;
- (_Bool)p_currentLocationNeedUpdateByAutoLocation:(id)arg1;
- (void)p_displayLocation:(struct CacheLocationInfo *)arg1;
- (void)p_handleMakeCheckIn:(int)arg1 attendance:(scoped_refptr_e21d2ae3)arg2;
- (void)p_updateUI;
- (void)p_checkShowWifiTips;
- (void)p_didClickReloadLocation:(id)arg1;
- (unsigned long long)p_todayRandomCount:(const list_1084d68b *)arg1;
- (struct CacheLocationInfo)p_targetHistoryLocation:(id)arg1;
- (struct CacheLocationInfo)p_targetOutWhiteLocation:(id)arg1;
- (void)p_handleAdditionImageAndTextWithPhotoArray:(id)arg1 andTextnote:(id)arg2;
- (void)p_didClickAddAddition;
- (void)p_didClickShowAddition;
- (void)p_showAdditionAnimation;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

