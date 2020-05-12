//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBWorkspaceTransitionContext.h>

@class SBTransientOverlayPresentationManager, SBWorkspaceTransientOverlay;

@interface SBWorkspaceTransientOverlayTransitionContext : SBWorkspaceTransitionContext
{
    BOOL _animated;
    BOOL _shouldDismissSiriUponPresentation;
    BOOL _shouldDismissSwitcherUponPresentation;
    SBTransientOverlayPresentationManager *_presentationManager;
    SBWorkspaceTransientOverlay *_transientOverlay;
    long long _transitionType;
}

@property(nonatomic) long long transitionType; // @synthesize transitionType=_transitionType;
@property(retain, nonatomic) SBWorkspaceTransientOverlay *transientOverlay; // @synthesize transientOverlay=_transientOverlay;
@property(retain, nonatomic) SBTransientOverlayPresentationManager *presentationManager; // @synthesize presentationManager=_presentationManager;
@property(nonatomic) BOOL shouldDismissSwitcherUponPresentation; // @synthesize shouldDismissSwitcherUponPresentation=_shouldDismissSwitcherUponPresentation;
@property(nonatomic) BOOL shouldDismissSiriUponPresentation; // @synthesize shouldDismissSiriUponPresentation=_shouldDismissSiriUponPresentation;
@property(nonatomic, getter=isAnimated) BOOL animated; // @synthesize animated=_animated;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)compactDescriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)init;

@end
