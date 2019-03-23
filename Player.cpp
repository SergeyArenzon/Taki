/* Sergey Arenzon 321211286 */
#include "Player.h"
#include "Card.h"
#include <vector>
Player::Player(){

 name="";
 num_of_cards=0;
cards = vector<Card>();
}
Player::Player(string nam,int cardsNum){
    name=nam;
    num_of_cards=cardsNum;
    
    for(size_t i = 0; i < num_of_cards; i++)
    {
        Card c = c.generate_card();
        cards.push_back(c);
     

    } 
};
bool Player::play(Card& curr){
    int input;
    cin>>input;
    
    if(input>this->cards.size()||input<=0){//took card
        Card c=c.generate_card();
        this->cards.push_back(c);
        
        return false;
    }
    else if(cards.at(input-1).is_legal(curr)) {//played->remove card
        curr=cards.at(input-1);
        cards.erase(cards.begin()+input-1);
        return true;

    }else{
        cout<<"\nYou can't put "<<cards.at(input-1)<<" on "<<curr;
        play(curr);//illegal card chosen->wait for input again
    }


}
