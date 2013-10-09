//
//  DetailViewController.h
//  Foodie
//
//  Created by iki on 10/8/13.
//  Copyright (c) 2013 iki. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
