//
//  NSString+Tools.h
//  Tools
//
//  Created by ZJ-Jie on 2017/8/30.
//  Copyright © 2017年 Jie. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Tools)

/**
 如果是手机号返回加密后的手机号

 @return <#return value description#>
 */
- (NSString *)hideMobilePhoneNumber;

/**
 字符串日期转NSDate

 @param format <#dateString description#>
 @return <#return value description#>
 */
- (NSDate *)stringDateFromStringFormat:(NSString *)format;

@end
