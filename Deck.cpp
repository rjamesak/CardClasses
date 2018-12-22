#include "Deck.hpp"
#include <iostream>

Deck::Deck()
{
	//Make a standard deck
	numFaces = 13;
	numSuits = 4;
	//13 faces x 4 suits
	int cardCount = 0;
	CardSuit suit = CardSuit::CLUBS;
	for (int i = 0; i < 4; i++) {
		switch (i) {
		case 0: suit = CardSuit::CLUBS;
			break;
		case 1: suit = CardSuit::DIAMONDS;
			break;
		case 2: suit = CardSuit::HEARTS;
			break;
		case 3: suit = CardSuit::SPADES;
			break;
		}
		for (int j = 1; j <= 13; j++) {
			Card* newCard = new Card(static_cast<CardFace>(j), suit);
			deck.push_back(newCard);
		}
	}

}

Deck::~Deck()
{
	for (unsigned int i = 0; i < deck.size(); i++) {
		delete deck[i];
	}
}

void Deck::shuffle()
{
	std::random_shuffle(deck.begin(), deck.end());
}

void Deck::shuffle(unsigned int numShuffles)
{
	for (unsigned int i = 0; i < numShuffles; i++) {
		std::random_shuffle(deck.begin(), deck.end());
	}
}

Card* Deck::drawTop()
{
	if (deck.size() > 0) {
		Card* top = deck.back();
		delete deck.back();
		deck.pop_back();
		return top;
	}
	return nullptr;
}

void Deck::printDeck()
{
	for (unsigned int i = 0; i < deck.size(); i++) {
		std::cout << "Face: " << static_cast<int>(deck[i]->getCardFace()) << std::endl;
		std::cout << "Suit: " << static_cast<int>(deck[i]->getCardSuit()) << std::endl;
	}
}
