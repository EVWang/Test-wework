//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol CloudDiskProxyObserverDelegate
- (void)OnCloudDiskObjectDeleted:(const vector_36fe4106 *)arg1;
- (void)onFinished:(_Bool)arg1 withOriginalObject:(const shared_ptr_299d422b *)arg2 errCode:(int)arg3 updateObj:(const shared_ptr_299d422b *)arg4;
- (void)onProgressChanged:(_Bool)arg1 withOriginalObject:(const shared_ptr_299d422b *)arg2 withTotalSize:(unsigned long long)arg3 withCurrentSize:(unsigned long long)arg4;
- (void)onStart:(_Bool)arg1 withOriginalObject:(const shared_ptr_299d422b *)arg2 withTotalSize:(unsigned long long)arg3;
- (void)OnGetCloudDiskFolderListFailed:(basic_string_a490aa4c *)arg1 errorcode:(int)arg2;
- (void)OnCloudDiskObjectsUpdatedForForldId:(basic_string_a490aa4c *)arg1;
@end

