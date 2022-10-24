//
//  BluetoothWifi.h
//  TestBackground
//
//  Created by Varun Mishra on 10/1/17.
//  Copyright © 2017 Varun Mishra. All rights reserved.
//

#import <SystemConfiguration/CaptiveNetwork.h>
#import <NetworkExtension/NetworkExtension.h>
#import <UIKit/UIKit.h>

@interface Wifi : NSObject

- (NSString *)getNetworkId;
- (void) getWifiInfo;
- (BOOL) isWiFiEnabled;
- (NSString *)getSystemUUID;
@end
