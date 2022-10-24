//
//  SensorManager.h
//  SensorManager
//
//  Created by Varun Mishra on 11/27/18.
//  Copyright © 2018 Varun Mishra. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import <CoreMotion/CoreMotion.h>
#import "PSBackgroundTask.h"
#import "INTULocationManager.h"
#import "AccelerometerTracker.h"
#import "LocationManager.h"
#import "Wifi.h"
#import "Bluetooth.h"
#import "PSSensingSettings.h"
#import "TimeTracker.h"
#import "Utils.h"
#import "DataManager.h"
@interface PSSensorManager : NSObject
{
    NSString* check;
    PSBackgroundTask * bgTask;
}

-(void)startSensing;
+ (PSSensorManager *)sharedInstance;
-(void)timeEvent;
- (void)insertData:(int)eventID eventData:(NSString *) eventData timestamp: (NSString*) timestampStr;
- (void)insertData:(int)eventID eventData:(void *) eventData withLen:(int)len timestamp: (NSString*) timestampStr;
- (void) upload:(BOOL) force;
- (void) startAllSensors;
- (void) dumpDb: (BOOL) force;

- (void)getHKPermissions;
- (void) prepareActivityUpdates:(NSString *)name completion:(void(^)(void))callback;
- (NSString *) getLastKnownActivity;
- (NSData *) getLastKnownLocation;
- (BOOL) getLastKnownScreen;
- (NSDictionary *) getLastKnownBattery;
- (float) getLastKnownBrightness;
- (BOOL) getLastKnownLockState;
- (NSDictionary *) getLastKnownWifi;

- (NSDictionary *) getLatestEMAQuestions;



@property (nonatomic, retain) NSString* check;
@property (nonatomic, assign) Boolean hasStarted, isLocked;
@property (strong) DataManager *dataManager;
@property (nonatomic, assign) Boolean activityReady;

@end
