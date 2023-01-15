#include <iostream>
#include <map>
#include "Card.h"

using namespace std;

Card::Card(){

    this->ranks = ranks;
    this->suits = suits;
}

void Card::setCard(char r, char s){
    ranks = r;
    suits = s;
}

Card::Card(char s, char r){
    suits = s;
    ranks = r;
}

int Card::getValue(){

    map<char,int> value;

    value.insert(pair<char, int>('A',1));
    value.insert(pair<char, int>('2',2));
    value.insert(pair<char, int>('3',3));
    value.insert(pair<char, int>('4',4));
    value.insert(pair<char, int>('5',5));
    value.insert(pair<char, int>('6',6));
    value.insert(pair<char, int>('7',7));
    value.insert(pair<char, int>('8',8));
    value.insert(pair<char, int>('9',9));
    value.insert(pair<char, int>('T',10));
    value.insert(pair<char, int>('J',10));
    value.insert(pair<char, int>('Q',10));
    value.insert(pair<char, int>('K',10));

    return value[ranks];

}

void Card::display() {

    cout << ranks << suits << ", ";
}
