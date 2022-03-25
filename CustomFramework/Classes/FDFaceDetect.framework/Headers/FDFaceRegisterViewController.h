//
//  FDFaceRegisterViewController.h
//  FDFaceRecognition
//
//  Created by wangqiuli on 2019/8/26.
//  Copyright © 2019 wangqiuli. All rights reserved.
//


#import "FDFaceBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

/**
 人脸识别注册类
 */
@interface FDFaceRegisterViewController : FDFaceBaseViewController

@property(nonatomic,copy)NSString *userName;//用户名
@property(nonatomic,copy)NSString *userCode;//用户账号
@property(nonatomic,copy)NSString *url;//注册请求的url

@end

NS_ASSUME_NONNULL_END
