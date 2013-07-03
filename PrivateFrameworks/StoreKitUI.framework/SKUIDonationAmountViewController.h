/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIGiftValidator, SKUIGiftPurchaseRequest, SKUIDonationAmountView, SKUIGiftValidationResponse;

@interface SKUIDonationAmountViewController : SKUIDonationStepViewController <SKUIDonationConfigurationObserver> {
    SKUIDonationAmountView *_amountView;
    SKUIGiftValidationResponse *_lastValidationResponse;
    SKUIGiftPurchaseRequest *_purchaseRequest;
    BOOL _tappedNextWhileValidating;
    SKUIGiftValidator *_validator;
}


- (void)donationConfigurationController:(id)arg1 didLoadLogoForCharity:(id)arg2;
- (void)_reenableAfterFailure;
- (void)_setDonationButtonEnabled:(BOOL)arg1;
- (void)_performActionAfterValidation;
- (void)_validateDonation:(id)arg1;
- (void)_amountChangedNotification:(id)arg1;
- (void)_donateButtonAction:(id)arg1;
- (id)initWithCharity:(id)arg1 configuration:(id)arg2;
- (void)_finishPurchaseWithResult:(BOOL)arg1 errorMessage:(id)arg2;
- (void)_finishValidationWithResponse:(id)arg1 error:(id)arg2;
- (void)_cancelButtonAction:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;

@end