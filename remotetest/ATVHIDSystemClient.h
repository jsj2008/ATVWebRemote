//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SSDisplay, SSIndicatorLight;

@interface ATVHIDSystemClient : NSObject
{
    struct __IOHIDEventSystemClient *_hidSystemClient;	// 8 = 0x8
    struct __IOHIDServiceClient *_appleTVIRService;	// 16 = 0x10
    NSArray *_normalEventRouters;	// 24 = 0x18
    SSDisplay *_systemState;	// 32 = 0x20
    SSIndicatorLight *_sil;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x000000010003f4d0
- (void).cxx_destruct;	// IMP=0x00000001000416c4
- (void)_handleWillWakeNotification:(id)arg1;	// IMP=0x0000000100041140
- (void)_handleWillSleepNotification:(id)arg1;	// IMP=0x0000000100040cec
- (void)_setSILForButtonDown:(_Bool)arg1;	// IMP=0x0000000100040cd0
- (void)setSILStateForHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100040b80
- (void)setSILState_On;	// IMP=0x0000000100040a44
- (void)setSILState_Off;	// IMP=0x0000000100040908
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x000000010004084c
- (id)_propertyForKey:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100040814
- (void)wakeDisplay;	// IMP=0x00000001000406d8
- (void)sleepDisplay;	// IMP=0x000000010004059c
- (void)unpairAppleRemote;	// IMP=0x0000000100040520
- (void)pairAppleRemote;	// IMP=0x00000001000404a4
- (_Bool)isPairedWithAppleRemote;	// IMP=0x000000010004044c
- (id)mcuVersion;	// IMP=0x00000001000403ec
- (void)_processAppleVendorDebugEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000402cc
- (void)_processAppleVendorIRRemoteEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100040254
- (void)_processHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000401c4
- (void)setupHIDEventRouters;	// IMP=0x000000010003f910
- (void)dealloc;	// IMP=0x000000010003f86c
- (int)_init;	// IMP=0x000000010003f5a0
- (id)init;	// IMP=0x000000010003f524

@end

