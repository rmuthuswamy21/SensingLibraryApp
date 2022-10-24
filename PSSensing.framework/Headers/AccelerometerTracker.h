//
//  Created by Varun Mishra on 10/1/17.
//  Copyright © 2017 Varun Mishra. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreMotion/CoreMotion.h>

@interface AccelerometerTracker : NSObject

-(id)init;
-(void)uninit;

-(void)startPipeline;
-(void)stopPipeline;

@end
