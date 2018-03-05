//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class FSCalendarAppearance, FSCalendarCalculator, FSCalendarCollectionView, FSCalendarCollectionViewLayout, FSCalendarDelegationProxy, FSCalendarHeaderTouchDeliver, FSCalendarHeaderView, FSCalendarScopeHandle, FSCalendarTransitionCoordinator, FSCalendarWeekdayView, NSArray, NSCalendar, NSDate, NSDateComponents, NSDateFormatter, NSIndexPath, NSLocale, NSMapTable, NSMutableArray, NSString, NSTimeZone, UILongPressGestureRecognizer, UIPanGestureRecognizer;
@protocol FSCalendarDataSource, FSCalendarDelegate;

@interface FSCalendar : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate>
{
    NSMutableArray *_selectedDates;
    _Bool _pagingEnabled;
    _Bool _scrollEnabled;
    _Bool _showsScopeHandle;
    _Bool _needsAdjustingViewFrame;
    _Bool _needsLayoutForWeekMode;
    _Bool _needsRequestingBoundingDates;
    UIPanGestureRecognizer *_scopeGesture;
    UILongPressGestureRecognizer *_swipeToChooseGesture;
    NSDate *_today;
    NSDate *_currentPage;
    NSLocale *_locale;
    unsigned long long _scrollDirection;
    unsigned long long _scope;
    unsigned long long _placeholderType;
    unsigned long long _firstWeekday;
    double _headerHeight;
    double _weekdayHeight;
    FSCalendarWeekdayView *_calendarWeekdayView;
    FSCalendarHeaderView *_calendarHeaderView;
    double _rowHeight;
    double _wwkPreferRowHeight;
    FSCalendarAppearance *_appearance;
    NSDate *_minimumDate;
    NSDate *_maximumDate;
    NSCalendar *_gregorian;
    NSDateFormatter *_formatter;
    NSDateComponents *_components;
    NSTimeZone *_timeZone;
    UIView *_contentView;
    UIView *_daysContainer;
    UIView *_topBorder;
    UIView *_bottomBorder;
    FSCalendarScopeHandle *_scopeHandle;
    FSCalendarCollectionView *_collectionView;
    FSCalendarCollectionViewLayout *_collectionViewLayout;
    FSCalendarTransitionCoordinator *_transitionCoordinator;
    FSCalendarCalculator *_calculator;
    FSCalendarHeaderTouchDeliver *_deliver;
    double _preferredHeaderHeight;
    double _preferredWeekdayHeight;
    double _preferredRowHeight;
    unsigned long long _orientation;
    FSCalendarDelegationProxy *_dataSourceProxy;
    FSCalendarDelegationProxy *_delegateProxy;
    NSIndexPath *_lastPressedIndexPath;
    NSMapTable *_visibleSectionHeaders;
}

+ (_Bool)automaticallyNotifiesObserversOfScope;
@property(retain, nonatomic) NSMapTable *visibleSectionHeaders; // @synthesize visibleSectionHeaders=_visibleSectionHeaders;
@property(retain, nonatomic) NSIndexPath *lastPressedIndexPath; // @synthesize lastPressedIndexPath=_lastPressedIndexPath;
@property(retain, nonatomic) FSCalendarDelegationProxy *delegateProxy; // @synthesize delegateProxy=_delegateProxy;
@property(retain, nonatomic) FSCalendarDelegationProxy *dataSourceProxy; // @synthesize dataSourceProxy=_dataSourceProxy;
@property(nonatomic) unsigned long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) double preferredRowHeight; // @synthesize preferredRowHeight=_preferredRowHeight;
@property(nonatomic) double preferredWeekdayHeight; // @synthesize preferredWeekdayHeight=_preferredWeekdayHeight;
@property(nonatomic) double preferredHeaderHeight; // @synthesize preferredHeaderHeight=_preferredHeaderHeight;
@property(nonatomic) _Bool needsRequestingBoundingDates; // @synthesize needsRequestingBoundingDates=_needsRequestingBoundingDates;
@property(nonatomic) _Bool needsLayoutForWeekMode; // @synthesize needsLayoutForWeekMode=_needsLayoutForWeekMode;
@property(nonatomic) _Bool needsAdjustingViewFrame; // @synthesize needsAdjustingViewFrame=_needsAdjustingViewFrame;
@property(nonatomic) __weak FSCalendarHeaderTouchDeliver *deliver; // @synthesize deliver=_deliver;
@property(retain, nonatomic) FSCalendarCalculator *calculator; // @synthesize calculator=_calculator;
@property(retain, nonatomic) FSCalendarTransitionCoordinator *transitionCoordinator; // @synthesize transitionCoordinator=_transitionCoordinator;
@property(nonatomic) __weak FSCalendarCollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(nonatomic) __weak FSCalendarCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak FSCalendarScopeHandle *scopeHandle; // @synthesize scopeHandle=_scopeHandle;
@property(nonatomic) __weak UIView *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
@property(nonatomic) __weak UIView *topBorder; // @synthesize topBorder=_topBorder;
@property(nonatomic) __weak UIView *daysContainer; // @synthesize daysContainer=_daysContainer;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) NSDateComponents *components; // @synthesize components=_components;
@property(retain, nonatomic) NSDateFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) NSCalendar *gregorian; // @synthesize gregorian=_gregorian;
@property(readonly, nonatomic) NSDate *maximumDate; // @synthesize maximumDate=_maximumDate;
@property(readonly, nonatomic) NSDate *minimumDate; // @synthesize minimumDate=_minimumDate;
@property(readonly, nonatomic) FSCalendarAppearance *appearance; // @synthesize appearance=_appearance;
@property(nonatomic) double wwkPreferRowHeight; // @synthesize wwkPreferRowHeight=_wwkPreferRowHeight;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(nonatomic) _Bool showsScopeHandle; // @synthesize showsScopeHandle=_showsScopeHandle;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) _Bool pagingEnabled; // @synthesize pagingEnabled=_pagingEnabled;
@property(retain, nonatomic) FSCalendarHeaderView *calendarHeaderView; // @synthesize calendarHeaderView=_calendarHeaderView;
@property(retain, nonatomic) FSCalendarWeekdayView *calendarWeekdayView; // @synthesize calendarWeekdayView=_calendarWeekdayView;
@property(nonatomic) double weekdayHeight; // @synthesize weekdayHeight=_weekdayHeight;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(nonatomic) unsigned long long firstWeekday; // @synthesize firstWeekday=_firstWeekday;
@property(nonatomic) unsigned long long placeholderType; // @synthesize placeholderType=_placeholderType;
@property(nonatomic) unsigned long long scope; // @synthesize scope=_scope;
@property(nonatomic) unsigned long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(copy, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSDate *currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSDate *today; // @synthesize today=_today;
- (void).cxx_destruct;
- (void)configureAppearance;
- (_Bool)requestBoundingDatesIfNecessary;
- (void)adjustMonthPosition;
@property(readonly, nonatomic) unsigned long long currentCalendarOrientation;
- (void)invalidateViewFrames;
@property(readonly, nonatomic) NSArray *visibleStickyHeaders;
- (void)enqueueSelectedDate:(id)arg1;
- (void)deselectCounterpartDate:(id)arg1;
- (void)selectCounterpartDate:(id)arg1;
- (void)handleSwipeToChoose:(id)arg1;
- (void)reloadDataForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)invalidateAppearanceForCell:(id)arg1 forDate:(id)arg2;
- (void)invalidateHeaders;
- (void)invalidateLayout;
- (void)invalidateDateTools;
@property(readonly, nonatomic) _Bool hasValidateVisibleLayout;
- (_Bool)isDateInDifferentPage:(id)arg1;
- (_Bool)isDateSelected:(id)arg1;
- (_Bool)isPageInRange:(id)arg1;
- (_Bool)isDateInRange:(id)arg1;
- (void)scrollToPageForDate:(id)arg1 animated:(_Bool)arg2;
- (void)scrollToDate:(id)arg1 animated:(_Bool)arg2;
- (void)scrollToDate:(id)arg1;
- (void)handleScopeGesture:(id)arg1;
- (void)selectDate:(id)arg1 scrollToDate:(_Bool)arg2 atMonthPosition:(unsigned long long)arg3;
- (void)deselectDate:(id)arg1;
- (void)selectDate:(id)arg1 scrollToDate:(_Bool)arg2;
- (void)selectDate:(id)arg1;
- (void)setScope:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)reloadData;
@property(nonatomic) __weak id <FSCalendarDelegate> delegate;
@property(nonatomic) __weak id <FSCalendarDataSource> dataSource;
@property(readonly, nonatomic) UILongPressGestureRecognizer *swipeToChooseGesture; // @synthesize swipeToChooseGesture=_swipeToChooseGesture;
@property(readonly, nonatomic) UIPanGestureRecognizer *scopeGesture; // @synthesize scopeGesture=_scopeGesture;
@property(readonly, nonatomic) _Bool floatingMode;
@property(readonly, nonatomic) NSArray *selectedDates;
@property(readonly, nonatomic) NSDate *selectedDate; // @dynamic selectedDate;
@property(nonatomic) _Bool allowsSelection;
@property(nonatomic) _Bool allowsMultipleSelection;
- (struct CGRect)frameForDate:(id)arg1;
- (id)visibleCells;
- (unsigned long long)monthPositionForCell:(id)arg1;
- (id)dateForCell:(id)arg1;
- (id)cellForDate:(id)arg1 atMonthPosition:(unsigned long long)arg2;
- (id)dequeueReusableCellWithIdentifier:(id)arg1 forDate:(id)arg2 atMonthPosition:(unsigned long long)arg3;
- (void)registerClass:(Class)arg1 forCellReuseIdentifier:(id)arg2;
- (void)setCurrentPage:(id)arg1 animated:(_Bool)arg2;
- (void)orientationDidChange:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 scope:(unsigned long long)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)dealloc;
- (void)initialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) double lineHeightMultiplier; // @dynamic lineHeightMultiplier;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
- (_Bool)isDateInToday:(id)arg1;
- (_Bool)isDate:(id)arg1 equalToDate:(id)arg2 toCalendarUnit:(unsigned long long)arg3;
- (long long)daysFromDate:(id)arg1 toDate:(id)arg2;
- (long long)weeksFromDate:(id)arg1 toDate:(id)arg2;
- (long long)monthsFromDate:(id)arg1 toDate:(id)arg2;
- (long long)yearsFromDate:(id)arg1 toDate:(id)arg2;
- (id)dateBySubstractingDays:(long long)arg1 fromDate:(id)arg2;
- (id)dateByAddingDays:(long long)arg1 toDate:(id)arg2;
- (id)dateBySubstractingWeeks:(long long)arg1 fromDate:(id)arg2;
- (id)dateByAddingWeeks:(long long)arg1 toDate:(id)arg2;
- (id)dateBySubstractingMonths:(long long)arg1 fromDate:(id)arg2;
- (id)dateByAddingMonths:(long long)arg1 toDate:(id)arg2;
- (id)dateBySubstractingYears:(long long)arg1 fromDate:(id)arg2;
- (id)dateByAddingYears:(long long)arg1 toDate:(id)arg2;
- (id)dateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
- (id)yesterdayOfDate:(id)arg1;
- (id)tomorrowOfDate:(id)arg1;
- (id)dateByIgnoringTimeComponentsOfDate:(id)arg1;
- (long long)weekOfDate:(id)arg1;
- (long long)weekdayOfDate:(id)arg1;
- (long long)dayOfDate:(id)arg1;
- (long long)monthOfDate:(id)arg1;
- (long long)yearOfDate:(id)arg1;
@property(nonatomic) _Bool showsPlaceholders;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

