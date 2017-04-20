//
//  YR_IDVideoController.h
//  iPatient
//
//  Created by apple on 15/11/25.
//  Copyright © 2015年 someone. All rights reserved.
//

#import "YR_baseViewController.h"

@protocol IDVideoControllerDelegate <NSObject>

@required

- (void)IDVideoControllerDidFinishedTakeMovie:(NSURL *)mp4URL;

@end

@interface YR_IDVideoController : YR_baseViewController

//自定义路径  默认：tmp 目录
//@property (nonatomic,copy)NSString * customPath;

//压缩类型：AVAssetExportPresetHighestQuality

/**
 * 压缩类型：
 * AVAssetExportPresetLowQuality  
 * AVAssetExportPresetMediumQuality
 * AVAssetExportPresetHighestQuality
 */
@property (nonatomic,copy)NSString * compressionType;

@property(nonatomic, weak) id<IDVideoControllerDelegate>delegate;

@end
