//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TVSPreferences;

@interface PBScreenSaverManager : NSObject
{
    TVSPreferences *_screenSaverPrefs;	// 8 = 0x8
    _Bool _waitingForScreenSaverActivation;	// 16 = 0x10
    _Bool _holdOffForMusicEnabled;	// 17 = 0x11
    double _screenSaverActivationDelayInMinutes;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010000c19c
@property(nonatomic) _Bool holdOffForMusicEnabled; // @synthesize holdOffForMusicEnabled=_holdOffForMusicEnabled;
@property(nonatomic) double screenSaverActivationDelayInMinutes; // @synthesize screenSaverActivationDelayInMinutes=_screenSaverActivationDelayInMinutes;
- (void).cxx_destruct;	// IMP=0x000000010000d254
- (void)_notifyPhotosSourcesDaemon;	// IMP=0x000000010000d200
- (void)_updateActivationDelay;	// IMP=0x000000010000d17c
- (id)_screenSaverControllerClassNameForAppBundleID:(id)arg1;	// IMP=0x000000010000d084
- (id)_screenSaverAppBundleID;	// IMP=0x000000010000d018
- (void)_remoteViewControllerRequestDidCompleteWithResult:(id)arg1 userInitiated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010000cd88
- (void)_postSystemDidChangeIdleState:(_Bool)arg1;	// IMP=0x000000010000c9bc
@property(readonly, nonatomic) _Bool screenSaverIsActive;
- (_Bool)dismissScreenSaver;	// IMP=0x000000010000c80c
- (_Bool)activateScreenSaverFromUserAction:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000c42c
- (_Bool)activateScreenSaverFromUserAction:(_Bool)arg1;	// IMP=0x000000010000c41c
- (void)fetchInitialPhotoAssets;	// IMP=0x000000010000c410
- (id)init;	// IMP=0x000000010000c21c

@end

