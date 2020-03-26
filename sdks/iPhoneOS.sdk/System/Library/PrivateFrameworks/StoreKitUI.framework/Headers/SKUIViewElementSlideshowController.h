//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUISlideshowViewControllerDataSource-Protocol.h>
#import <StoreKitUI/SKUISlideshowViewControllerDelegate-Protocol.h>

@class NSMutableArray, NSString, SKUIIPhoneSlideshowViewController, SKUISlideshowViewController, SKUIViewElementLayoutContext;
@protocol SKUIViewElementSlideshowDelegate;

__attribute__((visibility("hidden")))
@interface SKUIViewElementSlideshowController : NSObject <SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate>
{
    id <SKUIViewElementSlideshowDelegate> _delegate;
    SKUIViewElementLayoutContext *_layoutContext;
    NSMutableArray *_lockups;
    SKUISlideshowViewController *_padViewController;
    SKUIIPhoneSlideshowViewController *_phoneViewController;
    long long _selectedIndex;
    NSString *_title;
    NSMutableArray *_dataConsumers;
}

@property(retain, nonatomic) NSMutableArray *dataConsumers; // @synthesize dataConsumers=_dataConsumers;
@property(retain, nonatomic) SKUIViewElementLayoutContext *layoutContext; // @synthesize layoutContext=_layoutContext;
@property(nonatomic) __weak id <SKUIViewElementSlideshowDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)slideshowViewControllerDidFinish:(id)arg1;
- (id)slideshowViewController:(id)arg1 dataConsumerAtIndex:(long long)arg2;
- (id)slideshowViewController:(id)arg1 imageURLAtIndex:(long long)arg2;
- (id)slideshowViewController:(id)arg1 placeholderImageAtIndex:(long long)arg2;
- (long long)numberOfItemsInSlideshowViewController:(id)arg1;
- (void)presentFromParentViewController:(id)arg1;
@property(readonly, nonatomic) long long numberOfSlideshowItems;
- (void)dealloc;
- (id)initWithShelf:(id)arg1 selectedLockup:(id)arg2;

@end
