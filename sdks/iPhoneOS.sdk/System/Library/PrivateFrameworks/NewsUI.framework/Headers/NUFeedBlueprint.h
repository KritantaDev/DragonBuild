//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface NUFeedBlueprint : NSObject
{
    NSMutableArray *_sections;
}

@property(readonly, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
// - (void).cxx_destruct;
- (id)sectionAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger numberOfItems;
@property(readonly, nonatomic) NSUInteger numberOfSections;
- (id)init;

@end
