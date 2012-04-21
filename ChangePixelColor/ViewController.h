//
//  ViewController.h
//  ChangePixelColor
//
//  Created by Cassidy Pangell on 4/19/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class convertToColor;

@interface ViewController : UIViewController{
    
    UIImage *bgImage;
    UIImage *modImage;
    UInt32  newColor;
    UIColor *modifiedColor;
    unsigned char r, g, b;
    
    
    
}
- (UIColor *)convertWithHex:(UInt32)col;
- (UIImage *)convertToColor:(UIImage *)img;
- (UIImage *)convertAll:(UInt32)col :(UIImage *)img;
- (UIImage *)toColor:(UIImage *)img :(unsigned char)r;
@end
