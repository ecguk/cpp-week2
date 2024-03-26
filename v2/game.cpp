#include <iostream>
#include <cstdlib>
#include <ctime>
#include "util.cpp"
using namespace std;
class Game {
public:
    void startGame() {
        int answer = Util::generateNumber();
        cout << "Answer is "<< answer<<endl;
        int guess;
        int strikes, balls;
        
        do {
            cout << "Enter a guess: ";
            cin >> guess;
            
            Util::calculateScore(answer, guess, strikes, balls);
            cout << "Strikes: " << strikes << ", Balls: " << balls << endl;
        } while (strikes != 3);
        
        cout << "You win!" << endl;
    }
};