//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DResourceLoader : NSObject
{
}

+ (id)loader;
- (long long)virtualScreenForContext:(id)arg1;
- (NSUInteger)uploadResource:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(id)arg4;
- (BOOL)shouldReuploadHandle:(id)arg1 config:(id)arg2;
- (void)destroyHandle:(id)arg1 insideContext:(id)arg2;
- (void)postbindHandle:(id)arg1 config:(id)arg2;

@end
