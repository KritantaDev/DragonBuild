//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface SBHorizontalScrollFailureTriangleView : UIView
{
    int _style;
    BOOL _pointingRight;
    UIColor *_contentColor;
}

@property(retain, nonatomic) UIColor *contentColor; // @synthesize contentColor=_contentColor;
// - (void).cxx_destruct;
- (void)drawRect:(CGRect)arg1;
- (id)initWithStyle:(int)arg1 recognizer:(id)arg2 forPoint:(CGPoint)arg3 withMaxVerticalOffset:(double)arg4 inView:(id)arg5 pointingRight:(BOOL)arg6;

@end
