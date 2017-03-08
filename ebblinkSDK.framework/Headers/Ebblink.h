//
//  Ebblink.h
//  ebblinkSDK
//
//  Created by Pau Ballart Godoy on 18/09/16.
//  Copyright © 2016 FiveOpenBooks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "EBUserStory.h"

/** The available processing modes for the Ebblink SDK. */
typedef enum EBProcessingMode : NSUInteger {
    /** The processing (encryption and decryption) of the image is performed on the device. */
    Device,
    /** The processing (encryption and decryption) of the image is performed on the server. */
    Server
} EBProcessingMode;

@interface Ebblink : NSObject

/*!
 @brief Initialize the SDK.
 
 @discussion This method initializes the SDK given a valid token and user id. This is the first method you need to call before using the SDK.
 
 @param  token Your unique token.
 
 @param  userId Your unique user id.
 */
+ (void)initWithToken:(NSString*)token andUserId:(NSString*)userId;

/*!
 @brief Sets the processing mode.
 
 @discussion This method changes the way the SDK processes the images.
 
 @param  processingMode The processing mode. There are two available options: @c Device and @c Server. @c Device makes all the encryption and decryption on the device, giving faster execution time whereas @c Server sends the plain image to the server and the processing is done there. Default is @c Device.
 */
+ (void)setProcessingMode:(EBProcessingMode)processingMode;

/*!
 @brief Sets the debug mode.
 
 @discussion This method enables the debug information in the console.
 
 @param  debugMode A boolean indicating if the debug logs should be printed in the console.
 */
+ (void)setDebugMode:(BOOL)debugMode;

/*!
 @brief Encrypts an image and saves it in the server.
 
 @discussion This method accepts an image and upload it to the server.
 
 @param  image The image.
 
 @param  duration The duration in seconds the image will be available, automatically being removed after that time.
 
 @param  completionBlock The completion block that will be executed when the processing is finished.
 */
+ (void) p3ImageUpload:(UIImage*)image duration:(NSNumber*) duration completion:(void (^)(NSString* imageId, NSString* password, NSString* publicLink, NSString* error))completionBlock;

/*!
 @brief Decrypts an image.
 
 @discussion This method accepts an image id and a matching password in order to decrypt it and present it to the user.
 
 @param  imageId The image id of the image.
 
 @param  password The password used to encrypt.
 
 @param  completionBlock The completion block that will be executed when the processing is finished.
 */
+ (void) p3ImageView:(NSString*)imageId withPassword:(NSString*)password completion:(void (^)(UIImage* image, NSString* error))completionBlock;

/*!
 @brief Retrieves information about an image.
 
 @discussion This method accepts an image id and retrieve information about the image.
 
 @param  imageId The image id of the image.
 
 @param  completionBlock The completion block that will be executed when the processing is finished.
 */
+ (void) p3ImageStatus:(NSString*)imageId completion:(void (^)(NSDictionary* dictionary, NSString* error))completionBlock;

/*!
 @brief Makes a shared image inmediately unavailable.
 
 @discussion This method accepts an image id and removes that image from the server, making it unavailable to anyone.
 
 @param  imageId The image id of the image.
 
 @param  completionBlock The completion block that will be executed when the processing is finished.
 */
+ (void) p3ImageKill:(NSString*)imageId completion:(void (^)(BOOL success, NSString* error))completionBlock;

/*!
 @brief Encrypts an image and saves it in the server as a story.
 
 @discussion This method accepts an image and uploads to the server as an story. A story is linked to the user and available during 24h.
 
 @param  image The image.
 
 @param  completionBlock The completion block that will be executed when the processing is finished.
 */
+ (void) p3ImageStoryUpload:(UIImage*)image completion:(void (^)(NSString* imageId, NSString* error))completionBlock;

/*!
 @brief Gets a user story.
 
 @discussion This method accepts a user id and gets it's story from the server.
 
 @param  userId The user id.
 
 @param  completionBlock The completion block that will be executed when the processing is finished.
 */
+ (void) p3UserStoryView:(NSString*)userId completion:(void (^)(EBUserStory *story, NSString* error))completionBlock;

@end
