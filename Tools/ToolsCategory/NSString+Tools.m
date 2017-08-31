//
//  NSString+Tools.m
//  Tools
//
//  Created by ZJ-Jie on 2017/8/30.
//  Copyright © 2017年 Jie. All rights reserved.
//

#import "NSString+Tools.h"

@implementation NSString (Tools)


- (NSString *)hideMobilePhoneNumber {
    // 首先验证是不是手机号码
    NSString *mobile = @"^(13[0-9]|14[0-9]|15[0-9]|17[0-9]|18[0-9])\\d{8}$";
    NSPredicate *regextestmobile = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", mobile];
    // 如果是手机号码的话
    if ([regextestmobile evaluateWithObject:self]) {
        return [self stringByReplacingCharactersInRange:NSMakeRange(3, 4) withString:@"****"];
    }
    return self;
}

@end
