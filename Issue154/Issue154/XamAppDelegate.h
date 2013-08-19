//
//  XamAppDelegate.h
//  Issue154
//
//  Created by Joshua Moody on 19.8.13.
//  Copyright (c) 2013 LJS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XamAppDelegate : UIResponder <UIApplicationDelegate, UITabBarControllerDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) UITabBarController *tabBarController;

@end
