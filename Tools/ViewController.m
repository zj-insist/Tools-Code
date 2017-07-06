//
//  ViewController.m
//  Tools
//
//  Created by ZJ-Jie on 2017/5/9.
//  Copyright © 2017年 Jie. All rights reserved.
//

#import "ViewController.h"
#import "NSMutableAttributedString+CreateAttributedString.h"
#import "NSMutableDictionary+Attributes.h"

@interface ViewController ()

@end

@implementation ViewController

//关于注释
//FIXME: 修复注释
//TODO: 待完成注释
//MARK: 标记
// !!!: 警示
//???: 疑问标记
#warning add warning

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    NSMutableAttributedString *str = [NSMutableAttributedString makeAttributeString:@"dasd" Attribute:^(NSMutableDictionary *attributes) {
        attributes.Font(12).Color([UIColor redColor]);
    }];
    
    [str makeAttributeStringAdd:@"sss" Attribute:^(NSMutableDictionary *attributes) {
        attributes.Font(13).Color([UIColor yellowColor]);
    }];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
