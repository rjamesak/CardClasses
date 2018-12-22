#ifndef DECK_HPP
#define DECK_HPP
#include "Card.hpp"
#include <vector>
#include <algorithm>


class Deck
{
private:
	std::vector<Card*> deck;
	int numFaces;
	int numSuits;
	
protected:
public:
	Deck();
	~Deck();
	void shuffle();
	void shuffle(unsigned int);
	Card* drawTop();
	void printDeck();
};

#endif //DECK_HPP