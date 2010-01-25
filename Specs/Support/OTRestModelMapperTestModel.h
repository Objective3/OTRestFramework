//
//  OTRestModelMapperTestModel.h
//  OTRestFramework
//
//  Created by Timothy Kerchmar on 1/25/10.
//  Copyright 2010 The Night School, LLC. All rights reserved.
//

@interface OTRestModelMapperTestModel : NSObject
{
	NSString* _name;
	NSNumber* _age;
	NSDate* _createdAt;
}

@property (nonatomic,retain) NSString* name;
@property (nonatomic,retain) NSNumber* age;
@property (nonatomic,retain) NSDate* createdAt;

@end
