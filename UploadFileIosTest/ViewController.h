//
//  ViewController.h
//  UploadFileIosTest
//
//  Created by Jeonggyu Park on 28/02/2020.
//  Copyright © 2020 Jeonggyu Park. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (weak, nonatomic) IBOutlet UIImageView *imageView;


- (IBAction)takePhoto:(id)sender;

- (IBAction)selectPhoto:(id)sender;


@end

