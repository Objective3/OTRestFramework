//
//  OTRestParamsFileAttachment.h
//  OTRestFramework
//
//  Created by Blake Watters on 8/6/09.
//  Copyright 2009 Two Toasters. All rights reserved.
//

#import "OTRestParamsAttachment.h"

@interface OTRestParamsFileAttachment : OTRestParamsAttachment {
	NSString* _filePath;
}

/**
 * The path to this file attachment on disk
 */
@property (nonatomic, retain) NSString* filePath;

@end
