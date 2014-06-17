/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSData;

@interface GEOOriginalRoute : PBCodable <NSCopying> {
    NSData *_originalDirectionsResponseID;
    int _originalRoutePurpose;
    NSData *_routeHandle;
    struct { 
        unsigned int originalRoutePurpose : 1; 
    } _has;
}

@property bool hasOriginalRoutePurpose;
@property int originalRoutePurpose;
@property(readonly) bool hasRouteHandle;
@property(retain) NSData * routeHandle;
@property(readonly) bool hasOriginalDirectionsResponseID;
@property(retain) NSData * originalDirectionsResponseID;


- (id)originalDirectionsResponseID;
- (id)routeHandle;
- (int)originalRoutePurpose;
- (bool)hasOriginalDirectionsResponseID;
- (bool)hasRouteHandle;
- (bool)hasOriginalRoutePurpose;
- (void)setHasOriginalRoutePurpose:(bool)arg1;
- (void)setOriginalRoutePurpose:(int)arg1;
- (void)setOriginalDirectionsResponseID:(id)arg1;
- (void)setRouteHandle:(id)arg1;
- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end