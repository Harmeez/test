//
//  FlipsideViewController.h
//  Mac HelloWorld
//
//  Created by Harmen Leenders on 04-03-14.
//  Copyright (c) 2014 MacBook Pro. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FlipsideViewController;

@protocol FlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(FlipsideViewController *)controller;
@end

@interface FlipsideViewController : UIViewController

@property (weak, nonatomic) id <FlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
