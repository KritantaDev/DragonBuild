//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol BFFPasscodeInputViewDelegate;

@interface BFFPasscodeInputView : UIView
{
    id <BFFPasscodeInputViewDelegate> _delegate;
    UILabel *_instructions;
    UIView *_footerView;
    UIButton *_footerButton;
    UIButton *_instructionsLinkButton;
}

@property(retain, nonatomic) UIButton *instructionsLinkButton; // @synthesize instructionsLinkButton=_instructionsLinkButton;
@property(retain, nonatomic) UIButton *footerButton; // @synthesize footerButton=_footerButton;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UILabel *instructions; // @synthesize instructions=_instructions;
@property(nonatomic) __weak id <BFFPasscodeInputViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (CGSize)intrinsicContentSize;
- (void)shakePasscode;
- (void)disable;
- (BOOL)resignFirstResponder;
- (BOOL)isFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)_layoutForBounds:(CGRect)arg1;
- (id)passcodeField;
- (void)_instructionsLinkButtonPressed;
- (void)setInstructionsLinkText:(id)arg1;
- (void)footerButtonPressed;
- (void)setFooterButtonText:(id)arg1;
- (id)passcodeDisplayView;
- (id)passcode;
- (void)setPasscode:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end
