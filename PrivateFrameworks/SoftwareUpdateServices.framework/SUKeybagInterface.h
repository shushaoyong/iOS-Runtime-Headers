/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUKeybagInterface : NSObject {
    NSObject<OS_dispatch_queue> * _observerCalloutQueue;
    NSObject<OS_dispatch_queue> * _queue;
    BOOL  _queue_hasPasscodeSet;
    BOOL  _queue_isPasscodeLocked;
    NSHashTable * _queue_observers;
    int  _stateChangedNotifyToken;
}

@property (nonatomic, readonly) BOOL hasPasscodeSet;
@property (nonatomic, readonly) BOOL isPasscodeLocked;

// Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices

+ (id)sharedInstance;

- (id)_init;
- (int)_queue_fetchKeybagState;
- (BOOL)_queue_hasPasscodeSetFromLockState:(int)arg1;
- (BOOL)_queue_isPasscodeLockedFromLockState:(int)arg1;
- (void)_queue_refreshState;
- (void)_queue_setHasPasscodeSet:(BOOL)arg1;
- (void)_queue_setIsPasscodeLocked:(BOOL)arg1;
- (void)addObserver:(id)arg1;
- (BOOL)createInstallationKeybagForDescriptor:(id)arg1 withSecret:(id)arg2 forUnattendedInstall:(BOOL)arg3;
- (id)createPreventLockAssertionWithDuration:(double)arg1;
- (void)dealloc;
- (BOOL)disableKeybagStash;
- (BOOL)hasPasscodeSet;
- (id)init;
- (int)installationKeybagStateForDescriptor:(id)arg1;
- (BOOL)isPasscodeLocked;
- (BOOL)persistKeybagStash;
- (void)removeObserver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI

- (BOOL)authenticate:(id)arg1;
- (double)backOffTime;
- (void)lockDevice;

@end