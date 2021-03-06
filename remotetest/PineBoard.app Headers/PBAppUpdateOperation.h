//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "LSApplicationWorkspaceObserverProtocol.h"
#import "SSDownloadManagerObserver.h"

@class FBSApplicationTerminationAssertion, NSError, NSString, SSDownload, SSPurchase;

@interface PBAppUpdateOperation : NSOperation <SSDownloadManagerObserver, LSApplicationWorkspaceObserverProtocol>
{
    int __state;	// 24 = 0x18
    int __ordinal;	// 28 = 0x1c
    NSString *__bundleID;	// 32 = 0x20
    FBSApplicationTerminationAssertion *__termAssertion;	// 40 = 0x28
    SSDownload *__download;	// 48 = 0x30
    NSError *__myError;	// 56 = 0x38
    SSPurchase *__pendingPurchase;	// 64 = 0x40
    NSString *_adamID;	// 72 = 0x48
    NSString *_externalVersionID;	// 80 = 0x50
}

+ (void)__newWithAdamID:(id)arg1 externalVersionID:(id)arg2 buyParams:(id)arg3 bundleID:(id)arg4 dsid:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000001000853dc
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00000001000852ec
@property(readonly) NSString *externalVersionID; // @synthesize externalVersionID=_externalVersionID;
@property(readonly) NSString *adamID; // @synthesize adamID=_adamID;
- (void).cxx_destruct;	// IMP=0x0000000100088c10
- (void)applicationsDidFailToInstall:(id)arg1;	// IMP=0x0000000100088a00
- (void)applicationInstallsDidCancel:(id)arg1;	// IMP=0x0000000100088810
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x0000000100088620
- (long long)__bytesTotal;	// IMP=0x0000000100088608
- (long long)__bytesDownloaded;	// IMP=0x00000001000885f0
@property(readonly) double percentComplete;
@property(readonly) NSError *failureError;
@property(readonly) NSString *downloadPhaseIdentifier;
- (void)download:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000100088310
- (void)purchase:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000001000881e4
- (void)resume;	// IMP=0x00000001000881cc
- (void)pause;	// IMP=0x00000001000881b4
- (void)__finish;	// IMP=0x0000000100087f3c
- (void)start;	// IMP=0x0000000100087264
- (_Bool)isReady;	// IMP=0x0000000100087204
- (_Bool)isFinished;	// IMP=0x00000001000871ec
- (_Bool)isExecuting;	// IMP=0x00000001000871d4
@property(readonly, getter=isInitialized) _Bool initialized;
- (_Bool)isAsynchronous;	// IMP=0x00000001000871b4
- (void)dealloc;	// IMP=0x0000000100087158
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

