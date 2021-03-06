//
//  BurgerData.h
//  Views
//
//  Created by Adam Schuster on 6/18/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BurgerData : NSObject{
    
    NSMutableArray *contentsList;
    NSMutableArray *itemsList;
    NSMutableArray *orderArchive;

}

+ (id)sharedInstance;

@property (nonatomic, strong) NSString *orderLabel;
@property (nonatomic, strong) NSString *bunType;
@property (nonatomic, strong) NSString *meatType;
@property (nonatomic, strong) NSString *cheeseType;

@property (nonatomic, retain) NSMutableArray *contentsList;
@property (nonatomic, retain) NSMutableArray *itemsList;
@property (nonatomic, retain) NSMutableArray *orderArchive;

@property BOOL editMode;



@property (nonatomic, assign) int itemCount;

-(void)storeItem;


@end
