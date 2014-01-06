//
//  ScaryBugData.h
//  ScaryBugs
//
//  Created by lady8844 on 14-1-6.
//  Copyright (c) 2014年 lady8844. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ScaryBugData : NSObject

@property(strong) NSString *title;
@property(assign) float rating;

-(id)initWithTitle:(NSString*)title rating:(float)rating;

@end
