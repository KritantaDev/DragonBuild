//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKViewController.h>


@class HKSplashScreenView, NSMutableArray, UIButton;

@interface HKSplashScreenViewController : HKViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *_splashItems;
    long long _splashVersion;
}

+ (id)splashScreenForSplashScreenVersion:(long long)arg1;
+ (void)markSplashScreenAtVersion:(long long)arg1;
@property(nonatomic) long long splashVersion; // @synthesize splashVersion=_splashVersion;
@property(retain, nonatomic) NSMutableArray *splashItems; // @synthesize splashItems=_splashItems;
// - (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)addSplashScreenViewControllerItem:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
@property(readonly, nonatomic) HKSplashScreenView *splashScreenView;
@property(readonly) UIButton *continueButton;
- (id)initForSplashScreenVersion:(long long)arg1;

@end
