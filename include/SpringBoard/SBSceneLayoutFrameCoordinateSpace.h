//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSceneLayoutCoordinateSpace.h>

@class CALayer;

@interface SBSceneLayoutFrameCoordinateSpace : SBSceneLayoutCoordinateSpace
{
    CALayer *_containerLayer;
    CALayer *_contentLayer;
}

// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (CGRect)bounds;
- (CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 withinCoordinateSpace:(id)arg2;

@end
