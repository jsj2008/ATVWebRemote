//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBUserNotificationViewControllerAlert.h"

#import "UITextFieldDelegate.h"

@class NSArray, NSMutableArray, NSString;

@interface PBUserNotificationViewControllerTextField : PBUserNotificationViewControllerAlert <UITextFieldDelegate>
{
    NSMutableArray *_enteredValues;	// 8 = 0x8
    NSMutableArray *_textFields;	// 16 = 0x10
}

@property(readonly, nonatomic) NSArray *enteredValues; // @synthesize enteredValues=_enteredValues;
- (void).cxx_destruct;	// IMP=0x0000000100051320
- (_Bool)_isLoginDialog;	// IMP=0x00000001000511e0
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x0000000100051120
- (void)setNotification:(id)arg1;	// IMP=0x00000001000509c4
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100050914

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

