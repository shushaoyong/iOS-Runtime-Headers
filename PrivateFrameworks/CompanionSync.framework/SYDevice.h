/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYDevice : NSObject <NRDevicePropertyObserver, SYStateLoggable> {
    BOOL  _cachedIsNearby;
    BOOL  _hasCachedNearby;
    NRDevice * _nrDevice;
    NSUUID * _pairingID;
    int  _state;
}

@property (getter=isActive, nonatomic, readonly) BOOL active;
@property (nonatomic) BOOL cachedIsNearby;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceClass;
@property (nonatomic, readonly) int deviceCode;
@property (nonatomic) BOOL hasCachedNearby;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSDate *lastActiveDate;
@property (nonatomic, readonly) NRDevice *nrDevice;
@property (getter=isPaired, nonatomic, readonly) BOOL paired;
@property (nonatomic, readonly) NSUUID *pairingID;
@property (nonatomic, readonly, copy) NSString *pairingStorePath;
@property (nonatomic) int state;
@property (nonatomic, readonly) PBCodable *stateForLogging;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL supportsFileTransferMessageSend;
@property (nonatomic, readonly) NSString *systemBuildVersion;
@property (nonatomic, readonly) NSString *systemVersion;
@property (getter=isTargetable, nonatomic, readonly) BOOL targetable;

+ (id)deviceForIDSDevice:(id)arg1;
+ (id)deviceForIDSDeviceID:(id)arg1 fromList:(id)arg2;
+ (id)deviceForNRDevice:(id)arg1;
+ (id)knownDevices;
+ (id)targetableDevice;

- (void).cxx_destruct;
- (void)_updateStateFlagsPostingNotifications:(BOOL)arg1;
- (BOOL)cachedIsNearby;
- (id)debugDescription;
- (id)description;
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;
- (id)deviceClass;
- (int)deviceCode;
- (id)findMatchingIDSDeviceFromList:(id)arg1;
- (BOOL)hasCachedNearby;
- (id)init;
- (id)initWithNRDevice:(id)arg1;
- (BOOL)isActive;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPaired;
- (BOOL)isTargetable;
- (id)lastActiveDate;
- (id)nrDevice;
- (id)pairingID;
- (id)pairingStorePath;
- (void)setCachedIsNearby:(BOOL)arg1;
- (void)setHasCachedNearby:(BOOL)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (id)stateForLogging;
- (BOOL)supportsFileTransferMessageSend;
- (id)systemBuildVersion;
- (id)systemVersion;

@end
