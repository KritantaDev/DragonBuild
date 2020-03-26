//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSString;

@interface ASDPurgeableAppRequestOptions : ASDRequestOptions
{
    BOOL _performAvailablityCheck;
    long long _urgency;
    NSString *_volume;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *volume; // @synthesize volume=_volume;
@property(nonatomic) long long urgency; // @synthesize urgency=_urgency;
@property(nonatomic) BOOL performAvailablityCheck; // @synthesize performAvailablityCheck=_performAvailablityCheck;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithVolume:(id)arg1 urgency:(long long)arg2;

@end
