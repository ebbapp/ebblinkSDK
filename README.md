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
To get a token send us email at info@fiveopenbooks.com

The userId is a parameter that identifies a unique user. You can use any string such that the
identifier is unique, for example the user email.
```Objective-C
+ (void)initWithToken:(NSString*)token andUserId:(NSString*)userId;
```

##### Set processing mode
There are two possible processing modes:
- ```Device```: the encryption and decryption of the image is performed on the user's device. This means that the image is uploaded to our servers fully encrypted.
- ```Server```: the encryption and decryption of the image is performed on our server. This means that during the network data transfer from our servers to the device the image is not encrypted. The processing time may vary depending on the device specifications. By default the processing mode is ```Device```.
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

[http://www.fiveopenbooks.com/terms](http://www.fiveopenbooks.com/terms)
