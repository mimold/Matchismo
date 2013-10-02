//
//  Card.h
//  Matchismo
//
//  Created by Mihai Moldovan on 9/30/13.
//  Copyright (c) 2013 Mihai Moldovan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property(strong, nonatomic) NSString *contents;
@property(nonatomic, getter = isFaceUp) BOOL faceUp;
@property(nonatomic, getter = isUnplayable) BOOL unplayable;

- (int)match:(NSArray *)otherCards;
@end
