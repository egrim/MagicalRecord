//
//  NSManagedObject+JSONHelpers.h
//  Gathering
//
//  Created by Saul Mora on 6/28/11.
//  Copyright 2011 Magical Panda Software LLC. All rights reserved.
//

#import <CoreData/CoreData.h>

extern NSString * const kMagicalRecordImportCustomDateFormatKey;
extern NSString * const kMagicalRecordImportDefaultDateFormatString;
extern NSString * const kMagicalRecordImportAttributeKeyMapKey;
extern NSString * const kMagicalRecordImportAttributeValueClassNameKey;

extern NSString * const kMagicalRecordImportRelationshipMapKey;
extern NSString * const kMagicalRecordImportRelationshipPrimaryKey;
extern NSString * const kMagicalRecordImportRelationshipTypeKey;

@interface NSManagedObject (MagicalRecord_DataImport)

- (NSString *) MR_primaryKeyAttributeName;

- (BOOL) MR_importValuesForKeysWithObject:(id)objectData;
- (BOOL) MR_updateValuesForKeysWithObject:(id)objectData;

+ (id) MR_importFromObject:(id)data;
+ (id) MR_importFromObject:(id)data inContext:(NSManagedObjectContext *)context;

+ (NSArray *) MR_importFromArray:(NSArray *)listOfObjectData;
+ (NSArray *) MR_importFromArray:(NSArray *)listOfObjectData inContext:(NSManagedObjectContext *)context;

+ (NSArray *) MR_updateFromArray:(NSArray *)listOfObjectData;
+ (NSArray *) MR_updateFromArray:(NSArray *)listOfObjectData inContext:(NSManagedObjectContext *)context;

+ (id) MR_updateFromObject:(id)objectData;
+ (id) MR_updateFromObject:(id)objectData inContext:(NSManagedObjectContext *)context;

@end
