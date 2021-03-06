//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SourceEditor/NSObject-Protocol.h>

@class MTLCommandBufferDescriptor, NSString;
@protocol MTLCommandBuffer, MTLDevice;

@protocol MTLCommandQueue <NSObject>
- (void)insertDebugCaptureBoundary;
- (id <MTLCommandBuffer>)commandBufferWithUnretainedReferences;
- (id <MTLCommandBuffer>)commandBufferWithDescriptor:(MTLCommandBufferDescriptor *)arg1;
- (id <MTLCommandBuffer>)commandBuffer;
@property(nonatomic, readonly) id <MTLDevice> device;
@property(nonatomic, copy) NSString *label;
@end

