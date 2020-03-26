//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsNetworkRequester-Protocol.h>

@class NSString;

@interface MapsSuggestionsNetworkRequester : NSObject <MapsSuggestionsNetworkRequester>
{
}

- (BOOL)ETAsFromHereWaypoint:(id)arg1 destinationWaypoints:(NSArray )arg2 transportType:(int)arg3 automobileOptions:(id)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (BOOL)composedWaypointForAddressString:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)composedWaypointForLocation:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)composedWaypointForMapItem:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)resolveMapItemHandleData:(NSData )arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)searchPOIWithName:(id)arg1 ofPOICategory:(id)arg2 withinVenue:(id)arg3 maxResults:(unsigned int)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (BOOL)searchString:(id)arg1 maxResults:(unsigned int)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (BOOL)reverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)forwardGeocodeAddressString:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)forwardGeocodePostalAddress:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
@property(readonly, nonatomic) NSString *uniqueName;

@end
