//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WWKApprovalHelper : NSObject
{
}

+ (void)refreshApprovalData;
+ (id)urlAddCorpIdAnVid:(id)arg1;
+ (id)approvalAskExpenseReson:(double)arg1 withEndTime:(double)arg2 withReasonText:(const basic_string_a490aa4c *)arg3;
+ (id)approvalAskExpenseReson:(const struct ScExpensesInfo *)arg1;
+ (id)approvalAskExpenseSum:(unsigned long long)arg1;
+ (id)approvalAskExpenseTitle:(int)arg1;
+ (id)approvalAskLeaveDateString:(double)arg1;
+ (id)approvalAskLeaveLeftTypeStr:(int)arg1;
+ (id)approvalAskLeaveLeftTitle:(const struct ScLeaveInfo *)arg1;
+ (id)approvalDateString2:(double)arg1;
+ (id)approvalDateString:(double)arg1;
+ (id)approvalAskDatetimeString:(double)arg1;
+ (id)getInnerTypeString:(id)arg1;
+ (id)convertMessageToWWKApprovalNotifyMessage:(scoped_refptr_c1fa851d)arg1;

@end

