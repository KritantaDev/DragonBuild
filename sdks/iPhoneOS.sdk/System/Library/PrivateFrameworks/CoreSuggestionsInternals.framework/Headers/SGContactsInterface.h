//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGContactsInterface : NSObject
{
}

+ (BOOL)handleExistsInContactStoreForHandle:(id)arg1 withHandleType:(id)arg2;
+ (void)clearCache;
+ (BOOL)enumerateContactsMatchingName:(id)arg1 withKeysToFetch:(id)arg2 usingContactStore:(id)arg3 error:(id )arg4 usingBlock:(id /* CDUnknownBlockType */)arg5;
+ (BOOL)enumerateContactsWithFetchRequest:(id)arg1 usingContactStore:(id)arg2 error:(id )arg3 usingBlock:(id /* CDUnknownBlockType */)arg4;
+ (id)identifiersPredicateFromCacheForPredicate:(id)arg1 isCached:(BOOL )arg2;
+ (id)unifiedMeContactWithKeysToFetch:(id)arg1 usingContactStore:(id)arg2 error:(id )arg3;
+ (id)unifiedContactWithIdentifier:(id)arg1 keysToFetch:(id)arg2 usingContactStore:(id)arg3 error:(id )arg4;
+ (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 usingContactStore:(id)arg3 error:(id )arg4;
+ (void)initialize;

@end
