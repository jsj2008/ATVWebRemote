//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBScene, NSString, UIView<FBSceneHostView>;

@interface PBAppContextHostView : UIView
{
    UIView<FBSceneHostView> *_sceneHostView;	// 8 = 0x8
    UIView *_snapshotView;	// 16 = 0x10
    FBScene *_scene;	// 24 = 0x18
    NSString *_bundleID;	// 32 = 0x20
    NSString *_requester;	// 40 = 0x28
}

@property(readonly, copy, nonatomic) NSString *requester; // @synthesize requester=_requester;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) FBScene *scene; // @synthesize scene=_scene;
- (void).cxx_destruct;	// IMP=0x000000010003cdc4
- (void)didMoveToSuperview;	// IMP=0x000000010003cbf4
- (void)layoutSubviews;	// IMP=0x000000010003cb70
- (id)description;	// IMP=0x000000010003ca40
- (id)initWithFrame:(struct CGRect)arg1 bundleID:(id)arg2 requester:(id)arg3 preferSnapshot:(_Bool)arg4 opaque:(_Bool)arg5;	// IMP=0x000000010003c7dc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010003c790
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010003c74c

@end

