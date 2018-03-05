//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WWKAvatarUtility : NSObject
{
}

+ (id)imageWithRoundedCornersSize:(float)arg1 usingImage:(id)arg2 withSize:(struct CGSize)arg3;
+ (int)toLower:(int)arg1;
+ (int)toUpper:(int)arg1;
+ (_Bool)isEng:(int)arg1;
+ (_Bool)isSymbol:(int)arg1;
+ (id)backgroundRoundImageWithSize:(struct CGSize)arg1;
+ (id)backgroundCircleImageWithSize:(struct CGSize)arg1;
+ (id)doPorstr:(id)arg1;
+ (id)avatarUrlsForUsers:(const vector_89e6321f *)arg1;
+ (id)avatarUrlsForConversation:(scoped_refptr_fd92d7bf)arg1;
+ (vector_89e6321f)avatarUsersForConversation:(scoped_refptr_fd92d7bf)arg1;
+ (id)grayImageWithImage:(id)arg1;
+ (id)voipGrayImageWithImage:(id)arg1;
+ (id)portraitImageWithMutipleAvatarImage:(id)arg1 size:(struct CGSize)arg2 backgroundColorHexValue:(int)arg3 isRoom:(_Bool)arg4;
+ (id)portraitImageWithStringForAvatar:(id)arg1 size:(struct CGSize)arg2;

@end

