//
//  ToolsMacro.h
//  Tools
//
//  Created by ZJ-Jie on 2017/5/9.
//  Copyright © 2017年 Jie. All rights reserved.
//

#ifndef ToolsMacro_h
#define ToolsMacro_h

#define SCREEN_SIZE [[UIScreen mainScreen] bounds].size
#define WidthScreen [UIScreen mainScreen].bounds.size.width
#define HeightScreen [UIScreen mainScreen].bounds.size.height

/**-----------------image-----------------*/
#define ImageNamed(x)       [UIImage imageNamed:x]
#define ImageStretch(name,inset) [ImageNamed(name) resizableImageWithCapInsets:inset resizingMode:UIImageResizingModeStretch]

/**-----------------color----------------------*/
#define ColorOpacity(x,a) [UIColor colorWithRGB:x alpha:a]
#define Color(x) ColorOpacity(x,1)
#define ColorRGBO(r,g,b,o) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:o]
#define ColorRGB(r,g,b) ColorRGBO(r,g,b,1)


#define UIScale(x) ((x)*ratio2_scale)
#define UIScaleHeight(x) ((x)*HeightScreen/667.f)
#define ScreenScale                 [UIScreen mainScreen].scale

#endif /* ToolsMacro_h */
