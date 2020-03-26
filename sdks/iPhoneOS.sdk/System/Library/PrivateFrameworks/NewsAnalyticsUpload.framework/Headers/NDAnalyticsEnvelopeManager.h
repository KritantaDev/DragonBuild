//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsAnalyticsUpload/NDAnalyticsEnvelopeStoreObserver-Protocol.h>
#import <NewsAnalyticsUpload/NDAnalyticsService-Protocol.h>
#import <NewsAnalyticsUpload/NDAnalyticsUploadSchedulerDelegate-Protocol.h>

@class FCKeyValueStore, NDAnalyticsEnvelopeStore, NDAnalyticsPayloadAssembler, NDAnalyticsPayloadUploader, NDAnalyticsUploadScheduler, NFMutexLock;
@protocol NDAnalyticsEnvelopeTracker;

@interface NDAnalyticsEnvelopeManager : NSObject <NDAnalyticsEnvelopeStoreObserver, NDAnalyticsUploadSchedulerDelegate, NDAnalyticsService>
{
    NDAnalyticsEnvelopeStore *_envelopeStore;
    NDAnalyticsPayloadAssembler *_payloadAssembler;
    NDAnalyticsPayloadUploader *_payloadUploader;
    NDAnalyticsUploadScheduler *_uploadScheduler;
    FCKeyValueStore *_lastUploadDatesByContentType;
    NFMutexLock *_keyValueStoreLock;
    id <NDAnalyticsEnvelopeTracker> _envelopeTracker;
}

@property(retain, nonatomic) id <NDAnalyticsEnvelopeTracker> envelopeTracker; // @synthesize envelopeTracker=_envelopeTracker;
@property(retain, nonatomic) NFMutexLock *keyValueStoreLock; // @synthesize keyValueStoreLock=_keyValueStoreLock;
@property(retain, nonatomic) FCKeyValueStore *lastUploadDatesByContentType; // @synthesize lastUploadDatesByContentType=_lastUploadDatesByContentType;
@property(retain, nonatomic) NDAnalyticsUploadScheduler *uploadScheduler; // @synthesize uploadScheduler=_uploadScheduler;
@property(retain, nonatomic) NDAnalyticsPayloadUploader *payloadUploader; // @synthesize payloadUploader=_payloadUploader;
@property(retain, nonatomic) NDAnalyticsPayloadAssembler *payloadAssembler; // @synthesize payloadAssembler=_payloadAssembler;
@property(retain, nonatomic) NDAnalyticsEnvelopeStore *envelopeStore; // @synthesize envelopeStore=_envelopeStore;
// - (void).cxx_destruct;
- (id)_handleOutcomeOfUploadAttemptWithPayload:(id)arg1 success:(BOOL)arg2 error:(id)arg3 willRetry:(BOOL)arg4 hitEndpoint:(BOOL)arg5;
- (id)_handleDroppedEnvelopesForLocalReasons:(id)arg1;
- (id)_lastUploadDatesByContentType;
- (void)_scheduleUploadIfNeededWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)envelopeStore:(id)arg1 didFlushEnvelopesForEntries:(id)arg2;
- (void)uploadSchedulerDidDropScheduledBackgroundUpload:(id)arg1;
- (void)uploadScheduler:(id)arg1 performUploadWithCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)submitEnvelopes:(id)arg1 withSubmissionCompletion:(id /* CDUnknownBlockType */)arg2 foregroundUploadCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)submitEnvelopes:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)handleLaunchEventForBackgroundSessionWithIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)initWithAppConfigurationManager:(id)arg1 storeDirectoryFileURL:(id)arg2 URLSessionQueue:(id)arg3 envelopeTracker:(id)arg4;
- (id)init;

@end
