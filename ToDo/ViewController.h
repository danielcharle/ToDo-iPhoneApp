//
//  ViewController.h
//  ToDo
//
//  Created by Rahul Garg on 02/10/14.
//  Copyright (c) 2014 Rahul. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDelegate,UITableViewDataSource>

@property(weak,nonatomic) IBOutlet UITableView *table;

@end
