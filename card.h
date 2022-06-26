#ifndef __Card_H__
#define __Card_H__

#include <string>
#include <cstring>
#include <vector>
#include <random>
#include <set>
#include <iostream>

using namespace std;

namespace Seegrid {
class Card {
public:
    /**
     * @brief Construct a new Card object
     * 
     * @param s Suit of the card. For example "Spades", "Clubs", etc.
     * @param t Type of the card. For example "Ace", "2", "3", etc.
     */
    Card(string s, string t);

    string get_type();
    string get_suit();

private:
    string _type;
    string _suit;
};
}

#endif // __Card_H__
