#include "Card.hpp"


//ctor sets face and suit
Card::Card(CardFace cardFace, CardSuit cardSuit)
{
	m_cardFace = cardFace;
	m_cardSuit = cardSuit;
}

CardSuit Card::getCardSuit()
{
	return m_cardSuit;
}

CardFace Card::getCardFace()
{
	return m_cardFace;
}
