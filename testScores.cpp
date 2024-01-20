#include "TestScores.h"
#include <iostream>
#include <string>

void getScores(std::string*);

int main()
{
    std::string scores[3];
    getScores(scores);
    TestScores classroom;

    return 0;
}

void getScores(std::string* scores)
{
    bool falseResponse = true;

    for (int i = 0; i < 3; i++) {
        falseResponse = true;
        std::cout << "Test score Number " << i + 1 << ": ";
        while (falseResponse) {
            std::cin >> scores[i];
            for (int j = 0; j < scores[i].length(); j++) {
                if (!(isdigit(scores[i][j]))) {
                    std::cout << "\nIncorrect Response! Try again.\n\n";
                    std::cout << "Test score Number " << i + 1 << ": ";
                    falseResponse = true;
                    break;
                } else {
                    falseResponse = false;
                }
            }
        }
    }
    return;
}