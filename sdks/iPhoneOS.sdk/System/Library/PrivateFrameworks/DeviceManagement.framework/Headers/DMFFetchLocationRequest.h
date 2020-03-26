//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFFetchLocationRequest : DMFTaskRequest
{
    NSString *_originator;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (Class)whitelistedClassForResultObject;
@property(copy, nonatomic) NSString *originator; // @synthesize originator=_originator;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
