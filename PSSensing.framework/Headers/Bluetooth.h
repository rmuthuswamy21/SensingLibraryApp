//
//  Bluetooth.h
//  TestBackground
//
//  Created by Varun Mishra on 10/1/17.
//  Copyright © 2017 Varun Mishra. All rights reserved.
//

#import <CoreBluetooth/CoreBluetooth.h>
#import <CoreLocation/CoreLocation.h>
#import <UIKit/UIKit.h>

@interface Bluetooth : NSObject <CBPeripheralDelegate, CBCentralManagerDelegate>
@property (nonatomic, strong) CBCentralManager *myCentralManager;
//@property (nonatomic, strong) CBPeripheral *peripheralDevice;
@property (strong,nonatomic) NSMutableArray *peripherals;

@property (nonatomic) int scanInterval;
@property (nonatomic) int scanDuration;


- (void) getBluetoothInfo;
- (NSString *)getSystemUUID;

#define BATTERY_SERVICE @"180F"
#define BODY_COMPOSITION_SERIVCE @"181B"
#define CURRENT_TIME_SERVICE @"1805"
#define DEVICE_INFORMATION @"180A"
#define ENVIRONMENTAL_SENSING @"181A"
#define GENERIC_ACCESS @"1800"
#define GENERIC_ATTRIBUTE @"1801"
#define MEASUREMENT @"2A37"
#define BODY_LOCATION @"2A38"
#define MANUFACTURER_NAME @"2A29"
#define HEART_RATE_UUID @"180D"
#define HTTP_PROXY_UUID @"1823"
#define HUMAN_INTERFACE_DEVICE @"1812"
#define INDOOR_POSITIONING @"1820"
#define LOCATION_NAVIGATION @"1819"
#define PHONE_ALERT_STATUS @"180E"
#define REFERENCE_TIME @"1806"
#define SCAN_PARAMETERS @"1813"
#define TRANSPORT_DISCOVERY @"1824"
#define USER_DATA @"181C"
#define BOSE_HEADPHONES @"FEBE"

#define HEADSET @"1108"
#define AUDIO_SINK @"110B"
#define HANDSFREE @"111E"
#define AV_REMOTE_CONTROL_TARGET @"110C"
#define AV_REMOTE_CONTROL @"110E"
#define SERIAL_PORT @"1101"
@end

