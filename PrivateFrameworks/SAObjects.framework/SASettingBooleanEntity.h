/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingBooleanEntity : SASettingEntity

@property (nonatomic, copy) NSNumber *previousValue;
@property (nonatomic) BOOL value;

+ (id)booleanEntity;
+ (id)booleanEntityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)booleanEntityWithValue:(BOOL)arg1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)initWithValue:(BOOL)arg1;
- (id)previousValue;
- (void)setPreviousValue:(id)arg1;
- (void)setValue:(BOOL)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (BOOL)value;

@end