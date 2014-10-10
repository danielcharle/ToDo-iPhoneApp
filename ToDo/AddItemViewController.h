//
//  AddItemViewController.h
//  ToDo
//
//  Created by Rahul Garg on 02/10/14.
//  Copyright (c) 2014 Rahul. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddItemViewController : UIViewController <UITextFieldDelegate>

@property (strong, nonatomic) IBOutlet UITextField *item;
@property (strong, nonatomic) IBOutlet UIDatePicker * datePicker;

- (IBAction)cancelBtn:(id)sender;
- (IBAction)saveBtn:(id)sender;

@end
