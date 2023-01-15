#ifndef CARD_H_
#define CARD_H_

class Card{

public:

    char suits;
    char ranks;

    Card();

    Card(char s, char r);

    void setCard(char r, char s);

    int getValue();

    void display();

};
#endif