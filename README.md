Ebblink iOS SDK
==============

A library to integrate Ebblink private image sharing capabilities into your iOS app.


Table of Contents
=================
**Getting Started**

1. [Requirements](#requirements)
2. [Setup](#setup)
3. [Quick Start](#quick-start)
4. [License](#license)


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



```Objective-C
+ (void)initWithToken:(NSString*)token andUserId:(NSString*)userId;
```
To get a token write us at info@fiveopenbooks.com
The userId is a parameter that identifies a unique user. You can use any string such the unique identifier, the user email, whatever.


##### Upload a new image

```Objective-C

+ (void) p3ImageUpload:(UIImage*)image duration:(NSNumber*) duration completion:(void (^)(NSString *imageId, NSString *deeplink, NSString *errorMessage))completionBlock;
```

##### View shared image

```Objective-C

+ (void) p3ImageView:(NSString*)imageId completion:(void (^)(UIImage *image, NSString *errorMessage))completionBlock;

```
##### Check image status

```Objective-C
+ (void) p3ImageStatus:(NSString*)imageId completion:(void (^)(NSDictionary *result, NSString *errorMessage))completionBlock;

```

##### Delete image shared image


```Objective-C
+ (void) p3ImageKill:(NSString*)imageId completion:(void (^)(BOOL success, NSString *errorMessage))completionBlock;

```


License
----------------

Copyright 2016 Five Open Books LLC. All rights reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
