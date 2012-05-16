//
//  MOBox.h
//  Mocha
//
//  Created by Logan Collins on 5/12/12.
//  Copyright (c) 2012 Sunflower Softworks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JavaScriptCore/JavaScriptCore.h>


/*!
 * @class MOBox
 * @abstract A boxed ObjC object
 */
@interface MOBox : NSObject

/*!
 * @property representedObject
 * @abstract The boxed ObjC object
 * 
 * @result An object
 */
@property (strong) id representedObject;

/*!
 * @property JSObject
 * @abstract The JSObject representation of the box
 * 
 * @result A JSObjectRef value
 */
@property JSObjectRef JSObject;

@end
