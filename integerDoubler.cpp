//
// Created by lkant on 10/2/2025.
//
#include <string>
#include <fstream>
#include <vector>
#include <cstdint>
#include <iostream>


void integerDoubler(std::string inputFile, std::string outputFile) {

	// read integers from binary file
    std::ifstream in(inputFile, std::ios::binary);

	if(!in) {
		std::cout << "file not opening" << std::endl;
	}
    std::vector<int32_t> ints;
    int i = 0;
    while (in) {
		ints.push_back(0);
        in.read(reinterpret_cast<char*>(&ints[i]), sizeof(int32_t));
        i++;
    }

    //writes into other binary file
    std::ofstream out(outputFile, std::ios::binary);

	if(!out) {
		std::cout << "file not opening" << std::endl;
	}

    for (auto& element : ints) {
		element *= 2;
        out.write(reinterpret_cast<char*>(element),sizeof(int32_t));
    }

    out.close();

}
