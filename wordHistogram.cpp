//
// Created by lkant on 10/2/2025.
//
#include <vector>
#include <string>
#include <iostream>


std::vector<int> wordHistogram(std::string sentence) {
    std::vector<int> wordCounts = {};

    if (sentence.size() == 0) {
        return wordCounts;
    }

    size_t count = 0;
    for (size_t i = 0; i < sentence.size(); i++) {
        if (sentence.at(i) == ' ')  {

            if (wordCounts.size() > count) {
                wordCounts[count] += 1;
            }

            // count too big
            while (wordCounts.size() <= count) {
                if (wordCounts.size() == (count + 1)) {
                    wordCounts.push_back(1);
                } else {
                    wordCounts.push_back(0);
                }
            }

            count = 0;
        }
    }

    return wordCounts;
}



