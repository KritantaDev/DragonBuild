//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileCoordinator.h>

@interface NSFileCoordinator (TSPersistence)
+ (BOOL)tsp_coordinateWritingItemAtURL:(id)arg1 options:(NSUInteger)arg2 writingItemAtURL:(id)arg3 options:(NSUInteger)arg4 filePresenter:(id)arg5 error:(id )arg6 byAccessor:(id /* CDUnknownBlockType */)arg7;
+ (BOOL)tsp_coordinateWritingItemAtURL:(id)arg1 options:(NSUInteger)arg2 filePresenter:(id)arg3 error:(id )arg4 byAccessor:(id /* CDUnknownBlockType */)arg5;
+ (BOOL)tsp_coordinateReadingItemAtURL:(id)arg1 urlType:(long long)arg2 options:(NSUInteger)arg3 writingItemAtURL:(id)arg4 options:(NSUInteger)arg5 filePresenter:(id)arg6 error:(id )arg7 byAccessor:(id /* CDUnknownBlockType */)arg8;
+ (BOOL)tsp_coordinateReadingItemAtURL:(id)arg1 urlType:(long long)arg2 options:(NSUInteger)arg3 filePresenter:(id)arg4 error:(id )arg5 byAccessor:(id /* CDUnknownBlockType */)arg6;
+ (void)tsp_removeFilePresenter:(id)arg1;
+ (void)tsp_addFilePresenter:(id)arg1;
- (void)tsp_coordinateAccessWithIntents:(id)arg1 queue:(id)arg2 byAccessor:(id /* CDUnknownBlockType */)arg3;
@end
