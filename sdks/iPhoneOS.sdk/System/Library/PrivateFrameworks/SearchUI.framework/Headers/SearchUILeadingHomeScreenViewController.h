//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUILeadingViewController.h>

#import <SearchUI/SearchUIHomeScreenEngagementDelegate-Protocol.h>

@interface SearchUILeadingHomeScreenViewController : SearchUILeadingViewController <SearchUIHomeScreenEngagementDelegate>
{
}

+ (BOOL)supportsRowModel:(id)arg1;
- (NSUInteger)type;
- (void)updateWithRowModel:(id)arg1;
- (void)dismissIfNecessaryForIconDrag;
- (void)didEngageResult:(id)arg1;
- (BOOL)shouldVerticallyCenter;
- (id)setupView;

@end
