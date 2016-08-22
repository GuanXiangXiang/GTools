//
//  NSObject+Runtime.h
//  tools
//
//  Created by 祥祥管 on 15/10/4.
//  Copyright © 2015年 祥祥管. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Runtime)

-(NSDictionary *)getAllPropertiesAndValues;

- (NSArray *)getAllProperties;

-(NSArray *)getAllMethods;

@end
