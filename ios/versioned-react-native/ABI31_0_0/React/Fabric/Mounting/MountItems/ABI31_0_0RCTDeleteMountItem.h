/**
 * Copyright (c) 2015-present, Facebook, Inc.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>

#import <ReactABI31_0_0/ABI31_0_0RCTMountItemProtocol.h>
#import <ReactABI31_0_0/ABI31_0_0RCTPrimitives.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Deletes (returns to recycle pool) a component view.
 */
@interface ABI31_0_0RCTDeleteMountItem : NSObject <ABI31_0_0RCTMountItemProtocol>

- (instancetype)initWithComponentName:(NSString *)componentName
                                  tag:(ReactABI31_0_0Tag)tag;

@end

NS_ASSUME_NONNULL_END
