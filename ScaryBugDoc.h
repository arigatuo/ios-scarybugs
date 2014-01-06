//
//  ScaryBugDoc.h
//  ScaryBugs
//
//  Created by lady8844 on 14-1-6.
//  Copyright (c) 2014年 lady8844. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ScaryBugData;

@interface ScaryBugDoc : NSObject

@property (strong) ScaryBugData *data;
@property (strong) UIImage *thumbImage;
@property (strong) UIImage *fullImage;

-(id)initWithTitle:(NSString*)title rating:(float)rating thumbImage:(UIImage*)thumbImage fullImage:(UIImage*)fullImage;

@end
