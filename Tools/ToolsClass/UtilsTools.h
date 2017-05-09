//
//  UtilsTools.h
//  EntranceGuardDemo
//
//  Created by ZJ-Jie on 2017/5/9.
//  Copyright © 2017年 XGHL. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UtilsTools : NSObject

/**
 生成随机颜色

 @return <#return value description#>
 */
+ (UIColor *) randomColor;

/**
 透明度固定为1，以0x开头的十六进制转换成的颜色

 @param hexColor <#hexColor description#>
 @return <#return value description#>
 */
+ (UIColor *)colorWithHex:(long)hexColor;

/**
 0x开头的十六进制转换成的颜色,透明度可调整

 @param hexColor <#hexColor description#>
 @param opacity <#opacity description#>
 @return <#return value description#>
 */
+ (UIColor *)colorWithHex:(long)hexColor alpha:(float)opacity;

/**
 iOS中十六进制的颜色（以#开头）转换为UIColor

 @param color <#color description#>
 @return <#return value description#>
 */
+ (UIColor *) colorWithHexString: (NSString *)color;

@end
