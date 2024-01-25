#include "TestScores.h"

#include <iomanip>
#include <iostream>
#include <string>

void getScores(std::string*);
void outputScores(double);

int main() {
    double average = 0;
    std::string scores[MAX];
    TestScores classroom;

    getScores(scores);
    classroom.setGrades(scores);
    average = classroom.getAverage();
    outputScores(average);

    return 0;
}

void getScores(std::string* scores) {
    bool falseResponse = true;

    for (int i = 0; i < MAX; i++) {
        falseResponse = true;
        std::cout << "Test grade " << i + 1 << ": ";
        while (falseResponse) {
            std::cin >> scores[i];
            if (scores[i][(scores[i].length() - 1)] == '%')
                scores[i].erase(scores[i].length() - 1);
            for (int j = 0; j < scores[i].length(); j++) {
                if ((isdigit(scores[i][j]))) {
                    if (stoi(scores[i]) > 100) {
                        std::cout << "\nOnly grades up to 100%! Try again.\n\n";
                        std::cout << "Test grade " << i + 1 << ": ";
                        falseResponse = true;
                        break;
                    } else
                        falseResponse = false;
                } else {
                    std::cout << "\nOnly positive integers allowed! Try again.\n\n";
                    std::cout << "Test grade " << i + 1 << ": ";
                    falseResponse = true;
                    break;
                }
            }
        }
    }
    return;
}

void outputScores(double average) {
    std::cout << "\n\nThe Average for the class is: " << std::fixed << std::setprecision(2) << average << "%\n\n";
    return;
}