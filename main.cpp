#include "card.h"
#include "deck.h"

using namespace std;

int main() {
    Seegrid::Deck deck;

    deck.print_deck();
    deck.shuffle();
    deck.print_deck();
}
