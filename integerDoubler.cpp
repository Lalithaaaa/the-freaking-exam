//
// Created by lkant on 10/2/2025.
//
#include <string>
#include <fstream>
#include <vector>
#include <cstdint>


void integerDoubler(std::string inputFile, std::string outputFile) {

	// read integers from binary file
    std::ifstream in(inputFile, std::ios::binary);

	if (!in) {
		std::cout << "file not found" << endl;
	}

    std::vector<int> ints;
    int i = 0;
    while (in) {
		int.push_back(0);
        in.read(reinterpret_cast<char*>(&ints[i]), sizeof(i));
        i++;
    }

	in.close();

    //writes into other binary file
    std::ofstream out(outputFile, std::ios::binary);

    for (auto& element : ints) {
		element *= 2;
        out.write(reinterpret_cast<char*>(element), sizeof(i));
    }

    out.close();

}
