#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class Util {
public:
    static int generateNumber() {
        srand(time(NULL));
        return rand() % 900 + 100; 
    }
    static void calculateScore(int answer, int guess, int& strikes, int& balls) {
        strikes = 0;
        balls = 0;
        
        int answerDigits[3], guessDigits[3];
        for (int i = 0; i < 3; ++i) {
            answerDigits[i] = answer % 10;
            guessDigits[i] = guess % 10;
            answer /= 10;
            guess /= 10;
        }
        
        for (int i = 0; i < 3; ++i) {
            if (answerDigits[i] == guessDigits[i]) {
                strikes++;
            } else {
                for (int j = 0; j < 3; ++j) {
                    if (i != j && answerDigits[i] == guessDigits[j]) {
                        balls++;
                        break;
                    }
                }
            }
        }
    }
};