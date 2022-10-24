//
//  ScreenEvents.h
//  SensorManager
//
//  Created by Varun Mishra on 12/9/18.
//  Copyright © 2018 Varun Mishra. All rights reserved.
//


#import <UIKit/UIKit.h>

@interface ScreenEvents : NSObject

- (void) registerLockUnlock;
- (void) registerScreenBrightnessUpdates;
@end
