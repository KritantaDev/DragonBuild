//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSPageViewController.h>

#import <SpringBoard/CSApplicationHosting-Protocol.h>
#import <SpringBoard/SBDashBoardDelegatingScreenEdgePanGestureRecognizerDelegate-Protocol.h>
#import <SpringBoard/SBDashBoardHostedAppViewControllerDelegate-Protocol.h>
#import <SpringBoard/SBHomeGestureParticipantDelegate-Protocol.h>
#import <SpringBoard/SBSceneHandleObserver-Protocol.h>
#import <SpringBoard/SBSystemGestureRecognizerDelegate-Protocol.h>

@class NSSet, SBDashBoardDelegatingScreenEdgePanGestureRecognizer, SBDashBoardHostedAppViewController, SBFFluidBehaviorSettings, SBHomeGestureParticipant, UIView, UIViewFloatAnimatableProperty;

@interface SBDashBoardCameraPageViewController : CSPageViewController <SBDashBoardHostedAppViewControllerDelegate, SBSceneHandleObserver, SBSystemGestureRecognizerDelegate, SBDashBoardDelegatingScreenEdgePanGestureRecognizerDelegate, SBHomeGestureParticipantDelegate, CSApplicationHosting>
{
    UIView *_maskView;
    UIView *_tintView;
    SBDashBoardHostedAppViewController *_appViewController;
    BOOL _orientationLockAcquired;
    BOOL _interactiveDismissalInProgress;
    BOOL _hasWarmedCameraForThisPresentation;
    BOOL _cameraPrewarmSucceeded;
    long long _cameraPresentLargestPercent;
    SBDashBoardDelegatingScreenEdgePanGestureRecognizer *_bottomEdgeRecognizer;
    UIViewFloatAnimatableProperty *_scaleProperty;
    UIViewFloatAnimatableProperty *_alphaProperty;
    SBFFluidBehaviorSettings *_scaleSettings;
    SBFFluidBehaviorSettings *_alphaSettings;
    SBHomeGestureParticipant *_homeGestureParticipant;
}

+ (BOOL)isAvailableForConfiguration;
+ (NSUInteger)requiredCapabilities;
@property(retain, nonatomic) SBHomeGestureParticipant *homeGestureParticipant; // @synthesize homeGestureParticipant=_homeGestureParticipant;
@property(retain, nonatomic) SBFFluidBehaviorSettings *alphaSettings; // @synthesize alphaSettings=_alphaSettings;
@property(retain, nonatomic) SBFFluidBehaviorSettings *scaleSettings; // @synthesize scaleSettings=_scaleSettings;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *alphaProperty; // @synthesize alphaProperty=_alphaProperty;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *scaleProperty; // @synthesize scaleProperty=_scaleProperty;
@property(retain, nonatomic) SBDashBoardDelegatingScreenEdgePanGestureRecognizer *bottomEdgeRecognizer; // @synthesize bottomEdgeRecognizer=_bottomEdgeRecognizer;
// - (void).cxx_destruct;
- (void)_updateCameraScale:(double)arg1 dimmingAlpha:(double)arg2 interactive:(BOOL)arg3;
- (void)_updateCameraScale:(double)arg1 dimmingAlpha:(double)arg2;
- (void)_updateDimmingAlpha:(double)arg1 interactive:(BOOL)arg2;
- (void)_updateCameraScale:(double)arg1 interactive:(BOOL)arg2;
- (void)_updateForPropertyChanged;
- (void)_createProperties;
- (BOOL)_shouldCancelInteractiveDismissGesture;
- (void)_resetAfterInteractiveGestureToCameraVisible:(BOOL)arg1;
- (void)_prepareForInteractiveGestureToCameraVisible:(BOOL)arg1;
- (CGPoint)_convertTranslationFromContainerOrientationToContentOrientation:(CGPoint)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (long long)touchGestureInterfaceOrientation;
- (void)_handleBottomEdgeGestureEnded:(id)arg1;
- (void)_handleBottomEdgeGestureChanged:(id)arg1;
- (void)_handleBottomEdgeGestureBegan:(id)arg1;
- (void)_handleBottomEdgeGesture:(id)arg1;
- (void)_addOrRemoveGestureForCurrentSettings;
- (void)_coolCameraIfNecessary;
- (void)_prewarmCamera;
- (void)_relinquishHiddenAssertionForHomeGrabber:(id)arg1;
- (void)_takeHiddenAssertionForHomeGrabber:(id)arg1;
- (void)_noteUserLaunchEventTime;
- (void)_setSceneGrabberHidden:(BOOL)arg1;
- (void)_relinquishHomeGestureOwnership;
- (void)_requestHomeGestureOwnership;
- (void)_bailIfFaceTimeCallComesIn;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;
- (BOOL)handlesRotationIndependentOfCoverSheet;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (id)hostedAppSceneHandles;
- (id)hostedAppSceneHandle;
- (BOOL)isHostingAnApp;
- (BOOL)canHostAnApp;
- (BOOL)dashBoardHostedAppViewController:(id)arg1 shouldTransitionToMode:(long long)arg2;
- (BOOL)wouldHandleButtonEvent:(id)arg1;
- (BOOL)handleEvent:(id)arg1;
- (id)pageRole;
- (long long)presentationAltitude;
- (void)aggregateBehavior:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)_makeApplicationStatic;
- (void)_transitionAppViewWithProgress:(double)arg1;
- (id)requestedDismissalSettings;
- (long long)requestedDismissalType;
- (void)didTransitionToVisible:(BOOL)arg1;
- (void)updateTransitionToVisible:(BOOL)arg1 progress:(double)arg2 mode:(long long)arg3;
- (void)willTransitionToVisible:(BOOL)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
@property(retain, nonatomic) NSSet *actionsToDeliver;

@end
