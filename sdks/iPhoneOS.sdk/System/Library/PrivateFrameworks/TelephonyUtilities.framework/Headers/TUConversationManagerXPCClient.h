//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUConversationManagerDataSource-Protocol.h>
#import <TelephonyUtilities/TUConversationManagerXPCClient-Protocol.h>

@class NSDictionary, NSXPCConnection;
@protocol OS_dispatch_queue, TUConversationManagerDataSourceDelegate, TUConversationMediaControllerDataSourceDelegate;

@interface TUConversationManagerXPCClient : NSObject <TUConversationManagerXPCClient, TUConversationManagerDataSource>
{
    BOOL _hasRequestedInitialState;
    BOOL _shouldConnectToHost;
    int _shouldConnectToken;
    id <TUConversationManagerDataSourceDelegate> _delegate;
    id <TUConversationMediaControllerDataSourceDelegate> _mediaDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    NSDictionary *_conversationsByGroupUUID;
}

+ (id)conversationManagerServerXPCInterface;
+ (id)conversationManagerClientXPCInterface;
+ (id)conversationManagerAllowedClasses;
+ (void)setSynchronousServer:(id)arg1;
+ (id)synchronousServer;
+ (void)setAsynchronousServer:(id)arg1;
+ (id)asynchronousServer;
@property(copy, nonatomic) NSDictionary *conversationsByGroupUUID; // @synthesize conversationsByGroupUUID=_conversationsByGroupUUID;
@property(nonatomic) BOOL shouldConnectToHost; // @synthesize shouldConnectToHost=_shouldConnectToHost;
@property(nonatomic) int shouldConnectToken; // @synthesize shouldConnectToken=_shouldConnectToken;
@property(nonatomic) BOOL hasRequestedInitialState; // @synthesize hasRequestedInitialState=_hasRequestedInitialState;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <TUConversationMediaControllerDataSourceDelegate> mediaDelegate; // @synthesize mediaDelegate=_mediaDelegate;
@property(nonatomic) __weak id <TUConversationManagerDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (oneway void)mediaPrioritiesChangedForConversation:(id)arg1;
- (oneway void)updateConversationsByGroupUUID:(id)arg1;
- (id)synchronousServerWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (id)serverWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (void)handleServerDisconnect;
- (void)_invokeCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_requestInitialStateWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_requestInitialStateIfNecessary;
- (void)updateConversationWithUUID:(id)arg1 participantPresentationContexts:(id)arg2;
- (void)invalidate;
- (void)registerWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)setDownlinkMuted:(BOOL)arg1 forRemoteParticipantsInConversation:(id)arg2;
- (void)buzzMember:(id)arg1 conversation:(id)arg2;
- (void)addRemoteMembers:(id)arg1 toConversation:(id)arg2;
- (void)dealloc;
- (id)init;

@end
