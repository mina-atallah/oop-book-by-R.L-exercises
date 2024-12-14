#include <cstdlib> //for srand(), rand()
#include <ctime> //for time for srand()
#include <iostream>
using namespace std;
/* 
    286
    In the game of contract bridge, each of four players is dealt 13 cards, thus exhausting the
    entire deck. Modify the CARDARAY program in this chapter so that, after shuffling the
    deck, it deals four hands of 13 cards each. Each of the four players’ hands should then be
    displayed.
*/
#include <cstdlib> //for srand(), rand()
#include <ctime> //for time for srand()
using namespace std;


enum Suit { clubs, diamonds, hearts, spades };
//from 2 to 10 are integers without names
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;
////////////////////////////////////////////////////////////////
class card
{
private:
    int number; //2 to 10, jack, queen, king, ace
    Suit suit; //clubs, diamonds, hearts, spades
public:
    card() //constructor
    { }
    void set(int n, Suit s) //set card
    { suit = s; number = n; }

    void display(); //display card
};
//--------------------------------------------------------------
void card::display() //display the card
{
if( number >= 2 && number <= 10 )
    cout << number;
else
{
    switch(number)
    {
    case jack: cout << "J"; break;
    case queen: cout << "Q"; break;
    case king: cout << "K"; break;
    case ace: cout << "A"; break;
    }
}
    switch(suit)
    {
        case clubs: cout << static_cast<char>(5); break;
        case diamonds: cout << static_cast<char>(4); break;
        case hearts: cout << static_cast<char>(3); break;
        case spades: cout << static_cast<char>(6); break;
    }
}

int main()
{
    const int  TOTAL_CARDS = 52;
    card deck[TOTAL_CARDS];

    int j;
    cout << endl;
    for(j=0; j < TOTAL_CARDS; j++) //make an ordered deck
    {
        int num = (j % 13) + 2; //cycles through 2 to 14, 4 times
        Suit su = Suit(j / 13); //cycles through 0 to 3, 13 times
        deck[j].set(num, su); //set card
    }

    cout << "Ordered deck:\n";

    for(j=0; j<52; j++) //display ordered deck
    {
        deck[j].display();
        cout << " ";
        if( !( (j+1) % 13) ) //newline every 13 cards
            cout << endl;
    }

    srand( time(NULL) ); //seed random numbers with time

    for(j=0; j<52; j++) //for each card in the deck,
    {
        int k = rand() % 52; //pick another card at random
        card temp = deck[j]; //and swap them
        deck[j] = deck[k];
        deck[k] = temp;
    }

    cout << "\nShuffled deck:\n";

    for(j=0; j<52; j++) //display shuffled deck
    {
        deck[j].display();
        cout << ", ";
        if( !( (j+1) % 13) ) //newline every 13 cards
        cout << endl;
    }

    const int TOTAL_PLAYERS = 4;
    const int TOTAL_CARDS_PER_PLAYER = TOTAL_CARDS / TOTAL_PLAYERS;
    card players[TOTAL_CARDS][TOTAL_CARDS_PER_PLAYER];

    for (int i = 0; i < TOTAL_CARDS; ++i) {
        players[i % 4][i % 13] = deck[i];
    }

    for (int i = 0; i < TOTAL_PLAYERS; ++i) {
        cout << "\nPlayer No " << i + 1 << ':' << endl;
        for (int j = 0; j < TOTAL_CARDS_PER_PLAYER; ++j) {
            players[i][j].display();
            cout << ' ';
        }
        cout << endl;
    }
    return 0;
} //end main