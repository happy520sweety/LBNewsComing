//
//  LBNCChartNetManager.h
//  LBNewsComing
//
//  Created by liubo on 2017/8/20.
//  Copyright © 2017年 刘博. All rights reserved.
//

#import "LBNCBaseNetManager.h"
@interface LBNCChartNetManager : LBNCBaseNetManager
+ (id)getPicWithSetID:(NSInteger)setID kCompletionHandler;

@end
