//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REMLExplanation.h>

@class RECondition;

@interface _REMLConditionExplanation : REMLExplanation
{
    RECondition *_condition;
    NSUInteger _type;
}

// - (void).cxx_destruct;
- (id)_hasFeatureExplanation:(id)arg1 withStyle:(NSUInteger)arg2;
- (id)_valueExplanation:(id)arg1 withStyle:(NSUInteger)arg2;
- (id)_probabilityExplanation:(id)arg1 withStyle:(NSUInteger)arg2;
- (id)_featureRuleExplanation:(id)arg1 withStyle:(NSUInteger)arg2;
- (id)_constantConditionExplanationWithStyle:(NSUInteger)arg1;
- (id)explanationWithStyle:(NSUInteger)arg1;
- (long long)_rankExplanationToSimilarExplanation:(id)arg1;
- (id)explanationByCombiningWithExplanation:(id)arg1;
- (id)initWithCondition:(id)arg1;

@end
