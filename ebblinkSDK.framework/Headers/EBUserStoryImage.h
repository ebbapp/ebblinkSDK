//
//  EBUserStoryImage.h
//  ebblinkSDK
//
//  Created by Pau Ballart on 05/03/2017.
//  Copyright © 2017 FiveOpenBooks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface EBUserStoryImage : NSObject

- (instancetype)initWithImage:(UIImage*)image
           andRemainingSeconds:(NSInteger)seconds;

- (UIImage*) getImage;

-(NSInteger) getRemainingSeconds;

@end
