//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class UIView, UIViewController;
@protocol AnimatorDetailViewController;

@interface AAUIAchievementDetailTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _shouldAdjustForInset;
    BOOL _shouldPlayFlipInAnimation;
    BOOL _shouldDismissGracefullyForTextSizeChange;
    BOOL _reduceMotion;
    UIViewController *_presentingViewController;
    id <AnimatorDetailViewController> _detailViewController;
    UIView *_conversionView;
    id /* CDUnknownBlockType */ _presentBlock;
    id /* CDUnknownBlockType */ _dismissBlock;
    id /* CDUnknownBlockType */ _completionBlock;
    CGPoint _initialBadgeCenter;
    CGPoint _finalBadgeCenter;
    CGRect _initialBadgeFrame;
    CGRect _finalBadgeFrame;
    CGAffineTransform _initialBadgeTransform;
    CGAffineTransform _finalBadgeTransform;
    CGAffineTransform _finalPresentingVCTransform;
}

@property(nonatomic) BOOL reduceMotion; // @synthesize reduceMotion=_reduceMotion;
@property(nonatomic) BOOL shouldDismissGracefullyForTextSizeChange; // @synthesize shouldDismissGracefullyForTextSizeChange=_shouldDismissGracefullyForTextSizeChange;
@property(nonatomic) BOOL shouldPlayFlipInAnimation; // @synthesize shouldPlayFlipInAnimation=_shouldPlayFlipInAnimation;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ presentBlock; // @synthesize presentBlock=_presentBlock;
@property(nonatomic) CGAffineTransform finalPresentingVCTransform; // @synthesize finalPresentingVCTransform=_finalPresentingVCTransform;
@property(nonatomic) CGRect finalBadgeFrame; // @synthesize finalBadgeFrame=_finalBadgeFrame;
@property(nonatomic) CGAffineTransform finalBadgeTransform; // @synthesize finalBadgeTransform=_finalBadgeTransform;
@property(nonatomic) CGAffineTransform initialBadgeTransform; // @synthesize initialBadgeTransform=_initialBadgeTransform;
@property(nonatomic) CGPoint finalBadgeCenter; // @synthesize finalBadgeCenter=_finalBadgeCenter;
@property(nonatomic) CGPoint initialBadgeCenter; // @synthesize initialBadgeCenter=_initialBadgeCenter;
@property(nonatomic) CGRect initialBadgeFrame; // @synthesize initialBadgeFrame=_initialBadgeFrame;
@property(retain, nonatomic) UIView *conversionView; // @synthesize conversionView=_conversionView;
@property(retain, nonatomic) id <AnimatorDetailViewController> detailViewController; // @synthesize detailViewController=_detailViewController;
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) BOOL shouldAdjustForInset; // @synthesize shouldAdjustForInset=_shouldAdjustForInset;
// - (void).cxx_destruct;
- (void)animateDismissalWithContext:(id)arg1;
- (void)reducedMotionAnimateDismissalWithContext:(id)arg1;
- (void)animatePresentationWithContext:(id)arg1;
- (void)reducedMotionAnimatePresentationWithContext:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)prepareForAnimationsWithContext:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (BOOL)isPresentingWithContext:(id)arg1;
- (void)textSizeDidChange:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1 detailViewController:(id)arg2 shouldPlayFlipInAnimation:(BOOL)arg3 initialBadgeFrame:(CGRect)arg4 conversionView:(id)arg5 presentAlongsideBlock:(id /* CDUnknownBlockType */)arg6 dismissAlongsideBlock:(id /* CDUnknownBlockType */)arg7 completionBlock:(id /* CDUnknownBlockType */)arg8;

@end
