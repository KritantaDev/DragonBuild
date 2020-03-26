//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/PPClientStore-Protocol.h>
#import <PersonalizationPortrait/PPFeedbackAccepting-Protocol.h>

@class PPClientFeedbackHelper;

@interface PPLocationStore : NSObject <PPFeedbackAccepting, PPClientStore>
{
    PPClientFeedbackHelper *_clientFeedbackHelper;
}

+ (id)describeLocationConsumer:(NSUInteger)arg1;
+ (id)placemarkWithName:(id)arg1 clLocation:(id)arg2;
+ (id)placemarkWithLatitudeDegrees:(id)arg1 longitudeDegrees:(id)arg2 name:(id)arg3 thoroughfare:(id)arg4 subthoroughFare:(id)arg5 locality:(id)arg6 subLocality:(id)arg7 administrativeArea:(id)arg8 subAdministrativeArea:(id)arg9 postalCode:(id)arg10 countryCode:(id)arg11 country:(id)arg12 inlandWater:(id)arg13 ocean:(id)arg14 areasOfInterest:(id)arg15;
+ (id)placemarkWithLocation:(id)arg1 name:(id)arg2 thoroughfare:(id)arg3 subthoroughFare:(id)arg4 locality:(id)arg5 subLocality:(id)arg6 administrativeArea:(id)arg7 subAdministrativeArea:(id)arg8 postalCode:(id)arg9 countryCode:(id)arg10 country:(id)arg11 inlandWater:(id)arg12 ocean:(id)arg13 areasOfInterest:(id)arg14;
+ (id)defaultStore;
// - (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)locationRecordsWithQuery:(id)arg1 error:(id )arg2;
- (BOOL)iterLocationRecordsWithQuery:(id)arg1 error:(id )arg2 block:(id /* CDUnknownBlockType */)arg3;
- (id)rankedLocationsWithQuery:(id)arg1 error:(id )arg2;
- (BOOL)iterRankedLocationsWithQuery:(id)arg1 error:(id )arg2 block:(id /* CDUnknownBlockType */)arg3;
- (BOOL)clearWithError:(id )arg1 deletedCount:(NSUInteger )arg2;
- (BOOL)cloudSyncWithError:(id )arg1;
- (BOOL)donateLocations:(id)arg1 source:(id)arg2 contextualNamedEntities:(id)arg3 algorithm:(unsigned short)arg4 cloudSync:(BOOL)arg5 decayRate:(double)arg6 error:(id )arg7;
- (void)registerFeedback:(id)arg1 clientIdentifier:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)registerFeedback:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)init;

@end
