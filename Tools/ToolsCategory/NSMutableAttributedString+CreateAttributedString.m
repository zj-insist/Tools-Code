//
//  NSMutableAttributedString+CreateAttributedString.m
//  Tools
//
//  Created by ZJ-Jie on 2017/6/16.
//  Copyright © 2017年 Jie. All rights reserved.
//

#import "NSMutableAttributedString+CreateAttributedString.h"

@implementation NSMutableAttributedString (CreateAttributedString)

+(NSMutableAttributedString *)makeAttributeString:(NSString *)string Attribute:(void(^)(NSMutableDictionary * attributes))block{
    NSMutableDictionary * attributes = [NSMutableDictionary dictionary];
    block(attributes);
    NSMutableAttributedString * as = [[NSMutableAttributedString alloc] initWithString:string attributes:attributes];
    return as;
}

-(NSMutableAttributedString *)makeAttributeStringAdd:(NSString *)string Attribute:(void(^)(NSMutableDictionary * attributes))block{
    NSMutableDictionary * attributes = [NSMutableDictionary dictionary];
    block(attributes);
    NSMutableAttributedString * as = [[NSMutableAttributedString alloc] initWithString:string attributes:attributes];
    [self appendAttributedString:as];
    return self;
}

@end
