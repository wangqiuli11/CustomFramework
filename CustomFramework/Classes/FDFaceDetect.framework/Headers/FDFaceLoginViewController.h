//
//  FDFaceLoginViewController.h
//  FDFaceRecognition
//
//  Created by wangqiuli on 2019/8/26.
//  Copyright © 2019 wangqiuli. All rights reserved.
//

#import "FDFaceBaseViewController.h"
NS_ASSUME_NONNULL_BEGIN

/**
 人脸识别登录类
 */
@interface FDFaceLoginViewController : FDFaceBaseViewController

@property(nonatomic,copy)NSString *buttonTitle;
@property(nonatomic,assign)NSInteger direction;//摄像头方向，前摄像头1，后摄像头0

@end

NS_ASSUME_NONNULL_END
