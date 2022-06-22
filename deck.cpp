#include "card.h"
#include "deck.h"

using namespace std;

namespace Seegrid {
Deck::Deck() {
    for (string suit: SUITS) {
        for (string type: TYPES) {
            Card card(suit, type);
            cards.push_back(card);
        }
    }
}

Deck::~Deck() {}

void Deck::shuffle() {
    vector<Card> newCards;
    set<uint8_t> usedRandom;

    random_device rd;
    mt19937 gen(rd()); // seed the generator
    uniform_int_distribution<> distr(0, cards.size() - 1); // define the range

    while(usedRandom.size() < cards.size()) {
        uint16_t i = distr(gen); // generate numbers
        if (usedRandom.find(i) == usedRandom.end()) {
            usedRandom.insert(i);
            newCards.push_back(cards[i]);
        }
    }

    cards = newCards;
};

Card Deck::deal_card() {
    Card c = cards.back();
    cards.pop_back();
    return c;
};

Card Deck::get_card_at(uint16_t pos) {
    return cards[pos];
}

void Deck::print_deck() {
    for (int i=0; i < cards.size(); i++) {
        Card c = cards[i];
        printf("Card at %d is %s of %s\n", i, c.get_type().c_str(), c.get_suit().c_str());
    }
}

size_t Deck::size() {
    return cards.size();
}
};

