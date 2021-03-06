//
// Created by freedom on 2020/6/21.
//

#import <Foundation/Foundation.h>
#import "OCUILayoutInterface.h"

@class MASConstraintMaker;


@interface OCUIBasicLayout : NSObject <OCUILayoutInterface>

@property(nonatomic, strong) UIView *entityView;
@property(nonatomic, strong) UIView *childView;

- (void)objc_layout;

- (void)objc_layoutWithMaker:(void(^)(MASConstraintMaker *))objc_maker;


@end