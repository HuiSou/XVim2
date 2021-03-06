//
//  SourceCodeEditorViewProxy+Yank.h
//  XVim2
//
//  Created by Ant on 02/10/2017.
//  Copyright © 2017 Shuichiro Suzuki. All rights reserved.
//

#import "SourceEditorViewProxy.h"
#import "XVimMotionType.h"
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SourceEditorViewProxy (Yank) <SourceEditorViewYankProtocol>
- (void)xvim_yankRange:(NSRange)range withType:(MOTION_TYPE)type;
- (void)xvim_yankSelection:(XVimSelection)sel;
- (void)xvim_killSelection:(XVimSelection)sel;
- (NSRange)xvim_getYankRange:(XVimMotion*)motion withRange:(XVimRange)to;
@end

NS_ASSUME_NONNULL_END
