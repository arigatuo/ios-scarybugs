//
//  ScaryBugDoc.m
//  ScaryBugs
//
//  Created by lady8844 on 14-1-6.
//  Copyright (c) 2014年 lady8844. All rights reserved.
//

#import "ScaryBugDoc.h"
#import "ScaryBugData.h"

@implementation ScaryBugDoc

@synthesize data = _data;
@synthesize thumbImage = _thumbImage;
@synthesize fullImage = _fullImage;

-(id)initWithTitle:(NSString*)title rating:(float)rating thumbImage:(UIImage*)thumbImage fullImage:(UIImage*)fullImage
{
    if((self = [super init])){
        self.data = [[ScaryBugData alloc] initWithTitle:title rating:rating];
        self.thumbImage = thumbImage;
        self.fullImage = fullImage;
    }
    return self;
}

@end
