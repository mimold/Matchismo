//
//  CardGameViewController.m
//  Matchismo
//
//  Created by Mihai Moldovan on 9/30/13.
//  Copyright (c) 2013 Mihai Moldovan. All rights reserved.
//

#import "CardGameViewController.h"

@interface CardGameViewController ()

@property (strong, nonatomic) IBOutletCollection(UIButton) NSArray *cardButtons;
@property (weak, nonatomic) IBOutlet UILabel *flipsLabel;
@property (nonatomic) int flipCount;
@property (strong, nonatomic) Deck *deck;

@end

@implementation CardGameViewController

- (void)setCardButtons:(NSArray *)cardButtons
{
    _cardButtons = cardButtons;
    for(UIButton *cardButton in self.cardButtons){
        Card *card = [self.deck drawRandomCard];
        [cardButton setTitle:card.contents forState:UIControlStateSelected];
    }
}

- (Deck *)deck
{
    if(!_deck) _deck = [[PlayingCardDeck alloc] init];
    return _deck;
}

- (void) setFlipCount:(int)flipCount
{
    _flipCount = flipCount;
    self.flipsLabel.text = [NSString stringWithFormat:@"Flips: %d", self.flipCount];
}

- (IBAction)flipCard:(UIButton *)sender
{
    sender.selected = !sender.selected;
    //Card *card = [self.deck drawRandomCard];
    //[sender setTitle:card.contents forState:UIControlStateNormal];
    self.flipCount++;
}

@end
