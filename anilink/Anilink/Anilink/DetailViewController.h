//
//  DetailViewController.h
//  Anilink
//
//  Created by Stefano Agnoletto on 01/04/15.
//  Copyright (c) 2015 Stefano Agnoletto. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

