//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, _UIStatusBarRegion;

@protocol _UIStatusBarRegionLayout <NSObject>
@property(readonly, nonatomic) BOOL fitsAllItems;
@property(copy, nonatomic) NSArray *displayItems;
@property(nonatomic) __weak _UIStatusBarRegion *region;
- (void)invalidate;

@optional
- (BOOL)mayFitDisplayItems:(NSArray *)arg1;
@end
