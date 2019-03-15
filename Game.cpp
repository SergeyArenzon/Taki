#include "Game.h"
#include <iostream>
using namespace std;

void turn(Card &card,Card &curr){

if(card.is_legal(curr)){
   Card c(curr);
    card = c;
    curr=curr.generate_card();
}
  
}

Game::Game(){
    playersNum=0;
    cardsNum=0;  
    

}

 void Game::start(){
     cout<<"How many players?"<<endl;
     cin>>playersNum;
      cout<<"How many cards?\n";
      cin>>cardsNum;
    vector <Player> players;

    for(size_t i = 0; i < playersNum; i++)
    {
        string name;
        cout<<"player number "<<i+1<<" name?"<<endl;
        cin>>name;
        Player p(name,cardsNum);
        players.push_back(p);
    }
         
        

    bool won = false;
    int i = 0;
    Player p;
    int input =-1;
    Card current = current.generate_card();
     while(won==false){//turns while
       
         p=players.at(i%players.size());
         cout<<"\ncurrent: "<<current<<endl;
         cout<<p.name<<", your turn - \n"<<"Your cards: ";
         int cardCounter=1;
        for(auto &i : p.cards){
            cout<<"("<<cardCounter++<<")"<<i<<" ";
        }
        cout<<endl;
       
        int input;
        cin>>input;
        turn(p.cards.at(input-1),current);
        cout<<endl;
        i++;
     }


     
    };



