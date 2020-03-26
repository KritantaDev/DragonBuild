//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CAShapeLayer, UIColor;

@interface PKRingGradientView : UIView
{
    CAGradientLayer *_gradientLayer;
    CAShapeLayer *_gradientMaskLayer;
    CAShapeLayer *_strokeLayer;
    CAShapeLayer *_backgroundLayer;
    CAShapeLayer *_backgroundCap;
    CAShapeLayer *_gradientCap;
    CGColor _effectiveFillColor;
    CGColor _effectiveStrokeColor;
    BOOL _gradientCapIsFillColor;
    BOOL _enabled;
    UIColor *_fillColor;
    UIColor *_strokeColor;
    UIColor *_gradientStartColor;
    UIColor *_gradientEndColor;
    double _minimumAngle;
    double _currentAngle;
}

@property(nonatomic) double currentAngle; // @synthesize currentAngle=_currentAngle;
@property(nonatomic) double minimumAngle; // @synthesize minimumAngle=_minimumAngle;
@property(copy, nonatomic) UIColor *gradientEndColor; // @synthesize gradientEndColor=_gradientEndColor;
@property(copy, nonatomic) UIColor *gradientStartColor; // @synthesize gradientStartColor=_gradientStartColor;
@property(copy, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(copy, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
// - (void).cxx_destruct;
- (CGPoint)_centerPointForMaskViewWithAngle:(double)arg1 adjustToCover:(BOOL)arg2;
- (double)_maskRadius;
- (CGPoint)_center;
- (double)_radius;
- (void)_updateGradient;
- (void)_updateEffectiveColors;
@property(readonly, nonatomic) double radius;
@property(readonly, nonatomic) double totalWidth;
- (double)strokeWidth;
- (double)ringWidth;
- (double)_offsetEndAngle;
- (double)_offsetStartAngle;
- (void)layoutSubviews;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)dealloc;
- (id)init;

@end
