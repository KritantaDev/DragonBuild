//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _WebSafeAsyncForwarder;

__attribute__((visibility("hidden")))
@interface _WebSafeForwarder : NSObject
{
    id target;
    id defaultTarget;
    _WebSafeAsyncForwarder *asyncForwarder;
    long long asyncForwarderPred;
}

- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)clearTarget;
- (void)dealloc;
- (id)asyncForwarder;
- (id)initWithTarget:(id)arg1 defaultTarget:(id)arg2;

@end
