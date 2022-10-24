//
//  Created by Varun Mishra on 10/1/17.
//  Copyright © 2017 Varun Mishra. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

//#import "ENEShareData.h"
@import HealthKit;

@interface HealthKitDataControl : NSObject


+(float)isIOSversion;
+ (void) setupHealthKit;
+ (void) setupHKPermissions;
+ (void) setupAndDumpHealthKit: (NSDate*)fromDate toDate:(NSDate*)toDate completion:(void (^)(bool success, NSError *error))completion;

//-------
+ (void)fetchDataOfQuantityType:(HKQuantityType *)quantityType startDate:(NSDate *)startDate endDate:(NSDate *)endDate withCompletion:(void (^)(HKQuantity *mostRecentQuantity, NSError *error))completion;
@end
//---------------------------
@interface HKUnit (HKManager)
+ (HKUnit *)heartBeatsPerMinuteUnit;
@end

@implementation HKUnit (HKManager)

+ (HKUnit *)heartBeatsPerMinuteUnit {
    return [[HKUnit countUnit] unitDividedByUnit:[HKUnit minuteUnit]];
}

@end
