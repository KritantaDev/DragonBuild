//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, WebBookmarkChangeSet;

@protocol WebBookmarkInMemoryChangeFilter <NSObject>
- (NSArray *)bookmarkIDsModifiedInMemoryNotPassingFilterFromChangeSet:(WebBookmarkChangeSet *)arg1 inFolder:(int)arg2;
- (NSArray *)bookmarkIDsModifiedInMemoryPassingFilterFromChangeSet:(WebBookmarkChangeSet *)arg1 inFolder:(int)arg2;
@end
