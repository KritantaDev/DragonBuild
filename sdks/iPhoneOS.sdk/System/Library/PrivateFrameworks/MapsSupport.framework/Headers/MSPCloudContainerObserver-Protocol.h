//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MSPCloudContainer, MSPCloudContainerChangeSet;

@protocol MSPCloudContainerObserver <NSObject>
- (void)cloudContainerDidChange:(MSPCloudContainer *)arg1;

@optional
- (void)cloudContainer:(MSPCloudContainer *)arg1 didFetchChanges:(MSPCloudContainerChangeSet *)arg2;
@end
