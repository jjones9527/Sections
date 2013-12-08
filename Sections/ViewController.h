//
//  ViewController.h
//  Sections
//
//  Created by Jeremy Jones on 12/2/2013.
//  Copyright (c) 2013 Jeremy Jones. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
<UITableViewDataSource, UITableViewDelegate>
{
    NSDictionary *names;
    NSArray *keys;
}

@property (nonatomic, retain) NSDictionary *names;
@property (nonatomic, retain) NSArray *keys;

@end
