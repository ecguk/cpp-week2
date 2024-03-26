#include <iostream>
#include <cstdlib>
#include <ctime>
#include "util.cpp"
using namespace std;
class Game {
public:
    void startGame() {
        int i=0;
        int answer = Util::generateNumber();
        int guess;
        int strikes, balls;
        
        do {
            cout<<5-i<<" chance left."<<endl;
            cout << "Enter a guess: ";
            cin >> guess;
            
            Util::calculateScore(answer, guess, strikes, balls);
            cout << "Strikes: " << strikes << ", Balls: " << balls << endl;
            i++;
            if(i==5){
                cout << "You lose!" << endl;
                break;
            }
            else if(strikes==3){    
                cout << "You win!" << endl;
                break;
            }    
        } while (1);
        
    }
};