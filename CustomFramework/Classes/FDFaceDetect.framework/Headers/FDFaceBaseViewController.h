//
//  FDBaseViewController.h
//  FDFaceRecognition
//
//  Created by wangqiuli on 2019/8/26.
//  Copyright © 2019 wangqiuli. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "NSString+RemoveSpace.h"

#define FDSCREEN_WIDTH   [[UIScreen mainScreen] bounds].size.width
#define FDSCREEN_HEIGHT  [[UIScreen mainScreen] bounds].size.height
#define FDSTATUE_HEIGHT [[UIApplication sharedApplication] statusBarFrame].size.height
#define FDNAV_HEIGHT self.navigationController.navigationBar.frame.size.height
#define WeakSelf __weak typeof(self) weakSelf = self;

NS_ASSUME_NONNULL_BEGIN
/**
 人脸识别基础类
 */
@interface FDFaceBaseViewController : UIViewController

@property(nonatomic,copy)void(^callBack)(NSString *base64Str);//回调
@property(nonatomic,copy)void(^cancelPhotoCallBack)(void);//取消回调

/**
 提示弹窗
 @param message 提示信息
 */
- (void)addAlert:(NSString *)message withCallBack:(void(^)(void))sure;

/**
 设置导航栏颜色
 @param color 导航栏背景颜色
 @param titleColor 导航栏标题颜色
 @param tintColor 导航栏左右两侧按钮颜色
 */
- (void)setNavBackgroundColor:(UIColor *)color withTitleColor:(UIColor *)titleColor withTintColor:(UIColor *)tintColor;

/**
 data转base64
 @param data data
 @return base64码
 */
- (NSString*)encodeToBase64String:(NSData*)data;

/**
 设置扫描层
 @param rect 扫描view的frame
 @return 扫描区域
 */
-(CGRect)getScanCrop:(CGRect)rect;

- (BOOL)judgePhotoIsOpen;

/// 获取错误描述
- (NSString *)getErrorDescription:(NSError *)error;

/// 获取当前版本
- (NSString *)getCurrentVersion;

- (BOOL)isiPhoneX;

//计算模糊程度（小于500认为是模糊图，这个值可以自己看情况定义）
- (double)getImageDimValue:(UIImage *)sourceImage;

@end

NS_ASSUME_NONNULL_END
