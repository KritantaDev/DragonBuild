//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _JavascriptOperation : NSObject
{
    NSString *_javascript;
    id /* CDUnknownBlockType */ _completion;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSString *javascript; // @synthesize javascript=_javascript;
// - (void).cxx_destruct;
- (void)submitJavascript:(id)arg1 finishBlock:(id /* CDUnknownBlockType */)arg2;
- (id)initWithJavascript:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;

@end
