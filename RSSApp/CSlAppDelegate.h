//
//  CSlAppDelegate.h
//  RSSApp
//
//  Created by mrStiher on 28.07.13.
//  Copyright (c) 2013 mrStiher. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CSlAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
