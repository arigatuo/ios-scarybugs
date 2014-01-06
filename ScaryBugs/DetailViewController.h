//
//  DetailViewController.h
//  ScaryBugs
//
//  Created by lady8844 on 14-1-6.
//  Copyright (c) 2014年 lady8844. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
