//
//  OrtDialogs.h
//  OrtFramework
//
//  Created by Jeff Orthober on 5/30/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OrtIOSDialogs : NSObject

+ (void) dialogboxinput             : (NSString *)title     : (NSString *) message : (NSString *) cancelbuttontitle : (NSString *)otherbuttontitles : (id) delegate : (UITextField *) textfield : (int) tag;
+ (void) dialogboxmessageokonly     : (NSString *)title     : (NSString *) message : (id) delegate                  : (int) tag;
+ (void) dialogboxconfirm           : (NSString *) title    : (NSString *) message : (id) delegate                  : (int) tag;
+ (void) dialogboxconfirmbuttons    : (NSString *) title    : (NSString *) message : (NSString *) buttoncancel      : (NSString *) buttonyes        : (id) delegate : (int) tag;
+ (void) dialoghide;
+ (void) dialogboxsetmessage        : (NSString *) message;

@end
