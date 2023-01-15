#include <iostream>
#include "Deck.h"
using namespace std;

bool isFibo(int n)
{
    if (n == 1 || n == 2 || n == 3|| n == 5|| n == 8|| n == 13
        || n == 21|| n == 34|| n == 55|| n == 89|| n == 144|| n == 233
        || n == 377|| n == 610)
        return true;
    else
        return false;
}

///int main(){

    Deck deck = Deck();
    int gamesPlayed = 0;
    while(true){
        cout<<"Welcome to Solitaire"<<endl;
        cout<<"1) New Deck"<<endl;
        cout<<"2) Display Deck"<<endl;
        cout<<"3) Shuffle Deck"<<endl;
        cout<<"4) Play Solitaire"<<endl;
        cout<<"5) Exit"<<endl;
        cout<<endl<<"Your Choice: ";
        int userInput;
        cin>> userInput;
        if(userInput==1){
            deck.refreshDeck();
            cout<<"The deck has been refresh!"<<endl;
        }
        else if (userInput==2){
            cout<<"Displaying deck: \n";
            deck.display();
        }
        else if (userInput==3){
            cout<<"Shuffling deck! \n";
            deck.shuffle();
        }
        else if (userInput==4){
            cout<<"Playing Fibonacci Solitaire!!!\n\n";
            int piles = 0;
            gamesPlayed++;
            while(deck.isEmpty()== false){
                int sum = 0;
                while(deck.isEmpty() == false && !isFibo(sum)){
                    Card top = deck.deal();
                    sum+= top.getValue();
                    top.display();
                }
                piles++;
                if(deck.isEmpty() == false && isFibo(sum))
                    cout<<"Fibo:"<<sum<<endl;
                if(deck.isEmpty()== true && isFibo(sum))
                    cout<<"Fibo:"<<sum<<endl<<endl<<"Winner in "<< piles <<" piles!"<<endl;
                if(deck.isEmpty()== true && !isFibo(sum))
                    cout<<"\nLoser in "<< piles <<" piles!"<<endl;
                if (deck.isEmpty() == true && isFibo(sum))
                    cout<<"Games played: "<< gamesPlayed<<endl;
            }
        }
        else if (userInput==5)
            break;
        else
            cout<<"Invalid choice!!!"<<endl;
        cout<<endl;
    }
}
