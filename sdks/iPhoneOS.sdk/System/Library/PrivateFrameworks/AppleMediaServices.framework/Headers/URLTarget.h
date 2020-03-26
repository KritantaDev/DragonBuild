//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface URLTarget : NSObject
{
    unsigned int _applicationState;
    NSString *_bundleID;
    long long _defaultIndex;
    NSString *_normalScheme;
    NSString *_secureScheme;
}

+ (id)targetWithBundle:(id)arg1 scheme:(id)arg2 secureScheme:(id)arg3;
@property(retain, nonatomic) NSString *secureScheme; // @synthesize secureScheme=_secureScheme;
@property(retain, nonatomic) NSString *normalScheme; // @synthesize normalScheme=_normalScheme;
@property(nonatomic) long long defaultIndex; // @synthesize defaultIndex=_defaultIndex;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) unsigned int applicationState; // @synthesize applicationState=_applicationState;
// - (void).cxx_destruct;
- (id)initWithBundle:(id)arg1 scheme:(id)arg2 secureScheme:(id)arg3;

@end
