//
//  FavouriteTableViewController.h
//  DOUASDemo
//
//  Created by chenguandong on 14-6-15.
//  Copyright (c) 2014年 Douban Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FavouriteTableViewController : UITableViewController
@property(nonatomic,strong) NSMutableArray * allDownLoadData;
@property(nonatomic,copy)NSString *querySql;
@end
