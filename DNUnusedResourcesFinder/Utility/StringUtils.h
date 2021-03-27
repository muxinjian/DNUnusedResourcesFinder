//
//  StringUtils.h
//  DNUnusedResourcesFinder
//
//  Created by muxinjian on 15/9/1.
//  Copyright (c) muxinjian. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface StringUtils : NSObject

+ (NSString *)stringByRemoveResourceSuffix:(NSString *)str;

+ (NSString *)stringByRemoveResourceSuffix:(NSString *)str suffix:(NSString *)suffix;

+ (BOOL)isImageTypeWithName:(NSString *)name;

@end
