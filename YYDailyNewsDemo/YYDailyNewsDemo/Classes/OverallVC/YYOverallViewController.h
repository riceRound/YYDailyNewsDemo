//
//  YYOverallViewController.h
//  YYDailyNewsDemo
//
//  Created by REiFON-MAC on 16/1/5.
//  Copyright © 2016年 L. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YYHomeViewController.h"
#import "YYLeftMenuViewController.h"

@interface YYOverallViewController : UIViewController

- (instancetype)initWithLeftCtrl:(YYLeftMenuViewController *)leftMenuVC MainCtrl:(UIViewController *)homeVC;

@end
