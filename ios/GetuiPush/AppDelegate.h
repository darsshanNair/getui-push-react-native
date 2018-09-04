/**
 * Copyright (c) 2015-present, Facebook, Inc.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>
#import <RCTGetuiModule/RCTGetuiModule.h>
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_10_0
#import <UserNotifications/UserNotifications.h>
#endif
#define kGtAppId @"fy3xUu9tU56K4BhEH3jKm5"
#define kGtAppKey @"ToCSqCQX5HAdof3o2fOxkA"
#define kGtAppSecret @"d0M5ixAcQZ8mODyANv6gJ6"


@interface AppDelegate : UIResponder <UIApplicationDelegate,UNUserNotificationCenterDelegate,GeTuiSdkDelegate>

@property (nonatomic, strong) UIWindow *window;

@end
