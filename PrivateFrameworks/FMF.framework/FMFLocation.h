/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@class NSString, FMFHandle, CLLocation, NSDate;

@interface FMFLocation : NSObject <NSCopying, NSSecureCoding, MKAnnotation> {
    bool_locatingInProgress;
    FMFHandle *_handle;
    CLLocation *_location;
    NSString *_longAddress;
    NSDate *_timestamp;
    NSString *_label;
    NSString *_shortAddressString;
    double _maxLocatingInterval;
    double _TTL;
}

@property(retain) FMFHandle * handle;
@property(retain) CLLocation * location;
@property(copy,readonly) NSString * shortAddress;
@property(copy) NSString * longAddress;
@property(copy) NSDate * timestamp;
@property(getter=isLocatingInProgress) bool locatingInProgress;
@property(readonly) struct { double x1; double x2; } coordinate;
@property(retain) NSString * label;
@property(copy) NSString * shortAddressString;
@property double maxLocatingInterval;
@property double TTL;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * title;
@property(copy,readonly) NSString * subtitle;

+ (bool)supportsSecureCoding;

- (void)updateHandle:(id)arg1;
- (id)locationShortAddressWithAgeIncludeLocating;
- (id)initWithDictionary:(id)arg1 forHandle:(id)arg2 maxLocatingInterval:(double)arg3 TTL:(double)arg4;
- (void)resetLocateInProgress:(id)arg1;
- (void)resetLocateInProgressTimer;
- (id)locationShortAddressWithAge;
- (id)locationAge;
- (id)shortAddress;
- (double)TTL;
- (double)maxLocatingInterval;
- (void)setLocatingInProgress:(bool)arg1;
- (bool)isLocatingInProgress;
- (id)longAddress;
- (id)shortAddressString;
- (void)setLongAddress:(id)arg1;
- (void)setShortAddressString:(id)arg1;
- (void)setTTL:(double)arg1;
- (void)setMaxLocatingInterval:(double)arg1;
- (void)updateLocation:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)location;
- (id)timestamp;
- (struct { double x1; double x2; })coordinate;
- (id)title;
- (void)setTimestamp:(id)arg1;
- (id)label;
- (void)setLocation:(id)arg1;
- (void)setHandle:(id)arg1;
- (id)handle;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setLabel:(id)arg1;
- (id)subtitle;

@end