//
// Created by lkant on 10/2/2025.
//
#include <string>
#include <fstream>
#include <vector>

void integerDoubler(std::string inputFile, std::string outputFile) {
    // read integers from binary file
    std::ifstream in(inputFile, std::ios::binary);

    std::vector<char> ints = {};
    long long i = 0;
    while (in) {
        in.read(reinterpret_cast<char*>(&ints[i]), sizeof(i));
        i++;
    }

    //doubles each
    for (auto& element : ints) {
        element *= 2;
    }

    //writes into other binary file
    std::ofstream out(outputFile, std::ios::binary);

    for (auto& element : ints) {
        out.write(reinterpret_cast<char*>(element), sizeof(i));
    }

    out.close();

}