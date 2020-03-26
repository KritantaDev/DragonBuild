//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFServiceTreeMatching-Protocol.h>

@class NSArray, NSString;
@protocol HFServiceTreeMatching;

@interface HFServiceTreeCompoundPredicate : NSObject <HFServiceTreeMatching>
{
    id <HFServiceTreeMatching> _rootServicePredicate;
    NSArray *_childServicePredicates;
}

+ (id)na_identity;
@property(readonly, copy, nonatomic) NSArray *childServicePredicates; // @synthesize childServicePredicates=_childServicePredicates;
@property(readonly, nonatomic) id <HFServiceTreeMatching> rootServicePredicate; // @synthesize rootServicePredicate=_rootServicePredicate;
// - (void).cxx_destruct;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)matchingServicesForRootService:(id)arg1;
- (id)initWithRootServicePredicate:(id)arg1 childServicePredicates:(id)arg2;

@end
