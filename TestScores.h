#ifndef TESTSCORES_H
#define TESTSCORES_H
#include <string>

const int MAX = 3;

class TestScores {
private:
    int grades[MAX];
    double average;

public:
    TestScores() {
        for (int i = 0; i < MAX; i++) {
            grades[i] = 0;
        }
    }
    double getAverage() {
        for (int i = 0; i < MAX; i++) {
            average += grades[i];
        }
        return (average /= MAX);
    }
    void setGrades(std::string* inputGrades) {
        for (int i = 0; i < MAX; i++) {
            grades[i] = stoi(inputGrades[i]);
        }
    }
};
#endif