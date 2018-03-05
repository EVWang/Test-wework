//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ForwardMessageLogicController, NSString, UIViewController, WAAppMsgItem;

@protocol ForwardMessageLogicDelegate <NSObject>
- (UIViewController *)getCurrentViewController;

@optional
- (void)OnForwardWeAppMessageSend:(NSString *)arg1 appMsgItem:(WAAppMsgItem *)arg2;
- (void)OnForwardMessageStayAtWeChat:(ForwardMessageLogicController *)arg1;
- (_Bool)shouldShowSendSuccessView:(ForwardMessageLogicController *)arg1;
- (void)OnForwardMessageSelectSession:(ForwardMessageLogicController *)arg1;
- (void)OnForwardMessageBackToApp:(ForwardMessageLogicController *)arg1;
- (void)OnForwardMessageException:(ForwardMessageLogicController *)arg1;
- (void)OnForwardMessageCancel:(ForwardMessageLogicController *)arg1;
- (void)OnForwardMessageSend:(ForwardMessageLogicController *)arg1;
- (void)OnForwardMessageBeforeDismiss:(ForwardMessageLogicController *)arg1;
@end

