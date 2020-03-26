//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFAlertButton.h>

@class NSString, WFImage;

@interface WFSelectableAlertButton : WFAlertButton
{
    BOOL _selected;
    BOOL _stickySelection;
    NSString *_subtitle;
    WFImage *_image;
}

+ (id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 selected:(BOOL)arg3 stickySelection:(BOOL)arg4 style:(long long)arg5 handler:(id /* CDUnknownBlockType */)arg6 image:(id)arg7;
+ (id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 selected:(BOOL)arg3 style:(long long)arg4 handler:(id /* CDUnknownBlockType */)arg5;
@property(readonly, nonatomic) BOOL stickySelection; // @synthesize stickySelection=_stickySelection;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(readonly, copy, nonatomic) WFImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
// - (void).cxx_destruct;

@end
