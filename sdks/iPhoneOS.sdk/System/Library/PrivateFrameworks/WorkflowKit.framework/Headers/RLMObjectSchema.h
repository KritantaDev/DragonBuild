//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDictionary, NSString, RLMProperty;

@interface RLMObjectSchema : NSObject <NSCopying>
{
    BOOL _isSwiftClass;
    NSArray *_swiftGenericProperties;
    NSArray *_properties;
    NSString *_className;
    RLMProperty *_primaryKeyProperty;
    NSDictionary *_allPropertiesByName;
    Class _objectClass;
    Class _accessorClass;
    Class _unmanagedClass;
    NSArray *_computedProperties;
}

+ (id)objectSchemaForObjectStoreSchema:(const struct ObjectSchema )arg1;
+ (void)addSwiftProperties:(id)arg1 objectUtil:(Class)arg2 instance:(id)arg3 indexed:(id)arg4 nameMap:(id)arg5;
+ (id)propertiesForClass:(Class)arg1 isSwift:(BOOL)arg2;
+ (id)schemaForObjectClass:(Class)arg1;
@property(copy, nonatomic) NSArray *computedProperties; // @synthesize computedProperties=_computedProperties;
@property(nonatomic) Class unmanagedClass; // @synthesize unmanagedClass=_unmanagedClass;
@property(nonatomic) Class accessorClass; // @synthesize accessorClass=_accessorClass;
@property(nonatomic) Class objectClass; // @synthesize objectClass=_objectClass;
@property(nonatomic) BOOL isSwiftClass; // @synthesize isSwiftClass=_isSwiftClass;
@property(retain, nonatomic) NSDictionary *allPropertiesByName; // @synthesize allPropertiesByName=_allPropertiesByName;
@property(retain, nonatomic) RLMProperty *primaryKeyProperty; // @synthesize primaryKeyProperty=_primaryKeyProperty;
@property(retain, nonatomic) NSString *className; // @synthesize className=_className;
@property(copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *swiftGenericProperties;
- (struct ObjectSchema)objectStoreCopy:(id)arg1;
@property(readonly, nonatomic) NSString *objectName;
- (id)description;
- (BOOL)isEqualToObjectSchema:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)_propertiesDidChange;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithClassName:(id)arg1 objectClass:(Class)arg2 properties:(id)arg3;

@end
