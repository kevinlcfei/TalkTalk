//
//  DetailViewController.h
//  TalkTalk
//
//  Created by Loke chung fei on 11/17/14.
//  Copyright (c) 2014 TalkTalkApps. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
