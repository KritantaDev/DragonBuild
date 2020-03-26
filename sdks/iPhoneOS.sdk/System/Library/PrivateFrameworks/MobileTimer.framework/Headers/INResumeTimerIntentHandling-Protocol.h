//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class INResumeTimerIntent;

@protocol INResumeTimerIntentHandling <NSObject>
- (void)handleResumeTimer:(INResumeTimerIntent *)arg1 completion:(void (^)(INResumeTimerIntentResponse *))arg2;

@optional
- (void)resolveResumeMultipleForResumeTimer:(INResumeTimerIntent *)arg1 withCompletion:(void (^)(INBooleanResolutionResult *))arg2;
- (void)resolveTargetTimerForResumeTimer:(INResumeTimerIntent *)arg1 withCompletion:(void (^)(INTimerResolutionResult *))arg2;
- (void)confirmResumeTimer:(INResumeTimerIntent *)arg1 completion:(void (^)(INResumeTimerIntentResponse *))arg2;
@end
