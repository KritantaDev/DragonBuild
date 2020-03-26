//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class ICNote, ICShareNoteExporter;

@interface ICNoteRTFDActivityItemSource : NSObject <UIActivityItemSource>
{
    ICNote *_note;
    ICShareNoteExporter *_noteExporter;
}

@property(retain, nonatomic) ICShareNoteExporter *noteExporter; // @synthesize noteExporter=_noteExporter;
@property(retain, nonatomic) ICNote *note; // @synthesize note=_note;
// - (void).cxx_destruct;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)initWithNote:(id)arg1 noteExporter:(id)arg2;
- (id)init;

@end
