//
//  PYSplitLine.h
//  iOS-Echarts
//
//  Created by Pluto Y on 15/9/8.
//  Copyright (c) 2015年 pluto-y. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PYLineStyle.h"

@interface PYSplitLine : NSObject

@property (nonatomic, assign) BOOL show;
@property (nonatomic, assign) BOOL onGap;
@property (nonatomic, strong) PYLineStyle *lineStyle;

@end
