//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CloudDiskProxyObserverDelegate-Protocol.h"

@interface WEWCloudDiskService : NSObject <CloudDiskProxyObserverDelegate>
{
    struct CloudDiskLogicService *_cloudDiskLogicService;
    struct shared_ptr<CloudDiskProxyObserver> _observer;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onFinished:(_Bool)arg1 withOriginalObject:(const shared_ptr_299d422b *)arg2 errCode:(int)arg3 updateObj:(const shared_ptr_299d422b *)arg4;
- (void)onProgressChanged:(_Bool)arg1 withOriginalObject:(const shared_ptr_299d422b *)arg2 withTotalSize:(unsigned long long)arg3 withCurrentSize:(unsigned long long)arg4;
- (void)onStart:(_Bool)arg1 withOriginalObject:(const shared_ptr_299d422b *)arg2 withTotalSize:(unsigned long long)arg3;
- (void)OnGetCloudDiskFolderListFailed:(basic_string_a490aa4c *)arg1 errorcode:(int)arg2;
- (void)OnCloudDiskObjectsUpdatedForForldId:(basic_string_a490aa4c *)arg1;
- (void)OnCloudDiskObjectDeleted:(const vector_36fe4106 *)arg1;
- (void)setFolderListSortType:(_Bool)arg1 sortType:(unsigned long long)arg2;
- (unsigned long long)getFolderListSortType:(_Bool)arg1;
- (void)resetObjectId:(id)arg1 FilePath:(id)arg2;
- (_Bool)getAllDownloadedList:(CDUnknownBlockType)arg1;
- (_Bool)getCorpCloudSettingInfo:(_Bool)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)getObjectInfoFromDbById:(id)arg1 withObjectId:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)syncGetObjectInfoByObjectId:(id)arg1 withObjectId:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)clearObjectSearchCache;
- (void)searchFolder:(id)arg1 withKeywords:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (_Bool)getForwardMessageFromObject:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (_Bool)saveCloudDiskFileToFavorite:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (_Bool)HandleFeedLikeOnCloudDiskObject:(id)arg1 likeOpMode:(unsigned long long)arg2 withCallback:(CDUnknownBlockType)arg3;
- (_Bool)DeleteCommentOfCloudDiskObject:(id)arg1 commentId:(unsigned long long)arg2 withCallback:(CDUnknownBlockType)arg3;
- (_Bool)addCommentToCloudDiskObject:(id)arg1 commentInfo:(id)arg2 isFeedsMode:(_Bool)arg3 withCallback:(CDUnknownBlockType)arg4;
- (void)cancelUpload:(id)arg1;
- (void)abortUpload:(id)arg1;
- (void)abortDownload:(id)arg1;
- (void)getCommentsOfDiskFileObject:(id)arg1 lastCommnetId:(unsigned long long)arg2 limit:(unsigned long long)arg3 lastCommentTime:(id)arg4 withCallback:(CDUnknownBlockType)arg5;
- (_Bool)downloadFile:(id)arg1;
- (_Bool)uploadFileToFolderByMessage:(id)arg1 toFolder:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (_Bool)reUploadFileToFolder:(id)arg1 toFolder:(id)arg2 isAutoReUpload:(_Bool)arg3 withCallback:(CDUnknownBlockType)arg4;
- (_Bool)uploadFileToFolder:(id)arg1 toFolder:(id)arg2 defaultFileName:(id)arg3 withCallback:(CDUnknownBlockType)arg4;
- (_Bool)modifyCloudDiskObject:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (_Bool)getLastFeedSelectedObject:(CDUnknownBlockType)arg1;
- (_Bool)getFeedList:(unsigned long long)arg1 fetchNum:(int)arg2 isLater:(_Bool)arg3 isAutoComplete:(_Bool)arg4 andCallback:(CDUnknownBlockType)arg5;
- (_Bool)createCloudDiskFeed:(id)arg1 withTopFolderId:(id)arg2 withFileList:(struct NSArray *)arg3 andCallback:(CDUnknownBlockType)arg4;
- (_Bool)createCloudDiskFolder:(id)arg1 withTopFolderId:(id)arg2 withParentFolderId:(id)arg3 withCloudObjectAcl:(id)arg4 andCallback:(CDUnknownBlockType)arg5;
- (void)getCloudDiskObjectEntries:(id)arg1 forldId:(id)arg2 withSortType:(unsigned long long)arg3 isFromNet:(_Bool)arg4 dataCallback:(CDUnknownBlockType)arg5;
- (void)releaseMemeryCache;
- (void)dealloc;
- (void)updateLogicService;

@end

