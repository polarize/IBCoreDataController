//
//  IBCoreDataController.h
//
//
//  Created by Issam Bendaas on 5/14/12.
//


#import <CoreData/CoreData.h>

@interface IBCoreDataController : NSObject

+ (id)sharedInstance;

- (NSURL *)applicationDocumentsDirectory;

//- (NSManagedObjectContext *)masterManagedObjectContext;
//- (NSManagedObjectContext *)backgroundManagedObjectContext;
//- (NSManagedObjectContext *)newManagedObjectContext;

- (void)saveParentContext;
- (void)saveChildContext;
-(void)saveWithBlock:(void (^)(NSError *error))block;
- (NSManagedObjectModel *)managedObjectModel;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;

//////////////////////
- (NSManagedObjectContext *)parentManagedObjectContext;
- (NSManagedObjectContext *)childManagedObjectContext;

@end
