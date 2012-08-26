//
//  Tag.h
//  MyToDo
//
//  Created by Adauto Francisco Leite Neto on 8/26/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Task;

@interface Tag : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet *tasks;
@property (nonatomic, retain) NSSet *folders;
@end

@interface Tag (CoreDataGeneratedAccessors)

- (void)addTasksObject:(Task *)value;
- (void)removeTasksObject:(Task *)value;
- (void)addTasks:(NSSet *)values;
- (void)removeTasks:(NSSet *)values;

- (void)addFoldersObject:(NSManagedObject *)value;
- (void)removeFoldersObject:(NSManagedObject *)value;
- (void)addFolders:(NSSet *)values;
- (void)removeFolders:(NSSet *)values;

@end
