#include "card.h"
#include "deck.h"

using namespace std;

int main() {
    Seegrid::Deck deck;

    // Simple program to print, shuffle and print again.
    deck.print_deck();
    deck.shuffle();
    deck.print_deck();
}
