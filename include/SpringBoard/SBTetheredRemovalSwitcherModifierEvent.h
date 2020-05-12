//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifierEvent.h>

@class NSUUID;

@interface SBTetheredRemovalSwitcherModifierEvent : SBSwitcherModifierEvent
{
    NSUUID *_tetheredRemovalID;
    NSUInteger _phase;
}

@property(readonly, nonatomic) NSUInteger phase; // @synthesize phase=_phase;
@property(readonly, nonatomic) NSUUID *tetheredRemovalID; // @synthesize tetheredRemovalID=_tetheredRemovalID;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (long long)type;
- (id)initWithTetheredRemovalID:(id)arg1 phase:(NSUInteger)arg2;

@end
