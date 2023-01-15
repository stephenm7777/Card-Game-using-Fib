#ifndef DECK_H_
#define DECK_H_
#include "Card.h"

class Deck{

public:

    int top;

    Card cards[52];

    Deck();

    void display();

    void refreshDeck();

    Card deal();

    void shuffle();

    bool isEmpty();

};

#endif