//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBApplicationUpdateScenesTransactionObserver.h"

@class NSString;

@interface _TVSPMApplicationUpdateScenesTransactionOberver : NSObject <FBApplicationUpdateScenesTransactionObserver>
{
    CDUnknownBlockType _resultBlock;	// 8 = 0x8
}

+ (id)applicationUpdateScenesTransactionOberverWithResultBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100099ed8
- (void).cxx_destruct;	// IMP=0x000000010009a008
- (void)transactionDidComplete:(id)arg1;	// IMP=0x0000000100099fe8
- (void)transaction:(id)arg1 willLaunchProcess:(id)arg2;	// IMP=0x0000000100099f58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

