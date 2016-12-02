Ebblink iOS SDK
==============

A library to integrate Ebblink private image sharing capabilities into your iOS app.


Table of Contents
=================
**Getting Started**

1. [Requirements](#requirements)
2. [Setup](#setup)
3. [Quick Start](#quick-start)
4. [Terms and Conditions](#terms-and-conditions)


Requirements
--------------

- iOS 8+


Setup
-------------

Add the following to your Podfile:

```sh

pod 'ebblinkSDK', :git => 'https://github.com/ebbapp/ebblinkSDK'
```


Quick Start
-------------


##### Instantiate Ebblink iOS SDK
To get a token write us at info@fiveopenbooks.com
The userId is a parameter that identifies a unique user. You can use any string such the unique identifier, the user email, whatever.
```Objective-C
+ (void)initWithToken:(NSString*)token andUserId:(NSString*)userId;
```

##### Set processing mode
By default the processing is done on the device. Optionally, you can select that the processing happens on the server.
```Objective-C

+ (void)setProcessingMode:(EBProcessingMode)processingMode;
```

##### Upload a new image

```Objective-C

+ (void) p3ImageUpload:(UIImage*)image duration:(NSNumber*) duration completion:(void (^)(NSString* imageId, NSString* password, NSString* publicLink, NSString* error))completionBlock;
```

##### View shared image

```Objective-C

+ (void) p3ImageView:(NSString*)imageId withPassword:(NSString*)password completion:(void (^)(UIImage* image, NSString* error))completionBlock;

```
##### Check image status

```Objective-C
+ (void) p3ImageStatus:(NSString*)imageId completion:(void (^)(NSDictionary* dictionary, NSString* error))completionBlock;

```

##### Delete image shared image


```Objective-C
+ (void) p3ImageKill:(NSString*)imageId completion:(void (^)(BOOL success, NSString* error))completionBlock;

```


Terms and Conditions
----------------

You can find our terms and conditions in the following url:

    http://www.fiveopenbooks.com/terms

