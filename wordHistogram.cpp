//
// Created by lkant on 10/2/2025.
//
#include <vector>
#include <string>
#include <iostream>

std::vector<int> wordHistogram(std::string sentence) {
    std::vector<int> wordCounts = {0};

    int count = 0;
    for (int i = 0; i < sentence.size(); i++) {
        if (strcomp(sentence.at(i), " ") == 0)  {

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