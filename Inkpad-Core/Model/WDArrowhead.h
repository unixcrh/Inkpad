//
//  WDArrowhead.h
//  Inkpad
//
//  This Source Code Form is subject to the terms of the Mozilla Public
//  License, v. 2.0. If a copy of the MPL was not distributed with this
//  file, You can obtain one at http://mozilla.org/MPL/2.0/.
//
//  Copyright (c) 2013 Steve Sprang
//

#import <Foundation/Foundation.h>

@interface WDArrowhead : NSObject

@property (nonatomic, readonly) CGPoint attachment;
@property (nonatomic, readonly) CGPathRef path;

@property (nonatomic, readonly) CGRect bounds;
@property (nonatomic, readonly) float insetLength;

+ (NSDictionary *) arrowheads;

+ (WDArrowhead *) arrowheadWithPath:(CGPathRef)pathRef attachment:(CGPoint)attach;
- (id) initWithPath:(CGPathRef)pathRef attachment:(CGPoint)attach;

- (CGRect) boundingBoxAtPosition:(CGPoint)pt scale:(float)scale angle:(float)angle;
- (void) addArrowInContext:(CGContextRef)ctx position:(CGPoint)pt scale:(float)scale angle:(float)angle;

@end
