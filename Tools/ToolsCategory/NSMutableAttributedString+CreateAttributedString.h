//
//  NSMutableAttributedString+CreateAttributedString.h
//  Tools
//
//  Created by ZJ-Jie on 2017/6/16.
//  Copyright © 2017年 Jie. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableAttributedString (CreateAttributedString)

+ (NSMutableAttributedString *)makeAttributeString:(NSString *)string Attribute:(void(^)(NSMutableDictionary * attributes))block;

-(NSMutableAttributedString *)makeAttributeStringAdd:(NSString *)string Attribute:(void(^)(NSMutableDictionary * attributes))block;

@end
