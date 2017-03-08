//
//  EBUserStory.h
//  ebblinkSDK
//
//  Created by Pau Ballart on 05/03/2017.
//  Copyright © 2017 FiveOpenBooks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "EBUserStoryImage.h"

@interface EBUserStory : NSObject

- (instancetype)initWithUserId:(NSString*)userId;

- (void) appendImageStory:(EBUserStoryImage*) image;

- (NSString*) getStoryUserId;

- (NSArray*) getStoryImages;

@end
