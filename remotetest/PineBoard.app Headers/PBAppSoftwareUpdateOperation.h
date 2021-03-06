//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSArray, NSLock, NSMutableArray;

@interface PBAppSoftwareUpdateOperation : NSOperation
{
    int __state;	// 24 = 0x18
    int __ordinal;	// 28 = 0x1c
    NSLock *__lock;	// 32 = 0x20
    NSMutableArray *__unfinishedOperations;	// 40 = 0x28
    unsigned int __powerAssertion;	// 48 = 0x30
    id __self;	// 56 = 0x38
    NSArray *_operations;	// 64 = 0x40
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0000000100082224
@property(readonly) NSArray *operations; // @synthesize operations=_operations;
- (void).cxx_destruct;	// IMP=0x000000010008519c
- (void)__updateApps;	// IMP=0x000000010008502c
- (void)__processAppSoftwareUpdateResponse:(id)arg1;	// IMP=0x0000000100084568
- (void)__computeInstalledSoftwareWithAskToBuyEnabled:(_Bool)arg1;	// IMP=0x0000000100083694
- (void)__computeFamilyAccountInfo;	// IMP=0x0000000100083484
@property(readonly) double percentComplete;
@property(readonly) _Bool hadFailures;
- (void)resume;	// IMP=0x0000000100082d6c
- (void)pause;	// IMP=0x0000000100082c5c
- (void)cancel;	// IMP=0x0000000100082b2c
- (void)__finish;	// IMP=0x0000000100082884
- (void)start;	// IMP=0x00000001000824d4
- (_Bool)isFinished;	// IMP=0x00000001000824bc
- (_Bool)isExecuting;	// IMP=0x00000001000824a4
- (_Bool)isAsynchronous;	// IMP=0x000000010008249c
- (id)init;	// IMP=0x00000001000822fc

@end

