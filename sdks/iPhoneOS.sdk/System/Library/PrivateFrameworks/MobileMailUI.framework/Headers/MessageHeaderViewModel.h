//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileMailUI/MessageItemViewModel.h>

#import <MobileMailUI/MessageHeaderViewModelBuilder-Protocol.h>

@class ECSubject, EFObservable, MFAddressAtomStatusManager, MFMailboxUid, NSArray, NSDate;
@protocol EFObserver;

@interface MessageHeaderViewModel : MessageItemViewModel <MessageHeaderViewModelBuilder, NSCopying>
{
    NSDate *_dateSent;
    ECSubject *_subject;
    MFMailboxUid *_mailbox;
    NSArray *_senderList;
    NSArray *_toList;
    NSArray *_ccList;
    NSArray *_bccList;
    MFAddressAtomStatusManager *_atomManager;
    EFObservable<EFObserver> *_observableObserver;
}

@property(retain, nonatomic) EFObservable<EFObserver> *observableObserver; // @synthesize observableObserver=_observableObserver;
@property(retain, nonatomic) MFAddressAtomStatusManager *atomManager; // @synthesize atomManager=_atomManager;
@property(copy, nonatomic) NSArray *bccList; // @synthesize bccList=_bccList;
@property(copy, nonatomic) NSArray *ccList; // @synthesize ccList=_ccList;
@property(copy, nonatomic) NSArray *toList; // @synthesize toList=_toList;
@property(copy, nonatomic) NSArray *senderList; // @synthesize senderList=_senderList;
@property(copy, nonatomic) MFMailboxUid *mailbox; // @synthesize mailbox=_mailbox;
@property(copy, nonatomic) ECSubject *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) NSDate *dateSent; // @synthesize dateSent=_dateSent;
// - (void).cxx_destruct;
- (BOOL)_flagsChangedInModel:(id)arg1;
- (id)updatedModelWithMessage:(id)arg1;
- (id)updatedFlagsModelWithBuilder:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) EFObservable *modelObservable;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithItemBuilder:(id /* CDUnknownBlockType */)arg1;
- (id)initWithBuilder:(id /* CDUnknownBlockType */)arg1;

@end
