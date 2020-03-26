//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>

@class HDCodableMedicalCoding, HDCodableMedicalCodingList, HDCodableMedicalCodingListList, HDCodableMedicalRecord, NSData, NSString;

@interface HDCodableVaccinationRecord : PBCodable <HDDecoding, NSCopying>
{
    NSData *_administrationDate;
    HDCodableMedicalCodingList *_bodySiteCodings;
    NSString *_doseNumber;
    NSString *_doseQuantity;
    NSData *_expirationDate;
    HDCodableMedicalRecord *_medicalRecord;
    NSString *_performer;
    NSString *_reaction;
    HDCodableMedicalCodingListList *_reasonsCodings;
    HDCodableMedicalCodingListList *_reasonsNotGivenCodings;
    HDCodableMedicalCodingList *_routeCodings;
    HDCodableMedicalCoding *_statusCoding;
    HDCodableMedicalCodingList *_vaccinationCodings;
    BOOL _notGiven;
    BOOL _patientReported;
    struct {
        unsigned int notGiven:1;
        unsigned int patientReported:1;
    } _has;
}

@property(retain, nonatomic) HDCodableMedicalCodingListList *reasonsNotGivenCodings; // @synthesize reasonsNotGivenCodings=_reasonsNotGivenCodings;
@property(retain, nonatomic) HDCodableMedicalCodingListList *reasonsCodings; // @synthesize reasonsCodings=_reasonsCodings;
@property(retain, nonatomic) HDCodableMedicalCodingList *routeCodings; // @synthesize routeCodings=_routeCodings;
@property(nonatomic) BOOL patientReported; // @synthesize patientReported=_patientReported;
@property(retain, nonatomic) HDCodableMedicalCoding *statusCoding; // @synthesize statusCoding=_statusCoding;
@property(retain, nonatomic) NSData *administrationDate; // @synthesize administrationDate=_administrationDate;
@property(nonatomic) BOOL notGiven; // @synthesize notGiven=_notGiven;
@property(retain, nonatomic) NSString *reaction; // @synthesize reaction=_reaction;
@property(retain, nonatomic) HDCodableMedicalCodingList *bodySiteCodings; // @synthesize bodySiteCodings=_bodySiteCodings;
@property(retain, nonatomic) NSString *performer; // @synthesize performer=_performer;
@property(retain, nonatomic) NSString *doseQuantity; // @synthesize doseQuantity=_doseQuantity;
@property(retain, nonatomic) NSString *doseNumber; // @synthesize doseNumber=_doseNumber;
@property(retain, nonatomic) NSData *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) HDCodableMedicalCodingList *vaccinationCodings; // @synthesize vaccinationCodings=_vaccinationCodings;
@property(retain, nonatomic) HDCodableMedicalRecord *medicalRecord; // @synthesize medicalRecord=_medicalRecord;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasReasonsNotGivenCodings;
@property(readonly, nonatomic) BOOL hasReasonsCodings;
@property(readonly, nonatomic) BOOL hasRouteCodings;
@property(nonatomic) BOOL hasPatientReported;
@property(readonly, nonatomic) BOOL hasStatusCoding;
@property(readonly, nonatomic) BOOL hasAdministrationDate;
@property(nonatomic) BOOL hasNotGiven;
@property(readonly, nonatomic) BOOL hasReaction;
@property(readonly, nonatomic) BOOL hasBodySiteCodings;
@property(readonly, nonatomic) BOOL hasPerformer;
@property(readonly, nonatomic) BOOL hasDoseQuantity;
@property(readonly, nonatomic) BOOL hasDoseNumber;
@property(readonly, nonatomic) BOOL hasExpirationDate;
@property(readonly, nonatomic) BOOL hasVaccinationCodings;
@property(readonly, nonatomic) BOOL hasMedicalRecord;
- (BOOL)applyToObject:(id)arg1 error:(out id )arg2;
- (BOOL)applyToObject:(id)arg1;

@end
