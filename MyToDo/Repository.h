//
//  Repository.h
//  MyToDo
//
//  Created by Adauto Francisco Leite Neto on 4/12/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol Repository <NSObject>

- (id)getAll;
- (void)save:(id)item;

@end
