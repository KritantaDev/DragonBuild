//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDReference;

__attribute__((visibility("hidden")))
@interface EDPane : NSObject
{
    double mXSplitPosition;
    double mYSplitPosition;
    EDReference *mTopLeftCell;
    int mActivePane;
    int mPaneState;
}

+ (id)pane;
// - (void).cxx_destruct;
- (id)description;
- (void)setPaneState:(int)arg1;
- (int)paneState;
- (void)setActivePane:(int)arg1;
- (int)activePane;
- (void)setTopLeftCell:(id)arg1;
- (id)topLeftCell;
- (void)setYSplitPosition:(double)arg1;
- (double)ySplitPosition;
- (void)setXSplitPosition:(double)arg1;
- (double)xSplitPosition;
- (id)init;

@end
