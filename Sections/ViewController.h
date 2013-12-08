//
//  ViewController.h
//  Sections
//
//  Created by Jeremy Jones on 12/2/2013.
//  Copyright (c) 2013 Jeremy Jones. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
<UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate>
{
    UITableView *table;
    UISearchBar *search;
    NSDictionary *allNames;
    NSMutableDictionary *names;
    NSMutableArray *keys;
    //NSDictionary *names;
    //NSArray *keys;
}

//@property (nonatomic, retain) NSDictionary *names;
//@property (nonatomic, retain) NSArray *keys;

@property (nonatomic, retain)IBOutlet UITableView *table;
@property (nonatomic, retain)IBOutlet UISearchBar *search;
@property (nonatomic, retain)NSDictionary *allNames;
@property (nonatomic, retain)NSMutableDictionary *names;
@property (nonatomic, retain)NSMutableArray *keys;

- (void)resetSearch;
- (void)handleSearchForTerm:(NSString *)searchTerm;

@end
