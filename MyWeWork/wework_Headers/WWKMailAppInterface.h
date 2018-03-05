//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MFMailComposeViewControllerDelegate-Protocol.h"

@class NSString;

@interface WWKMailAppInterface : NSObject <MFMailComposeViewControllerDelegate>
{
}

+ (_Bool)isBizMail;
+ (_Bool)composeMail:(id)arg1 to:(id)arg2 content:(id)arg3 attachments:(id)arg4;
+ (_Bool)composeMailWithMailToProtocol:(id)arg1;
+ (_Bool)composeMail:(id)arg1 to:(id)arg2;
+ (id)uniformContacts:(id)arg1;
+ (_Bool)available;
+ (void)showMailServiceUnavailableAlertWithhandler:(CDUnknownBlockType)arg1;
+ (_Bool)p_presentMailChooserWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (_Bool)presentMailChooserWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)anyMailWithOptions:(id)arg1;
+ (id)anyMail;
+ (id)bizMailWithOptions:(id)arg1;
+ (id)bizMail;
+ (id)QQMailApp;
+ (id)systemMail;
- (_Bool)composeMailWithMailToProtocol:(id)arg1;
- (_Bool)composeMail:(id)arg1 to:(id)arg2 content:(id)arg3 attachments:(id)arg4;
- (_Bool)composeMail:(id)arg1 to:(id)arg2;
- (_Bool)isExternal;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

