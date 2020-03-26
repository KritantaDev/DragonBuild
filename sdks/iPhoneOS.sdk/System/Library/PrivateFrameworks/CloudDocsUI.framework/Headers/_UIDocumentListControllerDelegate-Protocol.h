//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, NSURL, UIView, UIViewController, _UIDocumentListController;
@protocol _UIDocumentListControllerPreviewViewController;

@protocol _UIDocumentListControllerDelegate <NSObject>
- (void)documentListController:(_UIDocumentListController *)arg1 performAction:(long long)arg2 URL:(NSURL *)arg3 originatingView:(UIView *)arg4 completion:(void (^)(void))arg5;
- (void)documentListController:(_UIDocumentListController *)arg1 didSelectContainerWithViewController:(_UIDocumentListController *)arg2;
- (void)documentListController:(_UIDocumentListController *)arg1 didSelectItemAtURL:(NSURL *)arg2;

@optional
- (void)documentListController:(_UIDocumentListController *)arg1 renameItemAtURL:(NSURL *)arg2 toName:(NSString *)arg3 completion:(void (^)(BOOL, BOOL))arg4;
- (UIViewController<_UIDocumentListControllerPreviewViewController> *)documentListController:(_UIDocumentListController *)arg1 viewControllerForPreviewingItemAtURL:(NSURL *)arg2;
- (void)documentListControllerURLWasRemoved:(_UIDocumentListController *)arg1;
- (void)documentListControllerItemsChanged:(_UIDocumentListController *)arg1;
- (BOOL)documentListController:(_UIDocumentListController *)arg1 shouldSelectItemAtURL:(NSURL *)arg2;
- (void)documentListController:(_UIDocumentListController *)arg1 didUnhighlightItemAtURL:(NSURL *)arg2;
- (void)documentListController:(_UIDocumentListController *)arg1 didHighlightItemAtURL:(NSURL *)arg2;
- (BOOL)documentListController:(_UIDocumentListController *)arg1 shouldHighlightItemAtURL:(NSURL *)arg2;
@end
