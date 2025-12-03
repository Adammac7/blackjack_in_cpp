#include "Deck.h"
#include "../card/Card.h"
#include <stack>
#include <algorithm>
#include <random>

Deck::Deck(int numDecks,int cardsLeft,int shufflePoint): numDecks(numDecks), cardsLeft(cardsLeft), shufflePoint(shufflePoint) {}


void Deck::printDeck(){
    std::stack<Card> tempCards = cards;
    while (!tempCards.empty()){
        Card card = tempCards.top();
        cout << "Card Type: " << card.getType() << " Value: " << card.getValue() << " Is Ace: " << card.getIsAce() << "\n";
        tempCards.pop();
    }
}

Deck Deck::shuffle(){
    // shuffle logic here
    std::stack<Card> cards;
    std::vector<Card> cardVector;
    for (int d = 0; d < numDecks * 4; d++){
        for (char type : {'2','3','4','5','6','7','8','9','T','J','Q','K','A'}){
            int value;
            bool isAce = false;
            if (type >= '2' && type <= '9'){
                value = type - '0';
            } else if (type == 'T' || type == 'J' || type == 'Q' || type == 'K'){
                value = 10;
            } else if (type == 'A'){
                value = 11;
                isAce = true;
            }
            cardVector.push_back(Card(type, value, isAce));
        }
    }
    // shuffle the vector
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(cardVector.begin(), cardVector.end(), g);
    // push shuffled cards onto stack
    for (const auto& card : cardVector){
        cards.push(card);
    }
    this->cards = cards;
    


    return *this;
}