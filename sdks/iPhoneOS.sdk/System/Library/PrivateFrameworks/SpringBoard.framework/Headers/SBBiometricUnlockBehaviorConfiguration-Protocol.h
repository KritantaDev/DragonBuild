//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol SBBiometricUnlockBehavior, SBBiometricUnlockBehaviorConfigurationDelegate;

@protocol SBBiometricUnlockBehaviorConfiguration <NSObject>
@property(nonatomic) __weak id <SBBiometricUnlockBehaviorConfigurationDelegate> delegate;
- (id <SBBiometricUnlockBehavior>)newBehaviorForCurrentConfiguration;
@end
