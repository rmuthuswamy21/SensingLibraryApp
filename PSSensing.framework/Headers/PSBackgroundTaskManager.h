//
//  PSBackgroundTaskManager.h
//
//
//  Created by Varun Mishra on 10/1/17.
//  Copyright © 2017 Varun Mishra. All rights reserved.
//

#import <Foundation/Foundation.h>
@import UIKit;
@interface PSBackgroundTaskManager : NSObject

+(instancetype)sharedBackgroundTaskManager;

-(UIBackgroundTaskIdentifier)beginNewBackgroundTask;
-(void)endBackgroundTasks;
-(void)endAllBackgroundTasks;

@end
