//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricMeasurement/MXMMetric.h>

@class NSNumber, NSString;

@interface MXMMemoryMetric : MXMMetric
{
}

+ (id)currentProcess;
- (id)_constructProbe;
- (BOOL)_shouldConstructProbe;
@property(readonly, copy, nonatomic) NSNumber *processIdentifier;
@property(readonly, copy, nonatomic) NSString *processName;
- (void)willStartAtEstimatedTime:(NSUInteger)arg1;
- (id)initWithIdentifier:(id)arg1 filter:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithProcessName:(id)arg1;
- (id)initWithProcessIdentifier:(int)arg1;

@end
