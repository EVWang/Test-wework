//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FSCalendar, NSArray, NSPointerArray;

@interface FSCalendarWeekdayView : UIView
{
    NSPointerArray *_weekdayPointers;
    UIView *_contentView;
    FSCalendar *_calendar;
}

@property(nonatomic) __weak FSCalendar *calendar; // @synthesize calendar=_calendar;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSPointerArray *weekdayPointers; // @synthesize weekdayPointers=_weekdayPointers;
- (void).cxx_destruct;
- (void)configureAppearance;
@property(readonly, nonatomic) NSArray *weekdayLabels;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

