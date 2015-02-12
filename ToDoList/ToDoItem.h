//
//  ToDoItem.h
//  ToDoList
//
//  Created by Student on 2/10/15.
//  Copyright (c) 2015 Student. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
