//
//  LeftTopLabel.m
//  Tools
//
//  Created by ZJ-Jie on 2017/8/24.
//  Copyright © 2017年 Jie. All rights reserved.
//

#import "LeftTopLabel.h"

@implementation LeftTopLabel

//通过重写此方法，可以使UIlabel的文字从左上角开始显示
- (void)drawTextInRect:(CGRect)rect {
    CGRect actualRect = [self textRectForBounds:rect
                         limitedToNumberOfLines:self.numberOfLines];
    [super drawTextInRect:actualRect];
}

@end
