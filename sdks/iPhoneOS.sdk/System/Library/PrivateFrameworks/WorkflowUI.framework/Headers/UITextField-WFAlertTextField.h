//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextField.h>

#import <WorkflowUI/WFAlertTextField-Protocol.h>
#import <WorkflowUI/WFInputViewMutable-Protocol.h>

@class NSArray;

@interface UITextField (WFAlertTextField) <WFAlertTextField, WFInputViewMutable>
+ (BOOL)usesSuggestions;
@property(nonatomic) long long alertTextInputMode;
@property(copy, nonatomic) NSArray *suggestions;
@end
