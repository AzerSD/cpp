/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 09:57:24 by asioud            #+#    #+#             */
/*   Updated: 2023/05/09 09:57:26 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string replaceAll(const std::string& str, const std::string& from, const std::string& to) {
    std::string result = str;
    std::string::size_type pos = 0;

    while ((pos = result.find(from, pos)) != std::string::npos) {
        result.replace(pos, from.length(), to);
        pos += to.length();
    }

    return result;
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename(argv[1]);
    std::string s1(argv[2]);
    std::string s2(argv[3]);

    std::ifstream inputFile(filename.c_str());
    if (!inputFile) {
        std::cerr << "Error: Unable to open input file." << std::endl;
        return 1;
    }

    std::string outputFilename = filename + ".replace";
    std::ofstream outputFile(outputFilename.c_str());
    if (!outputFile) {
        std::cerr << "Error: Unable to open output file." << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        outputFile << replaceAll(line, s1, s2) << std::endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
