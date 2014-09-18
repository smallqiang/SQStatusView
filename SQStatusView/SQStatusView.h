//
//  SQStatusView.h
//  StatusExample
//
//  Created by ChenYaoqiang on 14-9-17.
//  Copyright (c) 2014年 ChenYaoqiang. All rights reserved.
//

#import <UIKit/UIKit.h>

enum {
    SQStatusViewMaskTypeNone = 1,
    SQStatusViewMaskTypeClear,
    SQStatusViewMaskTypeBlack,
    SQStatusViewMaskTypeGradient
};

typedef NSUInteger SQStatusViewMaskType;

@interface SQStatusView : UIView

+ (void)show;

+ (void)showSuccessWithStatus:(NSString*)string;
+ (void)showErrorWithStatus:(NSString *)string;
+ (void)showErrorWithStatus:(NSString *)string withTimes:(int)times withDelta:(CGFloat)delta withSpeed:(NSTimeInterval)speed;
+ (void)showImage:(UIImage*)image status:(NSString*)status isError:(BOOL)isError;

+ (void)dismiss;

+ (BOOL)isVisible;

@end
