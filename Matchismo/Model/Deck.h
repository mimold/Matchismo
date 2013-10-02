//
//  Deck.h
//  Matchismo
//
//  Created by Mihai Moldovan on 9/30/13.
//  Copyright (c) 2013 Mihai Moldovan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;

- (Card *)drawRandomCard;

@end
