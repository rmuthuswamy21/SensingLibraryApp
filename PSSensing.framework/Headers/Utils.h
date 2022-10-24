//
//  Utils.h
//  SensorManager
//
//  Created by Varun Mishra on 12/9/18.
//  Copyright © 2018 Varun Mishra. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Utils : NSObject

void PSLog(NSString *formatString, ...)  NS_FORMAT_FUNCTION(1,2);

+(void)toByta: (Byte)data outPtr:(Byte*)outPtr;
+(void)toByta: (Byte*) data withLen:(int)srcLen  dest:(Byte*)dest destLen:(int)destLen;

/* ========================= */

+(void)toShortByta: (int16_t)data dest:(Byte*)dest;
+(void)toShortByta:(int16_t*) data withLen:(int)srcLen  dest:(Byte*)dest destLen:(int)destLen;

/* ========================= */

+(void)toIntByta: (int32_t)data dest:(Byte*)dest;
+(void)toIntByta:(int32_t*)data withLen:(int)srcLen  dest:(Byte*)dest destLen:(int)destLen;

/* ========================= */

+(void)toLongByta: (int64_t)data dest:(Byte*)dest;
+(void)toLongByta:(int64_t*) data  withLen:(int)srcLen  dest:(Byte*)dest destLen:(int)destLen;

/* ========================= */

+(void)toFloatByta: (float)data dest:(Byte*)dest;
+(void)toFloatByta:(float*) data  withLen:(int)srcLen  dest:(Byte*)dest destLen:(int)destLen;

/* ========================= */

+(void)toDoubleByta: (double)data dest:(Byte*)dest;
+(void)toDoubleByta:(double*)data  withLen:(int)srcLen  dest:(Byte*)dest destLen:(int)destLen;


@end
