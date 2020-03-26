//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class CLPLocation, NSString;

@interface CLPWifiAPLocation : PBCodable <NSCopying>
{
    double _scanTimestamp;
    NSString *_appBundleId;
    int _channel;
    int _hidden;
    CLPLocation *_location;
    NSString *_mac;
    int _rssi;
    int _serverHash;
    struct {
        unsigned int scanTimestamp:1;
        unsigned int hidden:1;
        unsigned int serverHash:1;
    } _has;
}

@property(nonatomic) int serverHash; // @synthesize serverHash=_serverHash;
@property(retain, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(retain, nonatomic) CLPLocation *location; // @synthesize location=_location;
@property(nonatomic) double scanTimestamp; // @synthesize scanTimestamp=_scanTimestamp;
@property(nonatomic) int rssi; // @synthesize rssi=_rssi;
@property(nonatomic) int hidden; // @synthesize hidden=_hidden;
@property(nonatomic) int channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *mac; // @synthesize mac=_mac;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasServerHash;
@property(readonly, nonatomic) BOOL hasAppBundleId;
@property(nonatomic) BOOL hasScanTimestamp;
@property(nonatomic) BOOL hasHidden;

@end
