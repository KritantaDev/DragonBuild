//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantUI/AVAudioPlayerDelegate-Protocol.h>

@class AVAudioPlayer, AceObject, NSUUID;
@protocol AFUIAudioPlayerDelegate;

@interface AFUIAudioPlayer : NSObject <AVAudioPlayerDelegate>
{
    BOOL _deactivateAudioSessionOnPlaybackFinished;
    id <AFUIAudioPlayerDelegate> _delegate;
    AceObject *_playbackCommand;
    NSUUID *_conversationItemIdentifier;
    AVAudioPlayer *_player;
}

+ (id)audioMessagePlayer;
+ (id)voicemailPlayer;
@property(retain, nonatomic, getter=_player, setter=_setPlayer:) AVAudioPlayer *player; // @synthesize player=_player;
@property(nonatomic) __weak NSUUID *conversationItemIdentifier; // @synthesize conversationItemIdentifier=_conversationItemIdentifier;
@property(nonatomic) BOOL deactivateAudioSessionOnPlaybackFinished; // @synthesize deactivateAudioSessionOnPlaybackFinished=_deactivateAudioSessionOnPlaybackFinished;
@property(retain, nonatomic) AceObject *playbackCommand; // @synthesize playbackCommand=_playbackCommand;
@property(nonatomic) __weak id <AFUIAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (id)_audioURL;
- (NSUInteger)_audioOptions;
- (id)_audioCategory;
- (void)stopPlaying;
- (void)startPlaying;

@end
