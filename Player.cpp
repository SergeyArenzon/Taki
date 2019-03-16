#include "Player.h"
#include "Card.h"
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

