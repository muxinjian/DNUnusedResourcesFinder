//
//  ViewController.h
//  DNUnusedResourcesFinder
//
//  Created by muxinjian on 15/3/28.
//  Copyright (c) muxinjian. All rights reserved.
//

#import <Cocoa/Cocoa.h>

typedef enum : NSUInteger {
    kBottomClickTypeUnused = 0,
    kBottomClickTypeWaring = 1,
    kBottomClickTypeShortage = 2,
} kBottomClickType;

@interface MainViewController : NSViewController


@end

