//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextToSpeech/TTSSpeechRequestDelegate-Protocol.h>

@class TTSSpeechRequest;
@protocol TTSSpeechConnectionDelegate, TTSSpeechService;

@interface TTSSpeechRequestOwner : NSObject <TTSSpeechRequestDelegate>
{
    id <TTSSpeechConnectionDelegate> _delegate;
    TTSSpeechRequest *_request;
    id <TTSSpeechService> _speechService;
}

@property(nonatomic) __weak id <TTSSpeechService> speechService; // @synthesize speechService=_speechService;
@property(readonly, nonatomic) TTSSpeechRequest *request; // @synthesize request=_request;
@property(nonatomic) __weak id <TTSSpeechConnectionDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (oneway void)speechRequest:(id)arg1 didSynthesizeSilentlyToURL:(id)arg2;
- (oneway void)speechRequest:(id)arg1 didStopWithSuccess:(BOOL)arg2 phonemesSpoken:(id)arg3 forService:(id)arg4 error:(id)arg5;
- (oneway void)speechRequest:(id)arg1 withMark:(long long)arg2 didStartForRange:(_NSRange)arg3 forService:(id)arg4;
- (oneway void)speechRequestDidContinue:(id)arg1 forService:(id)arg2;
- (oneway void)speechRequestDidPause:(id)arg1 forService:(id)arg2;
- (oneway void)speechRequestDidStart:(id)arg1 forService:(id)arg2;
- (void)continueCurrentSpeechRequest;
- (void)pauseCurrentSpeechRequestAtMark:(long long)arg1 waitUntilPaused:(BOOL)arg2;
- (void)stopCurrentSpeechRequestAtMark:(long long)arg1 waitUntilStopped:(BOOL)arg2;
- (void)startSpeechRequest:(id)arg1;
- (BOOL)isSystemSpeakingOnBehalfOfCurrentConnection;
- (id)availableVoicesForLanguageCode:(id)arg1 queryingMobileAssets:(BOOL)arg2;
- (void)_setRequest:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithSpeechService:(id)arg1;

@end
