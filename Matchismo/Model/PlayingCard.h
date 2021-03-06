//
//  PlayingCard.h
//  Matchismo
//
//  Created by Mihai Moldovan on 9/30/13.
//  Copyright (c) 2013 Mihai Moldovan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface PlayingCard : Card

@property(strong, nonatomic) NSString *suit;
@property(nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
