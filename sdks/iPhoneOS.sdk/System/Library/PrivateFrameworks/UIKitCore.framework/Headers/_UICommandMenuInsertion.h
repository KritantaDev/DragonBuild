//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UICommandChange.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UICommandMenuInsertion : _UICommandChange
{
    NSArray *_fallbacks;
    NSArray *_insertsAtStart;
    NSArray *_insertsAtEnd;
    NSArray *_insertsBefore;
    NSArray *_insertsAfter;
}

+ (BOOL)supportsSecureCoding;
+ (id)insertionWithAnchor:(id)arg1 fallbacks:(id)arg2 insertsAtStart:(id)arg3 insertsAtEnd:(id)arg4 insertsBefore:(id)arg5 insertsAfter:(id)arg6;
@property(readonly, nonatomic) NSArray *insertsAfter; // @synthesize insertsAfter=_insertsAfter;
@property(readonly, nonatomic) NSArray *insertsBefore; // @synthesize insertsBefore=_insertsBefore;
@property(readonly, nonatomic) NSArray *insertsAtEnd; // @synthesize insertsAtEnd=_insertsAtEnd;
@property(readonly, nonatomic) NSArray *insertsAtStart; // @synthesize insertsAtStart=_insertsAtStart;
@property(readonly, nonatomic) NSArray *fallbacks; // @synthesize fallbacks=_fallbacks;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)acceptBoolItemInsertionVisit:(id /* CDUnknownBlockType */)arg1 itemDeletionVisit:(id /* CDUnknownBlockType */)arg2 menuInsertionVisit:(id /* CDUnknownBlockType */)arg3 menuDeletionVisit:(id /* CDUnknownBlockType */)arg4;
- (void)acceptItemInsertionVisit:(id /* CDUnknownBlockType */)arg1 itemDeletionVisit:(id /* CDUnknownBlockType */)arg2 menuInsertionVisit:(id /* CDUnknownBlockType */)arg3 menuDeletionVisit:(id /* CDUnknownBlockType */)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithAnchor:(id)arg1 fallbacks:(id)arg2 insertsAtStart:(id)arg3 insertsAtEnd:(id)arg4 insertsBefore:(id)arg5 insertsAfter:(id)arg6;

@end
