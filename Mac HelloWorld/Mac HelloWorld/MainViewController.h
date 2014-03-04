//
//  MainViewController.h
//  Mac HelloWorld
//
//  Created by Harmen Leenders on 04-03-14.
//  Copyright (c) 2014 MacBook Pro. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
