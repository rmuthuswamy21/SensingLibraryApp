//
//  Calls.h
//  PSSensorManager
//
//  Created by Varun Mishra on 4/16/19.
//  Copyright © 2019 Varun Mishra. All rights reserved.
//

#import <CoreTelephony/CoreTelephonyDefines.h>
#import <CoreTelephony/CTCallCenter.h>
#import <CoreTelephony/CTCall.h>
#import <CoreTelephony/CTCarrier.h>
#import <CoreTelephony/CTCellularData.h>
#import <CoreTelephony/CTTelephonyNetworkInfo.h>
#import <AddressBookUI/AddressBookUI.h>

@import CallKit;

extern NSString* _Nonnull const KEY_CALLS_TIMESTAMP;
extern NSString* _Nonnull const KEY_CALLS_DEVICEID;
extern NSString* _Nonnull const KEY_CALLS_CALL_TYPE;
extern NSString* _Nonnull const KEY_CALLS_CALL_DURATION;
extern NSString* _Nonnull const KEY_CALLS_TRACE;

@interface Calls : NSObject <CXCallObserverDelegate>

@property (strong, nonatomic, nullable) CXCallObserver *callObserver;

-(void)startSensor;

@end
