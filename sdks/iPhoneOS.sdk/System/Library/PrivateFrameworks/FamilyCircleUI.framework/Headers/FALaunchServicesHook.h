//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FamilyCircleUI/AAUIServerHook-Protocol.h>

@class NSSet;
@protocol AAUIServerHookDelegate;

@interface FALaunchServicesHook : NSObject <AAUIServerHook>
{
    NSSet *_urlSchemeWhitelist;
    id <AAUIServerHookDelegate> _delegate;
}

@property(nonatomic) __weak id <AAUIServerHookDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)_shouldOpenURL:(id)arg1;
- (void)_launchWithURLString:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)processObjectModel:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (BOOL)shouldMatchModel:(id)arg1;
- (BOOL)shouldMatchElement:(id)arg1;
- (id)initWithWhitelistedSchemes:(id)arg1;

@end
