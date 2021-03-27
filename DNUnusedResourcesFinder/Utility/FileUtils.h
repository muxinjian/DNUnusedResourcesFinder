//
//  FileUtils.h
//  DNUnusedResourcesFinder
//
//  Created by muxinjian on 15/3/25.
//  Copyright © muxinjian. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FileUtils : NSObject
/**
 *  get file size, contain directory
 *  @param path  path
 *  @param isDir
 *
 *  @return
 */
+ (uint64_t)fileSizeAtPath:(NSString *)path isDir:(BOOL *)isDir;

+ (uint64_t)folderSizeAtPath:(NSString *)path;

@end
