//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteUI/RemoteUITableViewCell.h>

@class UILabel;

@interface RemoteUITableViewSubtitleAndValueCell : RemoteUITableViewCell
{
    UILabel *_valueLabel;
}

// - (void).cxx_destruct;
- (void)_adjustFrameOfView:(id)arg1 distance:(double)arg2;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)valueLabel;
- (id)effectiveValueTextLabel;
- (id)effectiveDetailTextLabel;

@end
