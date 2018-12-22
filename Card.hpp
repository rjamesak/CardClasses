#ifndef CARD_HPP
#define CARD_HPP

enum class CardSuit { CLUBS, DIAMONDS, HEARTS, SPADES };
enum class CardFace {ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN,
JACK, QUEEN, KING};

class Card
{
private:
	CardSuit m_cardSuit;
	CardFace m_cardFace;
protected:
public:
	Card() = delete;
	Card(CardFace, CardSuit);
	CardSuit getCardSuit();
	CardFace getCardFace();
};


#endif //CARD_HPP