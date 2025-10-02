//
// Created by lkant on 10/2/2025.
//

#include "Student.hpp"
#include <string>
#include <vector>

void Student::addScore(int score) {
   scores.push_back(score);
}
double Student::average() const {
    double avg = 0.0;
    // (returns average of all scores, or 0.0 if none)
    if (scores.size() == 0) {
        return avg;
    }
    for (const auto& score : scores) {
        avg += score;
    }

    return avg / scores.size();
}
const std::string& Student::getName() const {
    return name;
}
int Student::getId() const {
    return id;
}