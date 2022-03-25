//
//  FDFaceLogin2ViewController.h
//  FDFaceRecognition
//
//  Created by mac on 2021/9/1.
//  Copyright © 2021 wangqiuli. All rights reserved.
//

#import "FDFaceBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface FDFaceLogin2ViewController : FDFaceBaseViewController

@property(nonatomic,copy)NSString *buttonTitle;
@property(nonatomic,assign)NSInteger direction;//摄像头方向，前摄像头1，后摄像头0

@end

NS_ASSUME_NONNULL_END
