//
// Created by lkant on 10/2/2025.
//

#ifndef THE_FREAKING_EXAM_1_STUDENT_H
#define THE_FREAKING_EXAM_1_STUDENT_H

#include <string>
#include <vector>


class Student {
public:
    std::string name;
    int id;
    std::vector<int> scores;

    void addScore(int score);
    double average() const; // (returns average of all scores, or 0.0 if none)
    const std::string& getName() const;
    int getId() const;

};


#endif //THE_FREAKING_EXAM_1_STUDENT_H