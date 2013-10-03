//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by Mihai Moldovan on 10/2/13.
//  Copyright (c) 2013 Mihai Moldovan. All rights reserved.
//

#import "Deck.h"

@interface CardMatchingGame : Deck


//designated initializer

- (id) initWithCardCount:(NSUInteger)count
               usingDeck:(Deck *)deck;

- (void) flipCardAtIndex:(NSUInteger)index;

- (Card *)cardAtIndex:(NSUInteger)index;

@property (readonly, nonatomic) int score;
@end
