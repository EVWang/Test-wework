//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol MailProxyObserverDelegate <NSObject>

@optional
-     // Error parsing type: v24@0:8^{Mail={AtomicRefCount={atomic<int>=Ai}}{WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{ObserverList<mail::model::MailObserver, false>={WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{vector<mail::model::MailObserver *, std::__1::allocator<mail::model::MailObserver *> >=^^{MailObserver}^^{MailObserver}{__compressed_pair<mail::model::MailObserver **, std::__1::allocator<mail::model::MailObserver *> >=^^{MailObserver}}}ii}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}iiQQ{FilePath={basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}}{unique_ptr<mail::model::pb::Mail, std::__1::default_delete<mail::model::pb::Mail> >={__compressed_pair<mail::model::pb::Mail *, std::__1::default_delete<mail::model::pb::Mail> >=^{Mail}}}}16, name: mailSendProgressDidChange:
-     // Error parsing type: v24@0:8^{Mail={AtomicRefCount={atomic<int>=Ai}}{WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{ObserverList<mail::model::MailObserver, false>={WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{vector<mail::model::MailObserver *, std::__1::allocator<mail::model::MailObserver *> >=^^{MailObserver}^^{MailObserver}{__compressed_pair<mail::model::MailObserver **, std::__1::allocator<mail::model::MailObserver *> >=^^{MailObserver}}}ii}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}iiQQ{FilePath={basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}}{unique_ptr<mail::model::pb::Mail, std::__1::default_delete<mail::model::pb::Mail> >={__compressed_pair<mail::model::pb::Mail *, std::__1::default_delete<mail::model::pb::Mail> >=^{Mail}}}}16, name: mailSendStateDidChange:
-     // Error parsing type: v28@0:8^{Mail={AtomicRefCount={atomic<int>=Ai}}{WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{ObserverList<mail::model::MailObserver, false>={WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{vector<mail::model::MailObserver *, std::__1::allocator<mail::model::MailObserver *> >=^^{MailObserver}^^{MailObserver}{__compressed_pair<mail::model::MailObserver **, std::__1::allocator<mail::model::MailObserver *> >=^^{MailObserver}}}ii}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}iiQQ{FilePath={basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}}{unique_ptr<mail::model::pb::Mail, std::__1::default_delete<mail::model::pb::Mail> >={__compressed_pair<mail::model::pb::Mail *, std::__1::default_delete<mail::model::pb::Mail> >=^{Mail}}}}16i24, name: mail:didChangeAttachmentDownloadProgressAtIndex:
-     // Error parsing type: v28@0:8^{Mail={AtomicRefCount={atomic<int>=Ai}}{WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{ObserverList<mail::model::MailObserver, false>={WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{vector<mail::model::MailObserver *, std::__1::allocator<mail::model::MailObserver *> >=^^{MailObserver}^^{MailObserver}{__compressed_pair<mail::model::MailObserver **, std::__1::allocator<mail::model::MailObserver *> >=^^{MailObserver}}}ii}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}iiQQ{FilePath={basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}}{unique_ptr<mail::model::pb::Mail, std::__1::default_delete<mail::model::pb::Mail> >={__compressed_pair<mail::model::pb::Mail *, std::__1::default_delete<mail::model::pb::Mail> >=^{Mail}}}}16i24, name: mail:didChangeAttachmentDownloadStateAtIndex:
@end

