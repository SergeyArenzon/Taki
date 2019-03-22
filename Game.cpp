#include "Game.h"
#include <iostream>
using namespace std;

static string state = "PLUS1";

void cardCheck(const Card&   curr, int&  i){ 
             switch (curr.get_sign()) 
            { 
               case sign::PLUS:     
                 
               break; 
                 case sign::CD:  
                 if(state =="PLUS1"){
                     i--;   
                     state ="MINUS1";
                 }else{
                    i++;
                     state = "MINUS1";
                 }
                                 
                break; 
                 case sign::STOP:
                
                    if(state =="PLUS1"){
                     i=i+2;                       
                 }else{
                     i=i-2;                     
                 }
 
               break; 

                default:

                if(state =="PLUS1"){
                     i++;                       
                 }else{
                     i--;                     
                 }

        
                break;

                  
          }   

               
  
}


void printCards(vector<Card> &cards){
int cardCounter=1;
for(auto &i : cards){
            cout<<"("<<cardCounter++<<")"<<i<<" ";
        }

}
Game::Game(){
    playersNum=0;
    cardsNum=0;  
    

}

 void Game::start(){                       
     cout<<"How many players?"<<endl;   //players input
     cin>>playersNum;
      cout<<"How many cards?\n";
      cin>>cardsNum;
    vector <Player> players;

    for(size_t i = 0; i < playersNum; i++)  //player initalization
    {
        string name;
        cout<<"player number "<<i+1<<" name?"<<endl;
        cin>>name;
        Player p(name,cardsNum);
        players.push_back(p);
    }

bool won=false;
int i = 0;
 Card current = current.generate_card();
while(won==false){
    Player *p=&players.at(i%players.size()); 
    cout<<"\ncurrent: "<<current<<endl;
    cout<<p->name<<", your turn - \n"<<"Your cards: ";
    printCards(p->cards);
    cout<<endl;   
    if(p->play(current)) cardCheck(current,i);   //check if p took card or played
    else {  //if took->next turn
        if(state =="PLUS1"){
             i++;                       
             }else{
                 i--;                     
              }


    }
    if(p->cards.size()==0){//check if player won
        won=true;
        cout<<p->name<<" wins!"<<endl;
    }
     cout<<endl;
     
}
    
    };



