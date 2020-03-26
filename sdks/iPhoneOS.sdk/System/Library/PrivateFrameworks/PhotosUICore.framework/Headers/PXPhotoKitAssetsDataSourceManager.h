//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXAssetsDataSourceManager.h>

#import <PhotosUICore/PXMutableAssetsDataSourceManager-Protocol.h>
#import <PhotosUICore/PXPhotosDataSourceChangeObserver-Protocol.h>

@class NSNumber, PXPhotosDataSource;
@protocol PXPhotosDataSourceProvider;

@interface PXPhotoKitAssetsDataSourceManager : PXAssetsDataSourceManager <PXPhotosDataSourceChangeObserver, PXMutableAssetsDataSourceManager>
{
    PXPhotosDataSource *_photosDataSource;
    NSNumber *_backgroundFetchOriginSection;
    id <PXPhotosDataSourceProvider> _photosDataSourceProvider;
}

+ (id)dataSourceManagerForAssetCollection:(id)arg1;
+ (id)dataSourceManagerWithAsset:(id)arg1;
@property(retain, nonatomic) id <PXPhotosDataSourceProvider> photosDataSourceProvider; // @synthesize photosDataSourceProvider=_photosDataSourceProvider;
// - (void).cxx_destruct;
- (void)photosDataSourceDidFinishBackgroundFetching:(id)arg1;
- (id)photosDataSourceInterestingAssetReferences:(id)arg1;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (void)startBackgroundFetchIfNeeded;
@property(nonatomic) long long backgroundFetchOriginSection;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1;
- (id)pauseChangeDeliveryWithTimeout:(double)arg1;
- (BOOL)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;
- (BOOL)forceAccurateSectionsIfNeeded:(id)arg1;
- (void)setCurationEnabled:(BOOL)arg1 forAssetCollection:(id)arg2;
@property(retain, nonatomic) PXPhotosDataSource *photosDataSource;
- (void)setPhotosDataSource:(id)arg1 publishIntermediateEmptySnapshot:(BOOL)arg2;
- (void)updateWithPhotosDataSource:(id)arg1 andDataSourceChange:(id)arg2;
- (id)_createAssetsDataSourceWithPhotosDataSource:(id)arg1 withChange:(id)arg2;
- (id)createInitialDataSource;
- (void)_ensurePhotosDataSource;
- (void)dealloc;
- (id)init;
- (id)initWithPhotosDataSourceProvider:(id)arg1;
- (id)initWithPhotosDataSource:(id)arg1;

@end
