//
//  TestSerializationAssociation.m
//  OTRestFramework
//
//  Created by Jeremy Ellison on 8/17/09.
//  Copyright 2009 Two Toasters. All rights reserved.
//

#import "TestSerializationAssociation.h"


@implementation TestSerializationAssociation

@synthesize testString = _testString;

+ (NSDictionary*)elementToPropertyMappings {
	return [NSDictionary dictionaryWithObjectsAndKeys:@"testString", @"test_string", nil];
}

+ (NSDictionary*)elementToRelationshipMappings {
	return [NSDictionary dictionary];
}

@end