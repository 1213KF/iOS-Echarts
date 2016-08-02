//
//  PYAxisLine.h
//  iOS-Echarts
//
//  Created by Pluto Y on 15/9/7.
//  Copyright (c) 2015年 pluto-y. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PYLineStyle;

@interface PYAxisLine : NSObject

@property (nonatomic, assign) BOOL show;
@property (nonatomic, assign) BOOL onZero;
@property (nonatomic, strong) PYLineStyle *lineStyle;

@end
