//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoViewControllerSizeObserving-Protocol.h>

@class SVKeyValueObserver, SVVideoViewController;

@interface SVVideoViewControllerSizeObserver : NSObject <SVVideoViewControllerSizeObserving>
{
    id /* CDUnknownBlockType */ changeBlock;
    SVVideoViewController *_videoViewController;
    SVKeyValueObserver *_boundsObserver;
    CGSize _size;
}

@property(nonatomic) CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) SVKeyValueObserver *boundsObserver; // @synthesize boundsObserver=_boundsObserver;
@property(readonly, nonatomic) __weak SVVideoViewController *videoViewController; // @synthesize videoViewController=_videoViewController;
@property(copy, nonatomic, setter=onChange:) id /* CDUnknownBlockType */ changeBlock; // @synthesize changeBlock;
// - (void).cxx_destruct;
- (id)initWithVideoViewController:(id)arg1;

@end
