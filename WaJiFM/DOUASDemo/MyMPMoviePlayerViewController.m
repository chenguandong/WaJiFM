//
//  MyMPMoviePlayerViewController.m
//  哇唧FM
//
//  Created by chen.gd on 14-8-28.
//  Copyright (c) 2014年 Douban Inc. All rights reserved.
//

#import "MyMPMoviePlayerViewController.h"

@interface MyMPMoviePlayerViewController ()

@end

@implementation MyMPMoviePlayerViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

-(BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation{

    return YES;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
