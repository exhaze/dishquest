//
//  AppController.h
//  Untitled
//
//  Created by exhaze on 1/21/12.
//  Copyright Unified Color Technologies 2012. All rights reserved.
//

@class RootViewController;

@interface AppController : NSObject <UIAccelerometerDelegate, UIAlertViewDelegate, UITextFieldDelegate,UIApplicationDelegate> {
    UIWindow *window;
    RootViewController	*viewController;
}

@end

