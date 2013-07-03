/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIClientContext, UIImageView, UILabel, SKUIGiftItemView, SKUIGift, UIImage, SKUIGiftTheme;

@interface SKUIGiftThemeCollectionViewCell : UICollectionViewCell  {
    SKUIClientContext *_clientContext;
    SKUIGift *_gift;
    UIImageView *_headerImageView;
    SKUIGiftItemView *_itemView;
    UILabel *_messageLabel;
    UILabel *_priceLabel;
    UILabel *_senderNameLabel;
    UILabel *_senderNameLabelLabel;
    SKUIGiftTheme *_theme;
}

@property(retain) SKUIClientContext * clientContext;
@property(retain) SKUIGift * gift;
@property(retain) SKUIGiftTheme * theme;
@property(retain) UIImage * itemImage;


- (void)_reloadItemView;
- (void)_setPrice:(id)arg1;
- (void)_setSenderName:(id)arg1;
- (void)_setMessage:(id)arg1;
- (void)_setHeaderImage:(id)arg1;
- (id)itemImage;
- (void)reloadThemeHeaderImage;
- (void)setGift:(id)arg1;
- (void)setItemImage:(id)arg1;
- (id)_itemView;
- (id)gift;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (void)setTheme:(id)arg1;
- (id)theme;
- (void)setBackgroundColor:(id)arg1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end