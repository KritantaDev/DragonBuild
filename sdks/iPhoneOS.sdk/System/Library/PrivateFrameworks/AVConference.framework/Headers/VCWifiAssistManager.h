//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCWifiAssistManager : NSObject
{
    unsigned char _wifiAssistState;
}

+ (id)sharedInstance;
@property(readonly) unsigned char wifiAssistState; // @synthesize wifiAssistState=_wifiAssistState;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
@property(readonly) BOOL isAvailable;
- (id)init;

@end
