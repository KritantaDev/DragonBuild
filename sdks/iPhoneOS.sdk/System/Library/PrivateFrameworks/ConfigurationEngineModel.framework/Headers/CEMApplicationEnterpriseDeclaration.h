//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMAssetBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class CEMApplicationEnterpriseDeclaration_AppPackage, CEMAssetBaseDescriptor, NSString;

@interface CEMApplicationEnterpriseDeclaration : CEMAssetBase <CEMRegisteredTypeProtocol>
{
    CEMAssetBaseDescriptor *_payloadDescriptor;
    NSString *_payloadBundleIdentifier;
    CEMApplicationEnterpriseDeclaration_AppPackage *_payloadAppPackage;
    NSString *_payloadAppPackageHashMD5;
    NSString *_payloadDisplayImage;
    NSString *_payloadDisplayImageHashMD5;
    NSString *_payloadFullSizeImage;
    NSString *_payloadFullSizeImageHashMD5;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withBundleIdentifier:(id)arg3 withAppPackage:(id)arg4 withAppPackageHashMD5:(id)arg5;
+ (id)buildWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withBundleIdentifier:(id)arg3 withAppPackage:(id)arg4 withAppPackageHashMD5:(id)arg5 withDisplayImage:(id)arg6 withDisplayImageHashMD5:(id)arg7 withFullSizeImage:(id)arg8 withFullSizeImageHashMD5:(id)arg9;
+ (id)allowedPayloadKeys;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSString *payloadFullSizeImageHashMD5; // @synthesize payloadFullSizeImageHashMD5=_payloadFullSizeImageHashMD5;
@property(copy, nonatomic) NSString *payloadFullSizeImage; // @synthesize payloadFullSizeImage=_payloadFullSizeImage;
@property(copy, nonatomic) NSString *payloadDisplayImageHashMD5; // @synthesize payloadDisplayImageHashMD5=_payloadDisplayImageHashMD5;
@property(copy, nonatomic) NSString *payloadDisplayImage; // @synthesize payloadDisplayImage=_payloadDisplayImage;
@property(copy, nonatomic) NSString *payloadAppPackageHashMD5; // @synthesize payloadAppPackageHashMD5=_payloadAppPackageHashMD5;
@property(copy, nonatomic) CEMApplicationEnterpriseDeclaration_AppPackage *payloadAppPackage; // @synthesize payloadAppPackage=_payloadAppPackage;
@property(copy, nonatomic) NSString *payloadBundleIdentifier; // @synthesize payloadBundleIdentifier=_payloadBundleIdentifier;
@property(copy, nonatomic) CEMAssetBaseDescriptor *payloadDescriptor; // @synthesize payloadDescriptor=_payloadDescriptor;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end
