#include "card.h"

using namespace std;

namespace Seegrid {
Card::Card(string s, string t): _suit(s), _type(t) {}

string Card::get_type() {
    return _type;
};

string Card::get_suit() {
    return _suit;
};
};

