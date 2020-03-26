//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFIconDescriptor-Protocol.h>

@class NSDictionary, NSString;

@interface HFCAPackageIconDescriptor : NSObject <HFIconDescriptor>
{
    BOOL _shouldForceLTR;
    NSString *_packageIdentifier;
    NSString *_state;
    NSDictionary *_iconModifiers;
}

@property(readonly, nonatomic) NSDictionary *iconModifiers; // @synthesize iconModifiers=_iconModifiers;
@property(readonly, nonatomic) NSString *state; // @synthesize state=_state;
@property(readonly, nonatomic) NSString *packageIdentifier; // @synthesize packageIdentifier=_packageIdentifier;
@property(readonly, nonatomic) BOOL shouldForceLTR; // @synthesize shouldForceLTR=_shouldForceLTR;
// - (void).cxx_destruct;
- (id)iconDescriptorByMergingWithIconDescriptor:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithPackageIdentifier:(id)arg1 state:(id)arg2 modifiers:(id)arg3;
- (id)initWithPackageIdentifier:(id)arg1 state:(id)arg2;
- (id)initWithPackageIdentifier:(id)arg1;

@end
