

#import <UIKit/UIKit.h>

#import "LJFlipsideViewController.h"
#import "ReportViewController.h"
@class GraphView;
@class AccelerometerFilter;

@interface MainViewController : UIViewController<UIAccelerometerDelegate, LJFlipsideViewControllerDelegate, ReportViewControllerDelegate>
{
	GraphView *unfiltered;
	GraphView *filtered;
	UIBarButtonItem *pause;
    UIBarButtonItem *share;
    UIBarButtonItem *sensor;
	UILabel *filterLabel;
	AccelerometerFilter *filter;
	BOOL isPaused, useAdaptive;
    
    }

@property(nonatomic) IBOutlet GraphView *unfiltered;
@property(nonatomic) IBOutlet GraphView *filtered;
@property(nonatomic) IBOutlet UIBarButtonItem *pause;

@property(nonatomic) IBOutlet UILabel *filterLabel;



-(IBAction)pauseOrResume:(id)sender;
-(IBAction)filterSelect:(id)sender;
-(IBAction)adaptiveSelect:(id)sender;

-(IBAction)discloseSetting:(id)sender;

@end