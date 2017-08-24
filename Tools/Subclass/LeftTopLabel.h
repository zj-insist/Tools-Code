//
//  LeftTopLabel.h
//  Tools
//
//  Created by ZJ-Jie on 2017/8/24.
//  Copyright © 2017年 Jie. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 当label高度大于2行以上文字时，重写UILabel的- (void)drawTextInRect:(CGRect)rect方法，可以使文字从左上角开始显示
 */
@interface LeftTopLabel : UILabel

@end
