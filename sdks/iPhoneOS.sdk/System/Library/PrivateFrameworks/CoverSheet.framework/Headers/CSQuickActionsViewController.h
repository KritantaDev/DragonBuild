//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

#import <CoverSheet/CSQuickActionsDelegate-Protocol.h>
#import <CoverSheet/SBUIFlashlightObserver-Protocol.h>

@class CSCoverSheetViewController, SBUIFlashlightController;
@protocol CSCameraPrewarming, SBFLockOutStatusProvider;

@interface CSQuickActionsViewController : CSCoverSheetViewControllerBase <CSQuickActionsDelegate, SBUIFlashlightObserver>
{
    SBUIFlashlightController *_flashlight;
    BOOL _suppressingVisibleChanges;
    BOOL _animatingToCamera;
    CSCoverSheetViewController *_coverSheetViewController;
    id <SBFLockOutStatusProvider> _lockOutController;
    id <CSCameraPrewarming> _cameraPrewarmer;
}

+ (Class)viewClass;
+ (BOOL)deviceSupportsButtons;
@property(nonatomic) BOOL animatingToCamera; // @synthesize animatingToCamera=_animatingToCamera;
@property(nonatomic) BOOL suppressingVisibleChanges; // @synthesize suppressingVisibleChanges=_suppressingVisibleChanges;
@property(retain, nonatomic) id <CSCameraPrewarming> cameraPrewarmer; // @synthesize cameraPrewarmer=_cameraPrewarmer;
@property(retain, nonatomic) id <SBFLockOutStatusProvider> lockOutController; // @synthesize lockOutController=_lockOutController;
@property(nonatomic) __weak CSCoverSheetViewController *coverSheetViewController; // @synthesize coverSheetViewController=_coverSheetViewController;
// - (void).cxx_destruct;
- (void)_featureLockStateDidChangeNotification:(id)arg1;
- (void)_deviceBlockStateDidChangeNotification:(id)arg1;
- (void)_updateFlashlightButtonAvailabilityRespectingSuppression:(BOOL)arg1;
- (void)_updateFlashlightButtonAvailability;
- (void)_updateFlashlightButtonState;
- (BOOL)_isFlashlightOn;
- (void)_tearDownFlashlight;
- (void)_tearDownFlashlightIfOff;
- (void)_setupFlashlight;
- (BOOL)_supportsCamera;
- (void)_resetIdleTimer;
- (void)_toggleFlashlight;
- (void)_launchCamera;
- (void)touchEndedForButton:(id)arg1;
- (void)fireActionForButton:(id)arg1;
- (void)touchBeganForButton:(id)arg1;
- (BOOL)isPortrait;
- (BOOL)allowsCameraPress;
- (BOOL)hasCamera;
- (BOOL)allowsFlashlight;
- (BOOL)hasFlashlight;
- (void)flashlightAvailabilityDidChange:(BOOL)arg1;
- (void)flashlightLevelDidChange:(NSUInteger)arg1;
- (BOOL)handleEvent:(id)arg1;
- (long long)presentationType;
- (long long)presentationStyle;
- (long long)presentationPriority;
- (void)_addStateCaptureHandlers;
- (id)quickActionsViewIfLoaded;
- (id)quickActionsView;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;

@end
