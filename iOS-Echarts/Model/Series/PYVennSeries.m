//
//  PYVennSeries.m
//  iOS-Echarts
//
//  Created by Pluto Y on 4/21/16.
//  Copyright © 2016 Pluto-y. All rights reserved.
//

#import "PYVennSeries.h"

@implementation PYVennSeries

- (instancetype)init
{
    self = [super init];
    if (self) {
        self.type = PYSeriesTypeVenn;
    }
    return self;
}

@end
