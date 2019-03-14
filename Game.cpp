#include "Game.h"
#include <iostream>
using namespace std;

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
        Player p;
        cout<<"player number "<<i+1<<" name?"<<endl;
        cin>>p.name;
        players.push_back(p);
        cout<<players.at(0).name<<endl;
    }
    
     
    };



