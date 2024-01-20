#ifndef TESTSCORES_H
#define TESTSCORES_H

const int MAX = 3;

class TestScores {
private:
    int grades[MAX];
    int average;

public:
    TestScores()
    {
        for (int i = 0; i < MAX; i++) {
            grades[i] = 0;
        }
    }
    int getAverage()
    {
        for (int i = 0; i < MAX; i++) {
            average += grades[i];
        }
        return (average /= MAX);
    }
    void setGrades(int* inputGrades)
    {
        for (int i = 0; i < MAX; i++) {
            grades[i] = inputGrades[i];
        }
    }
};
#endif