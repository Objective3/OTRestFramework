//
//  OTResident.h
//  OTRestFramework
//
//  Created by Jeremy Ellison on 1/14/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import "OTRestManagedModel.h"


@class OTHouse;

@interface OTResident :  OTRestManagedModel  
{
}

@property (nonatomic, retain) NSString* residableType;
@property (nonatomic, retain) NSNumber* railsID;
@property (nonatomic, retain) NSNumber* residableId;
@property (nonatomic, retain) NSNumber* houseId;
@property (nonatomic, retain) OTHouse* house;

@end



