//
//  DataManager.h
//
//  Created by Varun Mishra on 10/1/17.
//  Copyright © 2017 Varun Mishra. All rights reserved.
//

#include <sqlite3.h>

@interface DataManager : NSObject {
    sqlite3 *_database;
}

-(id)init;
-(void)openOrCreateDb;
-(void)closeDb;
-(void)dumpDb: (BOOL) force;

-(void)insertRecord:(NSString*) timestampStr eventID:(int)eventID eventData:(NSString *) eventData;
-(void)insertRecord:(NSString*) timestampStr eventID:(int)eventID eventData:(Byte *) eventData withLen:(int)len;

+(NSArray *)getArchiveDbList;

+(NSString*)getLiveDbDir;
+(NSString*)getArchiveDbDir;

@end

