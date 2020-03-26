//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaControls/MediaControlsVolumeSlider.h>


@class UIImpactFeedbackGenerator, UILongPressGestureRecognizer, UINotificationFeedbackGenerator, UIView;
@protocol MediaControlsMasterVolumeSliderDelegate;

__attribute__((visibility("hidden")))
@interface MediaControlsMasterVolumeSlider : MediaControlsVolumeSlider <UIGestureRecognizerDelegate>
{
    UIView *_growingThumbView;
    double _forcePercent;
    float _initialX;
    BOOL _syncingEnabled;
    id <MediaControlsMasterVolumeSliderDelegate> _delegate;
    long long _syncState;
    UIImpactFeedbackGenerator *_positiveFeedbackGenerator;
    UINotificationFeedbackGenerator *_negativeFeedbackGenerator;
    UILongPressGestureRecognizer *_gestureRecognizer;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(retain, nonatomic) UINotificationFeedbackGenerator *negativeFeedbackGenerator; // @synthesize negativeFeedbackGenerator=_negativeFeedbackGenerator;
@property(retain, nonatomic) UIImpactFeedbackGenerator *positiveFeedbackGenerator; // @synthesize positiveFeedbackGenerator=_positiveFeedbackGenerator;
@property(nonatomic) long long syncState; // @synthesize syncState=_syncState;
@property(nonatomic) __weak id <MediaControlsMasterVolumeSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isSyncingEnabled) BOOL syncingEnabled; // @synthesize syncingEnabled=_syncingEnabled;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)shrinkThumbAfterDelay:(double)arg1;
- (void)handleLongPress:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)createThumbView;
- (id)initWithFrame:(CGRect)arg1;

@end
