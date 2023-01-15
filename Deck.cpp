#include <iostream>
#include "Deck.h"
using namespace std;

Deck::Deck(){

    top = -1;
    char suits[4] = {'S', 'H', 'C', 'D'};
    char rank [13] = {'A', '2', '3', '4', '5', '6', '7', '8',
                      '9', 'T', 'J', 'Q', 'K'};

    int cardIndex = 0;
    for (char suits: suits) {
        for (char rank: rank){
            cards[cardIndex] = Card(suits, rank);
            cardIndex++;
        }
    }
};

void Deck::display(){

    for(int i = 0; i <52; i++){
        cards[i].display();
        cout << endl;
    }
}

void Deck::refreshDeck(){
    top = -1;
    char suits[4] = {'S', 'H', 'C', 'D'};
    char rank [13] = {'A', '2', '3', '4', '5', '6', '7', '8',
                      '9', 'T', 'J', 'Q', 'K'};

    int total = 0;
    for(char suits: suits){
        for(char rank: rank){
            cards[total] = Card(suits, rank);
            total++;
        }
    }
}

Card Deck::deal(){

    return cards[top++];
}

void Deck::shuffle() {
    int index = 0;
    int v1 = rand() % 52 + 1;

    for (int i = 0; i < 52; i++) {
        index = i + (v1 - i);

        if (index != i) {

            Card temp = cards[i];
            cards[i] = cards[index];
            cards[index] = temp;
        }
    }

    cout << "Cards Shuffled" << endl;

}

bool Deck::isEmpty(){
    int checker = 52 - top;
    if (checker>0){
        return false;
    }
    else{
        return true;
    }
}



