//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QMapViewDelegate-Protocol.h"

@class CLLocation, NSMutableArray, NSString, NSTimerProxy, QMapView, QPointAnnotation, UIButton, UIImageView, UILabel, WWKAttendanceAdditionView;
@protocol QOverlay;

@interface WWKAttendanceMapView_V13 : UIView <QMapViewDelegate>
{
    struct unique_ptr<ww_attendance::LocationInfo, std::__1::default_delete<ww_attendance::LocationInfo>> target_location_;
    _Bool _needUpdateZoomLevel;
    int _check_exception_state;
    UILabel *_locationSubTitleLabel;
    UILabel *_locationTitleLabel;
    UIButton *_reloadButton;
    UIButton *_addAdditionButton;
    WWKAttendanceAdditionView *_additionView;
    UIImageView *_mapImageView;
    QMapView *_binaryExceptionMapView;
    UIImageView *_mapMaskImageView;
    UIImageView *_pinImageView;
    UILabel *_locatingDotLabel;
    NSMutableArray *_candicateLocationArray;
    NSTimerProxy *_locatingTitleTimer;
    CLLocation *_displayLocation;
    id <QOverlay> _targetCicleMark;
    QPointAnnotation *_currentLocAnnotation;
    QPointAnnotation *_targetAnnotation;
}

@property(nonatomic) _Bool needUpdateZoomLevel; // @synthesize needUpdateZoomLevel=_needUpdateZoomLevel;
@property(retain, nonatomic) QPointAnnotation *targetAnnotation; // @synthesize targetAnnotation=_targetAnnotation;
@property(retain, nonatomic) QPointAnnotation *currentLocAnnotation; // @synthesize currentLocAnnotation=_currentLocAnnotation;
@property(retain, nonatomic) id <QOverlay> targetCicleMark; // @synthesize targetCicleMark=_targetCicleMark;
@property(retain, nonatomic) CLLocation *displayLocation; // @synthesize displayLocation=_displayLocation;
@property(retain, nonatomic) NSTimerProxy *locatingTitleTimer; // @synthesize locatingTitleTimer=_locatingTitleTimer;
@property(retain, nonatomic) NSMutableArray *candicateLocationArray; // @synthesize candicateLocationArray=_candicateLocationArray;
@property(retain, nonatomic) UILabel *locatingDotLabel; // @synthesize locatingDotLabel=_locatingDotLabel;
@property(retain, nonatomic) UIImageView *pinImageView; // @synthesize pinImageView=_pinImageView;
@property(retain, nonatomic) UIImageView *mapMaskImageView; // @synthesize mapMaskImageView=_mapMaskImageView;
@property(retain, nonatomic) QMapView *binaryExceptionMapView; // @synthesize binaryExceptionMapView=_binaryExceptionMapView;
@property(retain, nonatomic) UIImageView *mapImageView; // @synthesize mapImageView=_mapImageView;
@property(nonatomic) int check_exception_state; // @synthesize check_exception_state=_check_exception_state;
@property(retain, nonatomic) WWKAttendanceAdditionView *additionView; // @synthesize additionView=_additionView;
@property(retain, nonatomic) UIButton *addAdditionButton; // @synthesize addAdditionButton=_addAdditionButton;
@property(retain, nonatomic) UIButton *reloadButton; // @synthesize reloadButton=_reloadButton;
@property(retain, nonatomic) UILabel *locationTitleLabel; // @synthesize locationTitleLabel=_locationTitleLabel;
@property(retain, nonatomic) UILabel *locationSubTitleLabel; // @synthesize locationSubTitleLabel=_locationSubTitleLabel;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)mapView:(id)arg1 viewForOverlay:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 updatingLocation:(_Bool)arg3;
@property(readonly, nonatomic) _Bool isMapVisible;
- (void)makeLocationVisble:(id)arg1 center:(id)arg2;
- (void)p_onlocatingTitleTimerReached;
- (void)setTargetLocationInfo:(const struct LocationInfo *)arg1;
- (void)startQmapViewCircleAnimation;
- (void)displayLocation:(id)arg1;
- (void)layoutSubviews;
- (void)updateViews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)p_isLocationValid:(id)arg1;
- (void)p_updateAdditionView;
- (void)dealloc;
- (void)p_initKVO;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

