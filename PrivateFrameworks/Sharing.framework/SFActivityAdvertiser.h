/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class <SFActivityAdvertiserDelegate>, NSMutableDictionary, <SFActivityAdvertiserProtocol>, SFInternalAdvertisement;

@interface SFActivityAdvertiser : NSObject <SFCompanionXPCManagerObserver, SFActivityAdvertiserClient> {
    <SFActivityAdvertiserDelegate> *_delegate;
    <SFActivityAdvertiserProtocol> *_connectionProxy;
    SFInternalAdvertisement *_currentAdvertisement;
    NSMutableDictionary *_advertisementStringsToAdvertisementIdentifiers;
}

@property <SFActivityAdvertiserDelegate> * delegate;
@property(retain) <SFActivityAdvertiserProtocol> * connectionProxy;
@property(retain) SFInternalAdvertisement * currentAdvertisement;
@property(retain) NSMutableDictionary * advertisementStringsToAdvertisementIdentifiers;

+ (id)sharedAdvertiser;

- (void)setAdvertisementStringsToAdvertisementIdentifiers:(id)arg1;
- (id)advertisementStringsToAdvertisementIdentifiers;
- (void)advertiseContinuationIdentifier:(id)arg1 timestamp:(id)arg2 options:(id)arg3 payload:(id)arg4;
- (id)advertiseDomainNameFromWebBrowser:(id)arg1 timestamp:(id)arg2 options:(id)arg3 payload:(id)arg4;
- (void)didSendPayloadForAdvertisementIdentifier:(id)arg1 toDeviceIdentifier:(id)arg2 error:(id)arg3;
- (void)willSendPayloadForAdvertisementIdentifier:(id)arg1 toDeviceIdentifier:(id)arg2;
- (void)payloadForAdvertisementString:(id)arg1 withCompletionHandler:(id)arg2;
- (id)advertiseActivityTypeIdentifier:(id)arg1 timestamp:(id)arg2 options:(id)arg3 payload:(id)arg4;
- (id)advertiseActivityType:(id)arg1 timestamp:(id)arg2 options:(id)arg3 payload:(id)arg4;
- (void)activitiesDidBecomeIdle:(bool)arg1;
- (void)setCurrentAdvertisement:(id)arg1;
- (id)advertiseAdvertisementString:(id)arg1 isDomain:(bool)arg2 timestamp:(id)arg3 options:(id)arg4 payload:(id)arg5;
- (id)currentAdvertisement;
- (void)setConnectionProxy:(id)arg1;
- (id)connectionProxy;
- (void)xpcManagerConnectionInterrupted;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setupXPCConnection;
- (id)delegate;
- (void)dealloc;

@end