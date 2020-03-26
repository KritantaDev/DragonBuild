//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ControlCenterUI/_UIClickPresentationTransition-Protocol.h>

@class CCUIContentModuleContainerViewController;

@interface CCUIContentModuleContainerTransition : NSObject <_UIClickPresentationTransition>
{
    BOOL _appearanceTransition;
    CCUIContentModuleContainerViewController *_viewController;
    CGRect _contentRestOverrideFrame;
}

@property(nonatomic) CGRect contentRestOverrideFrame; // @synthesize contentRestOverrideFrame=_contentRestOverrideFrame;
@property(nonatomic, getter=isAppearanceTransition) BOOL appearanceTransition; // @synthesize appearanceTransition=_appearanceTransition;
@property(nonatomic) __weak CCUIContentModuleContainerViewController *viewController; // @synthesize viewController=_viewController;
// - (void).cxx_destruct;
- (void)transitionDidEnd:(BOOL)arg1;
- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;

@end
