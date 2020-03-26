//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AWAttentionSampler, NSMutableArray;
@protocol AWSchedulerObserver, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AWScheduler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSMutableArray *_clients;
    AWAttentionSampler *_attentionSampler;
    id <AWSchedulerObserver> _observer;
}

+ (id)sharedUnitTestScheduler;
+ (id)sharedScheduler;
@property(readonly, nonatomic) AWAttentionSampler *attentionSampler; // @synthesize attentionSampler=_attentionSampler;
@property(nonatomic) __weak id <AWSchedulerObserver> observer; // @synthesize observer=_observer;
// - (void).cxx_destruct;
- (void)reevaluate;
- (void)armEvents;
- (void)setSmartCoverClosed:(BOOL)arg1;
- (void)processHIDEvent:(struct __IOHIDEvent )arg1 mask:(NSUInteger)arg2 timestamp:(NSUInteger)arg3;
- (void)removeInvalidClients;
- (void)removeInvalidClientsWithConnection:(id)arg1;
- (void)addClient:(id)arg1;
- (id)description;
- (id)initForUnitTest:(BOOL)arg1;

@end
