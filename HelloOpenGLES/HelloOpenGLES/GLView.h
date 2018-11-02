//
//  GLView.h
//  MeituiOS_Learning_OpenGLES
//
//  Created by ZhangXiaoJun on 16/8/1.
//  Copyright © 2016年 Meitu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GLView : UIView
{
    __unsafe_unretained CAEAGLLayer *_eaglLayer;
    EAGLContext *_context;
    GLuint _framebuffer, _renderbuffer;
    
    CGSize _oldSize;
}

@end
