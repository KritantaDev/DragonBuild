//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextField.h>

@interface HKCaretOptionalTextField : UITextField
{
    BOOL _allowsSelection;
    BOOL _disableActions;
}

@property(nonatomic) BOOL disableActions; // @synthesize disableActions=_disableActions;
@property(nonatomic) BOOL allowsSelection; // @synthesize allowsSelection=_allowsSelection;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (double)actualMinimumFontSize;
- (CGRect)caretRectForPosition:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;

@end
