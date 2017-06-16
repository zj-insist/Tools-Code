//
//  NSMutableDictionary+Attributes.m
//  Tools
//
//  Created by ZJ-Jie on 2017/6/16.
//  Copyright © 2017年 Jie. All rights reserved.
//

#import "NSMutableDictionary+Attributes.h"

@implementation NSMutableDictionary (Attributes)

- (NSMutableDictionary *(^)(CGFloat))Font {
    return ^id(CGFloat font) {
        [self setValue:[UIFont systemFontOfSize:font] forKey:NSFontAttributeName];
        return self;
    };
}


- (NSMutableDictionary *(^)(UIColor *))Color {
    return ^id(UIColor * color) {
        [self setValue:color forKey:NSForegroundColorAttributeName];
        return self;
    };
}

@end
