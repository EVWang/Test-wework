//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, UIColor, UIFont;

@interface HOTheme : NSObject
{
    NSString *_theme;
    NSString *_lightTheme;
    struct UIFont *_font;
    struct UIFont *_boldFont;
    struct UIFont *_italicFont;
    struct NSMutableDictionary *_info;
    struct NSMutableDictionary *_strippedInfo;
    struct UIColor *_backgroundColor;
}

+ (id)italicFontSet;
+ (id)boldFontSet;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSMutableDictionary *strippedInfo; // @synthesize strippedInfo=_strippedInfo;
@property(retain, nonatomic) NSMutableDictionary *info; // @synthesize info=_info;
@property(retain, nonatomic) UIFont *italicFont; // @synthesize italicFont=_italicFont;
@property(retain, nonatomic) UIFont *boldFont; // @synthesize boldFont=_boldFont;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *lightTheme; // @synthesize lightTheme=_lightTheme;
@property(copy, nonatomic) NSString *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (id)attributeForCSSKey:(id)arg1;
- (id)colorForStyle:(id)arg1;
- (struct UIFont *)fontForStyle:(id)arg1;
- (struct NSMutableDictionary *)strippedThemeToTheme:(struct NSMutableDictionary *)arg1;
- (id)strippedThemeToString:(struct NSMutableDictionary *)arg1;
- (struct NSMutableDictionary *)stripTheme:(id)arg1;
- (id)applyStyles:(id)arg1 forText:(id)arg2;
- (id)initWithTheme:(id)arg1;

@end

