//
//  ViewController.m
//  ErrorExample
//
//  Created by ChenYaoqiang on 14-9-17.
//  Copyright (c) 2014年 ChenYaoqiang. All rights reserved.
//

#import "ViewController.h"
#import "SQStatusView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)showSuccess:(id)sender
{
    [SQStatusView showSuccessWithStatus:@"登录成功"];
}

- (IBAction)showError:(id)sender
{
    [SQStatusView showErrorWithStatus:@"登录失败"];
}

@end
