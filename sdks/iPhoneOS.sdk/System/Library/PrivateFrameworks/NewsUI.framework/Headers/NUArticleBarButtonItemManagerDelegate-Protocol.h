//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NUArticleBarButtonItemManager, UIBarButtonItem;

@protocol NUArticleBarButtonItemManagerDelegate <NSObject>
- (void)articleBarButtonItemManagerDidLayoutBarButtonItems:(NUArticleBarButtonItemManager *)arg1;
- (void)articleBarButtonItemManager:(NUArticleBarButtonItemManager *)arg1 performShareActionForBarButtonItem:(UIBarButtonItem *)arg2;
- (void)articleBarButtonItemManager:(NUArticleBarButtonItemManager *)arg1 performNextActionForBarButtonItem:(UIBarButtonItem *)arg2;
- (void)articleBarButtonItemManager:(NUArticleBarButtonItemManager *)arg1 performDoneActionForBarButtonItem:(UIBarButtonItem *)arg2;
@end
