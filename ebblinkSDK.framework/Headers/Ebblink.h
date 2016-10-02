//
//  Ebblink.h
//  ebblinkSDK
//
//  Created by Pau Ballart Godoy on 18/09/16.
//  Copyright © 2016 FiveOpenBooks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Ebblink : NSObject

+ (void)initWithToken:(NSString*)token andUserId:(NSString*)userId;

+ (void) p3ImageUpload:(UIImage*)image duration:(NSNumber*) duration completion:(void (^)(NSString*, NSString*, NSString*))completionBlock;

+ (void) p3ImageView:(NSString*)imageId completion:(void (^)(UIImage*, NSString*))completionBlock;

+ (void) p3ImageStatus:(NSString*)imageId completion:(void (^)(NSDictionary*, NSString*))completionBlock;

+ (void) p3ImageKill:(NSString*)imageId completion:(void (^)(BOOL, NSString*))completionBlock;

@end
