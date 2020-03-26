//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIVisualEffectView;

@interface AKToolbarBackgroundView : UIView
{
    UIVisualEffectView *_visualEffectView;
    BOOL _translucent;
    UIView *_separatorLine;
    UIColor *_separatorColor;
    long long _blurStyle;
}

@property(nonatomic) long long blurStyle; // @synthesize blurStyle=_blurStyle;
@property(nonatomic, getter=isTranslucent) BOOL translucent; // @synthesize translucent=_translucent;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
// - (void).cxx_destruct;
- (void)_hostSeparatorInView:(id)arg1;
- (void)setShadowImage:(id)arg1 forToolbarPosition:(long long)arg2;
- (void)setBackgroundImage:(id)arg1 forToolbarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)updateSeparatorVisibility;
- (void)setBackgroundColor:(id)arg1;
- (void)setOpaque:(BOOL)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end
