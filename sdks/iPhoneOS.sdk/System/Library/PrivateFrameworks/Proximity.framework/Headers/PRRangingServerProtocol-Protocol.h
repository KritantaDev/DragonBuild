//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Proximity/PRServerProtocol-Protocol.h>

@class NSDictionary, PRRemoteDevice;

@protocol PRRangingServerProtocol <PRServerProtocol>
- (void)stopP2PRanging:(PRRemoteDevice *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)startP2PRanging:(PRRemoteDevice *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)configureForP2PRanging:(PRRemoteDevice *)arg1 options:(NSDictionary *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
@end
