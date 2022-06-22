#ifndef __Deck_H__
#define __Deck_H__


// Different types of suits order of placing by
// link - https://www.britannica.com/topic/suit-playing-cards
static const string SUITS[] = { "Clubs", "Spades", "Hearts", "Diamonds"};

// We assume ace as one
static const string TYPES[] = { "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};

using namespace std;

namespace Seegrid {
class Deck {

public:
    Deck();
    ~Deck();

    void shuffle();
    Card deal_card();
    Card get_card_at(uint16_t pos);
    void print_deck();
    size_t size();

private:
    vector<Card> cards;
};
}

#endif // __Deck_H__
