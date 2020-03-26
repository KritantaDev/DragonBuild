//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RESingleton.h>

@class _DKKnowledgeStore;

@interface REDuetKnowledgeStore : RESingleton
{
    _DKKnowledgeStore *_knowledgeStore;
}

// - (void).cxx_destruct;
- (void)_executeQuery:(id)arg1 responseQueue:(id)arg2 synchronouslyWithBatching:(BOOL)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)executeQuerySynchronouslyWithBatching:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (id)_createTombstonesFromDuetEvents:(id)arg1;
- (id)_createActionsFromDuetEvents:(id)arg1;
- (id)_duetQueryForDonatedActionsAfterDate:(id)arg1 onStreams:(id)arg2 withPredicate:(id)arg3;
- (id)_duetDonationsStreams;
- (id)queryForDeletedActionsAfterDate:(id)arg1;
- (id)queryForAllRelevantShortcuts;
- (id)_queryForDonatedActionsAfterDate:(id)arg1 streams:(id)arg2;
- (id)queryForDonatedActionsAfterDate:(id)arg1;
- (id)queryForAllDonatedActionsWithIdentifier:(id)arg1;
- (id)queryForAllDonatedActions;
- (id)_createEventsFromDuetEvents:(id)arg1;
- (id)_duetChargingEventStream;
- (id)queryForHistoricChargingEventsWithMinimumDuration:(double)arg1 inThePastDays:(NSUInteger)arg2;
- (id)queryForPredictedChargingEventsWithMinimumDuration:(double)arg1;
- (id)sleepInterval;
- (id)_createTimelineFromPredictionTimeline:(id)arg1 filterEmptyData:(BOOL)arg2;
- (id)queryForTopNApplications:(long long)arg1 withLikelihoodGreaterThan:(double)arg2 withTemporalResolution:(int)arg3;
- (id)_init;
- (id)_queryForUnfilteredDonationsForStream:(id)arg1;
- (id)queryForUnfilteredRelevantShortcutDonations;
- (id)queryForUnfilteredIntentDonations;
- (id)queryForUnfilteredUserActivityDonations;
- (id)queryForDuetEventWithIdentifier:(id)arg1;

@end
