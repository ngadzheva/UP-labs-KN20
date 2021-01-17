#include <iostream>
#include <stdlib.h>

using namespace std;

enum Faces { Ace, Deuce, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King };
enum Suits { Hearts, Diamonds, Clubs, Spades };

const int CARDS_NUMBER = 52;
const int CARDS_FACES = 13;
const int CARDS_SUITS = 4;

void initCards(int** deckOfCards) {
    int cardsNumber = 0;
    
    for (int i = 0; i < CARDS_SUITS; i++)
    {
        for (int j = 0; j < CARDS_FACES; j++)
        {
            deckOfCards[cardsNumber][0] = Suits(i);
            deckOfCards[cardsNumber][1] = Faces(j);
            cardsNumber++;
        }
    }
}

void shuffleCards(int** deckOfCards) {
    int currentCard = 0;

    for (int i = 0; i < CARDS_NUMBER; i++)
    {
        int first = rand() % CARDS_NUMBER;
        int second = rand() % CARDS_NUMBER;

        swap(deckOfCards[first][0], deckOfCards[second][0]);
        swap(deckOfCards[first][1], deckOfCards[second][1]);
    }
}

void displayCards(int** deckOfCards) {
    for (int i = 0; i < CARDS_NUMBER; i++)
    {
        cout << deckOfCards[i][0] << ':' << deckOfCards[i][1] << endl;
    }
}

char* getSuit(int suit) {
    switch (suit)
    {
        case Hearts: return "Hearts";
        case Diamonds: return "Diamonds";
        case Clubs: return "Clubs";
        case Spades: return "Spades";
        default: return "";
    }
}

char* getFace(int face) {
    switch (face)
    {
        case Ace: return "Ace";
        case Deuce: return "Deuce";
        case Three: return "Three";
        case Four: return "Four";
        case Five: return "Five";
        case Six: return "Six";
        case Seven: return "Seven";
        case Eight: return "Eight";
        case Nine: return "Nine";
        case Ten: return "Ten";
        case Jack: return "Jack";
        case Queen: return "Queen";
        case King: return "King";
        default: return "";
    }
}

void dealCard(int** deckOfCards, int& currentCard) {
    char* suit = getSuit(deckOfCards[currentCard][0]);
    char* face = getFace(deckOfCards[currentCard][1]);

    cout << face << ' ' << suit << endl;

    currentCard++;
}

int main() {
    int** deckOfCards = new int*[CARDS_NUMBER];

    for (int i = 0; i < CARDS_NUMBER; i++)
    {
        deckOfCards[i] = new int[2];
    }
    
    initCards(deckOfCards);
    shuffleCards(deckOfCards);
    // displayCards(deckOfCards);

    int numberOfCardsToDeal;
    int currentCard = 0;
    cout << "Enter number of cards to deal: ";
    cin >> numberOfCardsToDeal;
    
    while(currentCard < numberOfCardsToDeal) {
        dealCard(deckOfCards, currentCard);
    }
    
    for (int i = 0; i < 2; i++)
    {
        delete[] deckOfCards[i];
    }

    delete[] deckOfCards;
    
    return 0;
}