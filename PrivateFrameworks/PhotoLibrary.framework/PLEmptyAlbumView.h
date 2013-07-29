/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIImageView, UIImage, NSString, UILabel, UILongPressGestureRecognizer, NSObject<PLAlbumProtocol>;

@interface PLEmptyAlbumView : UIView  {
    UIImage *_image;
    UIImage *_landscapeImage;
    NSString *_title;
    NSString *_message;
    struct NSObject { Class x1; } *_album;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UILongPressGestureRecognizer *_longPressRecognizer;
    int _filter;
    BOOL _isCameraAlbum;
    BOOL _useLargeImages;
    BOOL _filterInUse;
    int _currentOrientation;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _edgeInsets;
    BOOL _isSharedPhotoStreamList;
}

@property(retain) NSObject<PLAlbumProtocol> * album;
@property int filter;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;


- (void)setIsSharedPhotoStreamList:(BOOL)arg1;
- (void)setIsCameraAlbum:(BOOL)arg1;
- (void)setPortraitImage:(id)arg1 landscapeImage:(id)arg2;
- (id)_emptyRollImageForAlbum:(struct NSObject { Class x1; }*)arg1 interfaceOrientation:(int)arg2;
- (void)_sizeLabelToFitView:(id)arg1;
- (id)_newTextViewWithText:(id)arg1;
- (id)_messageForAlbum:(struct NSObject { Class x1; }*)arg1;
- (id)_newLabelWithText:(id)arg1;
- (id)_titleForAlbum:(struct NSObject { Class x1; }*)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 useLargeImages:(BOOL)arg2;
- (void)_longPressGesture:(id)arg1;
- (struct NSObject { Class x1; }*)album;
- (void)setAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)filter;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (void)setEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setMessage:(id)arg1;
- (void)paste:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (void)setFilter:(int)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)layoutSubviews;

@end