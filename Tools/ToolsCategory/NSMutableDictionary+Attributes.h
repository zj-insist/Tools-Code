//
//  NSMutableDictionary+Attributes.h
//  Tools
//
//  Created by ZJ-Jie on 2017/6/16.
//  Copyright © 2017年 Jie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NSMutableDictionary (Attributes)

- (NSMutableDictionary *(^)(CGFloat))Font;

- (NSMutableDictionary *(^)(UIColor *))Color;

@end
