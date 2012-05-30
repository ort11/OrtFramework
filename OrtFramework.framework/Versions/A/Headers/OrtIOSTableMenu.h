//
//  OrtIOSTableMenu.h
//  OrtDraw
//
//  Created by Jeff Orthober on 5/26/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface OrtIOSTableMenu : UIViewController
<UITableViewDataSource,UITableViewDelegate>
{
    UITableView     *tableView;
    NSMutableArray  *menuNames;
    NSMutableArray  *menuSelectors;
    NSMutableArray  *menuTags;
}

@property (retain)   NSMutableArray  *gradientFillColors;       ///< the gradient CGColors stored as (id), default is a blue gradient
@property (assign)   CGFloat         *gradientFillLocations;    ///< the gradient fill locations as array[3] of CGPoints, default is 0.0, 0.5, 1.0
@property (assign)   id              delegate;                  ///< the delegate to be used for selection callbacks
@property (assign)   int             cellHeight;                ///< the height of a text cell, default is 44
@property (retain)   UIFont          *textFont;                 ///< the font for the menu item text, default is "Arial", 16
@property (retain)   UIColor         *textColor;                ///< the text color for the menu items, default is yellow

- (id)      initWithFrameAndDelegate        : (CGRect) frame        : (id) del;
- (void)    addMenuItemAndSelector          : (NSString *) menuItem : (NSString *) selectorString;
- (void)    addMenuItemAndSelectorAndTag    : (NSString *) menuItem : (NSString *) selectorString   : (int) tag;
- (void)    show                            : (CGPoint) point;
- (void)    hide;

@end
