//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  4 2016 10:44:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface IGDirectThreadMerger : NSObject
{
}

- (void)updateCursorForOldThread:(id)arg1 intoThread:(id)arg2;
- (void)mergePendingMessagesFromThread:(id)arg1 intoThread:(id)arg2;
- (void)mergePublishedContentFromThread:(id)arg1 intoThread:(id)arg2;
- (void)mergeLastActivityDateFromThread:(id)arg1 intoThread:(id)arg2;
- (void)mergeLastSeenFromThread:(id)arg1 intoThread:(id)arg2;
- (_Bool)shouldMergeFromThread:(id)arg1 intoThread:(id)arg2;
- (id)threadByCombiningDataFromThread:(id)arg1 intoThread:(id)arg2 alwaysMerge:(_Bool)arg3;

@end

