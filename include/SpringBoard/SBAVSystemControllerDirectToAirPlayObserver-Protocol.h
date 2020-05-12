//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSNotification;

@protocol SBAVSystemControllerDirectToAirPlayObserver <NSObject>
- (void)externalDisplayChanged:(NSNotification *)arg1;
- (void)lockStateChanged:(NSNotification *)arg1;
- (void)likelyExternalDestinationsDidChange:(NSNotification *)arg1;
- (void)currentExternalDestinationDidChange:(NSNotification *)arg1;
- (void)externalAirPlayVideoPlayingDidChange:(NSNotification *)arg1;
- (void)externalAirPlayVideoActiveDidChange:(NSNotification *)arg1;
@end
