//
//  HistoryControllerViewController.m
//  哇唧FM
//
//  Created by chen.gd on 14-8-26.
//  Copyright (c) 2014年 Douban Inc. All rights reserved.
//

#import "HistoryiewController.h"
#import "SqlTools.h"
#import <UIKit/UIKit.h>
@interface HistoryiewController ()

@end

@implementation HistoryiewController



//-(BOOL)delectFavourite:(NSString *)title{
//     return  [SqlTools deleteFavourite:[NSString stringWithFormat:@"delete  from history where title = '%@'",title]];
//}


-(void)setQuerySql:(NSString *)querySql{
    self.querySql = @"select * from histoty";
}


- (void)viewDidLoad
{
    
    [super viewDidLoad];
    // Do any additional setup after loading the view.

    
}


- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}



@end
