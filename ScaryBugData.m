//
//  ScaryBugData.m
//  ScaryBugs
//
//  Created by lady8844 on 14-1-6.
//  Copyright (c) 2014年 lady8844. All rights reserved.
//

#import "ScaryBugData.h"

@implementation ScaryBugData

@synthesize title = _title;
@synthesize rating = _rating;

-(id)initWithTitle:(NSString*)title rating:(float)rating{
    if((self = [super init])){
        self.title = title;
        self.rating = rating;
    }
    return self;
}

@end
