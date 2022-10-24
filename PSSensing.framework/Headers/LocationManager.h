//
//  LocationManager.h
//  TestBackground
//
//  Created by Varun Mishra on 9/2/17.
//  Copyright © 2017 Varun Mishra. All rights reserved.
//
#import <CoreLocation/CoreLocation.h>

@interface LocationManager : CLLocationManager

- (void)startUpdatingLocation;
+ (instancetype)sharedInstance;
@end
