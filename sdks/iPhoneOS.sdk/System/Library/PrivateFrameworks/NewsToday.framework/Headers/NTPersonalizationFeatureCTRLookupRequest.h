//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class FCPersonalizationFeature;

@interface NTPersonalizationFeatureCTRLookupRequest : NSObject <NSCopying>
{
    FCPersonalizationFeature *_personalizationFeature;
    double _clickPrior;
    double _impressionPrior;
}

@property(nonatomic) double impressionPrior; // @synthesize impressionPrior=_impressionPrior;
@property(nonatomic) double clickPrior; // @synthesize clickPrior=_clickPrior;
@property(copy, nonatomic) FCPersonalizationFeature *personalizationFeature; // @synthesize personalizationFeature=_personalizationFeature;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end
