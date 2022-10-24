//
//  Created by Varun Mishra on 10/1/17.
//  Copyright © 2017 Varun Mishra. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIKit.h>
#import "PSBackgroundTaskManager.h"

@interface PSBackgroundTask : NSObject
{
    __block UIBackgroundTaskIdentifier bgTask;
    __block dispatch_block_t expirationHandler;
    __block NSTimer * shortTimer;
    __block NSTimer * locationTimer;
    __block NSTimer * longTimer;
    
    NSInteger timerInterval;
    id target;
    SEL shortTimeSelector;
    SEL locationSelector;
    SEL longTimeSelector;
}
@property (nonatomic) PSBackgroundTaskManager * bgTaskRun;

-(void) startBackgroundTasks:(NSInteger)time_ target:(id)target_ selector:(SEL)locationSelector_;
-(void) stopBackgroundTask;

@end
