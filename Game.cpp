#include "Game.h"
#include <iostream>
using namespace std;
void changeSide(bool x,int &i,string &state){
		if(state=="PLUS1"&&x==true){
			i--;
            state = "MINUS1";
		}else if(state=="MINUS1"&&x==true){
            i++;
             state = "PLUS1";
        }
        else if(state=="PLUS1"&&x==false){
            i++;
        }
        else if(state=="MINUS1"&&x==false){
            i++;
        };

	}
bool turn(int input,vector<Card> &cards,Card &curr){
if(cards.at(input-1).is_legal(curr)){   
    Card c(cards.at(input-1));
    curr=c;  
      cards.erase(cards.begin()+input-1);
    return true;
}
else{
    cout<<"You can't put "<<curr<<" on "<<cards.at(input-1)<<endl;
    return false;
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
     cout<<"How many players?"<<endl;
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
    bool won = false;
    int i = 0;
    string state ="PLUS1";
    int input =-1;
    Card current = current.generate_card();
     while(won==false){//turns while          
        Player *p=&players.at(i%players.size());       
         cout<<"\ncurrent: "<<current<<endl;
         cout<<p->name<<", your turn - \n"<<"Your cards: ";
         printCards(p->cards);
         cout<<endl;   
         int input;
         cin>>input;
         if(input>p->cards.size()||input<=0)//wrong input->add card
         {
             cout<<"You lost your turn!!"<<endl;
             Card c=c.generate_card();
             p->cards.push_back(c);       
             if(state=="MINUS1"){
                 i--;
             }else{
                 i++;
             }
         }else{     
          while(turn(input,p->cards,current)==false){ //check for illegal card
              cout<<"Try again!"<<endl;
                cin>>input;

             }
             switch (current.get_sign()) 
            { 
               case sign::PLUS:              
               break; 
                 case sign::CD:  
                 /////////////

                 ///////////
                                 
                break; 
                 case sign::STOP:
                   changeSide(false,i,state); 
                   changeSide(false,i,state); 
               break; 
                default:  changeSide(false,i,state);
                break;   
          }   

         }
          if(p->cards.size()==0){//check if player won
              won=true;
              cout<<p->name<<" wins!"<<endl;
          }
          cout<<endl;

          
          
     } 
    };



