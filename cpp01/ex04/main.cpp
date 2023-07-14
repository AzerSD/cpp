/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 09:57:24 by asioud            #+#    #+#             */
/*   Updated: 2023/07/04 22:03:44 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


const std::string RESET     = "\033[0m";
const std::string GREEN     = "\033[32m";
const std::string YELLOW    = "\033[33m";
const std::string RED       = "\033[31m";
const std::string CYAN      = "\033[36m";


std::string replaceAll(const std::string& str, const std::string& from, const std::string& to) {
    std::string result;
    std::string::size_type start = 0;
    std::string::size_type end = 0;
    
    while ((end = str.find(from, start)) != std::string::npos)
    {
        result += str.substr(start, end - start);
        result += to;
        start = end + from.length();
    }
    
    result += str.substr(start);
    return result;
}


int main(int argc, char* argv[]) {
    if (argc != 4)
    {
        std::cerr << RED << "Usage: " << CYAN << argv[0] << YELLOW << " <filename> <s1> <s2>" << RESET << std::endl;
        return 1;
    }

    std::string filename(argv[1]);
    std::string s1(argv[2]);
    std::string s2(argv[3]);

    /* open a file and name it inputFile */
    std::ifstream inputFile(filename.c_str());
    if (!inputFile)
    {
        std::cerr << RED << "Error: Unable to open input file." << RESET << std::endl;
        return 1;
    }

    std::string outputFilename = filename + ".replace";
    std::ofstream outputFile(outputFilename.c_str());
    if (!outputFile)
    {
        std::cerr << RED << "Error: Unable to open output file." << RESET << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line))
    {
        outputFile << replaceAll(line, s1, s2) << std::endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
