//
//  SLAPMManager.h
//  DarkMode
//
//  Created by wsl on 2020/7/13.
//  Copyright © 2020 https://github.com/wsl2ls   ----- . All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// app性能监控策略/类型
typedef NS_ENUM(NSInteger, SLAPMType) {
    /*无*/
    SLAPMTypeNone    = 0,
    /*CPU占用率*/
    SLAPMTypeCpu     = 1 << 0,
    /*内存使用情况*/
    SLAPMTypeMemory  = 1 << 1,
    /*流畅度、卡顿*/
    SLAPMTypeFluency = 1 << 2,
    
    /*所有策略*/
    SLAPMTypeAll     = 1 << 3
};


/// APM 管理者
@interface SLAPMManager : NSObject

///是否正在监控
@property (nonatomic, assign) BOOL isMonitoring;
///app性能监控策略/类型  默认SLAPMTypeAll
@property (nonatomic, assign) SLAPMType type;

+ (instancetype)manager;

///开始监控
- (void)startMonitoring;
///结束监控
- (void)stopMonitoring;

@end

NS_ASSUME_NONNULL_END
