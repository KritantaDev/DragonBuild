//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/GameControllerDaemonListener-Protocol.h>

@class MRGameControllerDelayedEvents, NSXPCConnection;
@protocol GameControllerDaemon;

@interface MRGameControllerDaemonProxy : NSObject <GameControllerDaemonListener>
{
    NSXPCConnection *_connection;
    id <GameControllerDaemon> _remote;
    MRGameControllerDelayedEvents *_delayedEvents;
}

+ (id)defaultGameControllerDaemonProxy;
// - (void).cxx_destruct;
- (void)microControllerWithUDID:(NSUInteger)arg1 setDigitizerX:(float)arg2 digitizerY:(float)arg3 withTimeStamp:(NSUInteger)arg4 touchDown:(BOOL)arg5;
- (void)microControllerWithDigitizerX:(float)arg1 withY:(float)arg2 withTimeStamp:(NSUInteger)arg3 touchDown:(BOOL)arg4;
- (void)controllerWithUDID:(NSUInteger)arg1 setValue:(float)arg2 forElement:(int)arg3;
- (void)controllerWithUDID:(NSUInteger)arg1 setData:(id)arg2;
- (void)removeController:(id)arg1;
- (void)addController:(id)arg1;
- (void)replyConnectedHosts:(id)arg1;
- (BOOL)_delayEvent:(NSUInteger)arg1 setValue:(float)arg2 forElement:(int)arg3 withUpDelay:(double)arg4;
- (void)controllerID:(NSUInteger)arg1 setArrayValueX:(float)arg2 y:(float)arg3 z:(float)arg4 w:(float)arg5 forElement:(int)arg6;
- (void)controllerID:(NSUInteger)arg1 setDigitizerX:(float)arg2 digitizerY:(float)arg3 withTimeStamp:(NSUInteger)arg4 touchDown:(BOOL)arg5;
- (void)controllerID:(NSUInteger)arg1 setValue:(float)arg2 forElement:(int)arg3;
- (void)controllerID:(NSUInteger)arg1 setValue:(float)arg2 forElement:(int)arg3 withUpDelay:(double)arg4;
- (void)removeEmulatedController:(id)arg1;
- (id)addEmulatedControllerWithProperties:(id)arg1;
- (void)_openConnection;

@end
