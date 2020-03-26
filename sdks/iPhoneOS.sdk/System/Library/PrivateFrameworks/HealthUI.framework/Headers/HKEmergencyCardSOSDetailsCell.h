//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>


@class NSAttributedString, UITextView;

@interface HKEmergencyCardSOSDetailsCell : UITableViewCell <UITextViewDelegate>
{
    UITextView *_footerTextView;
}

@property(retain, nonatomic) UITextView *footerTextView; // @synthesize footerTextView=_footerTextView;
// - (void).cxx_destruct;
- (void)_updateTextColor;
- (void)tintColorDidChange;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(_NSRange)arg3 interaction:(long long)arg4;
- (void)_dynamicUserInterfaceTraitDidChange;
@property(readonly, nonatomic) NSAttributedString *footerTextViewString;
- (void)setupConstraints;
- (void)setupViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
