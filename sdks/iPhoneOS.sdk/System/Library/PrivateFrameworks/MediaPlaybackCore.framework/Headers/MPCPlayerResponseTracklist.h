//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/_MPCStateDumpPropertyListTransformable-Protocol.h>

@class MPCPlayerResponse, MPCPlayerResponseItem, MPSectionedCollection, NSIndexPath, NSString;

@interface MPCPlayerResponseTracklist : NSObject <_MPCStateDumpPropertyListTransformable>
{
    NSUInteger _changeItemSupport;
    NSString *_uniqueIdentifier;
    long long _lastChangeDirection;
    long long _upNextItemCount;
    long long _repeatType;
    long long _shuffleType;
    MPCPlayerResponse *_response;
    MPSectionedCollection *_items;
    NSIndexPath *_playingItemIndexPath;
    long long _playingItemGlobalIndex;
    long long _globalItemCount;
}

+ (id)insertCommandForPlayerPath:(id)arg1 devices:(id)arg2;
+ (id)resetCommandForPlayerPath:(id)arg1 devices:(id)arg2;
@property(readonly, nonatomic) long long globalItemCount; // @synthesize globalItemCount=_globalItemCount;
@property(readonly, nonatomic) long long playingItemGlobalIndex; // @synthesize playingItemGlobalIndex=_playingItemGlobalIndex;
@property(readonly, copy, nonatomic) NSIndexPath *playingItemIndexPath; // @synthesize playingItemIndexPath=_playingItemIndexPath;
@property(readonly, copy, nonatomic) MPSectionedCollection *items; // @synthesize items=_items;
@property(readonly, nonatomic) __weak MPCPlayerResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) long long shuffleType; // @synthesize shuffleType=_shuffleType;
@property(readonly, nonatomic) long long repeatType; // @synthesize repeatType=_repeatType;
@property(readonly, nonatomic) long long upNextItemCount; // @synthesize upNextItemCount=_upNextItemCount;
@property(readonly, nonatomic) long long lastChangeDirection; // @synthesize lastChangeDirection=_lastChangeDirection;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
// - (void).cxx_destruct;
- (NSUInteger)_determineChangeItemSupport;
- (id)_stateDumpObject;
- (id)disableModificationsCommand;
- (id)changeItemCommand;
- (id)shuffleCommand;
- (id)repeatCommand;
- (id)reorderCommand;
- (id)insertCommand;
- (id)resetCommand;
@property(readonly, nonatomic) MPCPlayerResponseItem *playingItem;
- (id)initWithResponse:(id)arg1;

@end
