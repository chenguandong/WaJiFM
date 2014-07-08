//
//  SqlTools.h
//  Datastore Examples
//
//  Created by chenguandong on 14-5-22.
//
//

#import <Foundation/Foundation.h>
#import "FMDatabase.h"
@class XMLBrodCastItem;
@interface SqlTools : NSObject

+(void)getFMdatabase:(NSString*)sql :(FMDatabase*)fmDataBase;

+(NSMutableArray*)queryData:(NSString*)sql;
+(BOOL)insertDownloadDate:(XMLBrodCastItem *)xmlBrodCastItem;
+(BOOL)insertDownloadTypeAndFileName:(XMLBrodCastItem *)xmlBrodCastItem;

/**
    insert favourite db data
 */
+(BOOL)insertFavouriteDate:(XMLBrodCastItem *)xmlBrodCastItem;
/**
 
    查询favourite.db 的数据  用户收藏
 */
+(NSArray*)queryFavouriteDB:(NSString*)sql;

/**
    创建 dowoload db sql
 */
+(NSString*)getDownloadDBSQL;

/**
    create favourite db sql
 */
+(NSString*)getFavouriteDBSQL;


+(FMDatabase*)getDownloadDBPath;

+(FMDatabase*)getFavouriteDBPath;

/**
    检查数据是否已经收藏
 */
+(BOOL)checkIsFavourite:(NSString*)sql;

/**
 删除收藏
 */
+(BOOL)deleteFavourite:(NSString*)sql;

/**
 创建专辑收藏表
 */
+(NSString*)getFavouriteAlbumDBSQL;

+(FMDatabase*)getAlbumFavouriteDBPath;

/**
 检查是否已经收藏专辑
 */
+(BOOL)checkIsFavouriteAlbum:(NSString*)sql;

/**
 删除收藏专辑
 */
+(BOOL)deleteFavouriteAlbum:(NSString*)sql;

/**
 增加专辑收藏
 */
+(BOOL)insertFavouriteAlbum:(XMLBrodCastItem *)xmlBrodCastItem;
/**
 
查询收藏专辑
 */
+(NSArray*)queryFavouriteAlbumDB:(NSString*)sql;
@end
