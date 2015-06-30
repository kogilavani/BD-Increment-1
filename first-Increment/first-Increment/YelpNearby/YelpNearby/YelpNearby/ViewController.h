//
//  ViewController.h
//  YelpNearby
//
//  Created by Behera, Subhransu on 12/5/13.
//  Copyright (c) 2013 Subh. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "YelpAPIService.h"
#import <SpeechKit/SpeechKit.h>

//@interface ViewController : UIViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource>
//@interface ViewController : UIViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, SpeechKitDelegate, SKRecognizerDelegate>
@interface ViewController : UIViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, SpeechKitDelegate, SKRecognizerDelegate, YelpAPIServiceDelegate>

@property (strong, nonatomic) SKRecognizer* voiceSearch;
@property (weak, nonatomic) IBOutlet UITextField *searchTextField;
@property (weak, nonatomic) IBOutlet UIButton *recordButton;
@property (weak, nonatomic) IBOutlet UILabel *messageLabel;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicator;
    
@property (weak, nonatomic) IBOutlet UITableView *resultTableView;

@property (strong, nonatomic) AppDelegate *appDelegate;
@property (strong, nonatomic) NSMutableArray *tableViewDisplayDataArray;
@property (strong, nonatomic) YelpAPIService *yelpService;
@property (strong, nonatomic) NSString* searchCriteria;

- (NSString *)getYelpCategoryFromSearchText;
- (void)findNearByRestaurantsFromYelpbyCategory:(NSString *)categoryFilter;

- (IBAction)recordButtonTapped:(id)sender;

@end
