//
//  SensingSettings.h
//  SensorManager
//
//  Created by Varun Mishra on 11/19/18.
//  Copyright © 2018 Varun Mishra. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface PSSensingSettings : NSObject
{
    BOOL SHOW_LOGS;
    
    NSString *ONE_SIGNAL_APP_ID;
    BOOL UPLOAD_DATA;
    NSString *UPLOAD_URL;
    
    
    //DB Settings
    NSString *DB_LIVE_DIR;
    NSString *DB_LIVE_FILENAME;
    NSString *DB_ARCHIVE_DIR;
    NSString *DB_ARCHIVE_FILENAME_FORMAT;
    NSString *DB_DISPATCH_QUEUE;
    
    //Sensor Settings
    BOOL ENABLE_BATTERY_EVENTS;
    BOOL ENABLE_SCREEN_BRIGHTNESS_EVENTS;
    BOOL ENABLE_LOCK_UNLOCK_EVENTS;
    BOOL ENABLE_LOCATION_UPDATES;
    BOOL ENABLE_ACTIVITY_UPDATES;
    BOOL ENABLE_ACTIVITY_DUMP;
    BOOL ENABLE_HK_DUMP;
    BOOL ENABLE_MOTION_EVENTS;
    BOOL ENABLE_WIFI_EVENTS;
    BOOL ENABLE_BLUETOOTH_EVENTS;
    BOOL ENABLE_ACCELEROMETER_EVENTS;
    BOOL ENABLE_CONVERSATION_EVENTS;
    BOOL ENABLE_CALL_EVENTS;

    //Sensor Frequencies
    
    long WIFI_SCAN_INTERVAL;
    long BLUETOOTH_SCAN_INTERVAL;
    long ACTIVITY_UPDATE_INTERVAL;
    long ACTIVITY_DUMP_INTERVAL;
    long HK_DUMP_INTERVAL;
    long TIME_EVENT_INTERVAL;
    long LOCATION_SCAN_INTERVAL;
    long ACCELEROMETER_SCAN_FREQUENCY;
    long ACCELEROMETER_SCAN_INTERVAL;
    long ACCELEROMETER_SCAN_DURATION;
    long DB_DUMP_TIME;
    long UPLOAD_INTERVAL;
    long MAX_UPLOAD_INTERVAL;
    long BLUETOOTH_ALERT_INTERVAL;
    long CONVO_SCAN_INTERVAL;
    long CONVO_SCAN_DURATION;
    
    // custom heart beat event.
    long HB_TIME_TICK;
    
    //Data Upload Settings
    BOOL REQUIRE_WIFI_FOR_UPLOAD;
    BOOL REQUIRE_CHARGING_FOR_UPLOAD;
    
}

+ (PSSensingSettings *)sharedInstance;
- (void) setUserID:(NSString *)userID;

@property(nonatomic, readwrite) BOOL SHOW_LOGS;
@property(strong, nonatomic, readwrite) NSString *ONE_SIGNAL_APP_ID;
@property(nonatomic, readwrite) BOOL UPLOAD_DATA;
@property(strong, nonatomic, readwrite) NSString *UPLOAD_URL;
@property(strong, nonatomic, readwrite) NSString *DB_LIVE_DIR;
@property(strong, nonatomic, readwrite) NSString *DB_LIVE_FILENAME;
@property(strong, nonatomic, readwrite) NSString *DB_ARCHIVE_DIR;
@property(strong, nonatomic, readwrite) NSString *DB_ARCHIVE_FILENAME_FORMAT;
@property(strong, nonatomic, readwrite) NSString *DB_DISPATCH_QUEUE;
@property(nonatomic, readwrite) BOOL ENABLE_BATTERY_EVENTS;
@property( nonatomic, readwrite) BOOL ENABLE_SCREEN_BRIGHTNESS_EVENTS;
@property( nonatomic, readwrite) BOOL ENABLE_LOCK_UNLOCK_EVENTS;
@property(nonatomic, readwrite) BOOL ENABLE_LOCATION_UPDATES;
@property( nonatomic, readwrite) BOOL ENABLE_ACTIVITY_UPDATES;
@property( nonatomic, readwrite) BOOL ENABLE_ACTIVITY_DUMP;
@property( nonatomic, readwrite) BOOL ENABLE_HK_DUMP;
@property(nonatomic, readwrite) BOOL ENABLE_MOTION_EVENTS;
@property(nonatomic, readwrite) BOOL ENABLE_WIFI_EVENTS;
@property(nonatomic, readwrite) BOOL ENABLE_BLUETOOTH_EVENTS;
@property(nonatomic, readwrite) BOOL ENABLE_ACCELEROMETER_EVENTS;
@property(nonatomic, readwrite) BOOL ENABLE_CONVERSATION_EVENTS;
@property(nonatomic, readwrite) BOOL ENABLE_CALL_EVENTS;
@property( nonatomic, readwrite) long WIFI_SCAN_INTERVAL;
@property( nonatomic, readwrite) long BLUETOOTH_SCAN_INTERVAL;
@property( nonatomic, readwrite) long ACTIVITY_UPDATE_INTERVAL;
@property( nonatomic, readwrite) long ACTIVITY_DUMP_INTERVAL;
@property( nonatomic, readwrite) long HK_DUMP_INTERVAL;
@property( nonatomic, readwrite) long LOCATION_SCAN_INTERVAL;
@property( nonatomic, readwrite) long ACCELEROMETER_SCAN_FREQUENCY;
@property( nonatomic, readwrite) long ACCELEROMETER_SCAN_INTERVAL;
@property( nonatomic, readwrite) long ACCELEROMETER_SCAN_DURATION;
@property( nonatomic, readwrite) long TIME_EVENT_INTERVAL;
@property( nonatomic, readwrite) long DB_DUMP_TIME;
@property( nonatomic, readwrite) long UPLOAD_INTERVAL;
@property( nonatomic, readwrite) long MAX_UPLOAD_INTERVAL;
@property( nonatomic, readwrite) long BLUETOOTH_ALERT_INTERVAL;
@property( nonatomic, readwrite) BOOL REQUIRE_WIFI_FOR_UPLOAD;
@property( nonatomic, readwrite) BOOL REQUIRE_CHARGING_FOR_UPLOAD;
@property( nonatomic, readwrite) long CONVO_SCAN_INTERVAL;
@property( nonatomic, readwrite) long CONVO_SCAN_DURATION;
@property( nonatomic, readwrite) long HB_TIME_TICK;
@end
