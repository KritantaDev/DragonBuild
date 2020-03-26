//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexWeb/SWInteraction-Protocol.h>

@class NSString, NSURL;
@protocol SWNavigationManager;

@interface SWURLInteraction : NSObject <SWInteraction>
{
    NSURL *_URL;
    id <SWNavigationManager> _navigationManager;
}

@property(readonly, nonatomic) id <SWNavigationManager> navigationManager; // @synthesize navigationManager=_navigationManager;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (void)perform;
@property(readonly, nonatomic) NSUInteger type;
- (id)initWithURL:(id)arg1 navigationManager:(id)arg2;

@end
