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
    /**
     * @brief Construct a new Deck object with 52 cards in order. Similar to a fresh deck of cards.
     * 
     */
    Deck();

    ~Deck();

    /**
     * @brief Shuffle the deck of cards in a random order.
     * 
     */
    void shuffle();

    /**
     * @brief Get a single card from the end of the deck. 
     * We assume that the deck of card is upside down so 
     * last card becomes the top card. 
     * The delt card is removed from the deck.
     * 
     * @return Card 
     */
    Card deal_card();

    /**
     * @brief Print the cards in the deck in normal order. 
     * We assume the cards are face first and a person is simply 
     * looking through the cards.
     * 
     */
    void print_deck();

    /**
     * @brief Get the size of the deck
     * 
     * @return size_t 
     */
    size_t size();

private:
    vector<Card> cards;
};
}

#endif // __Deck_H__
