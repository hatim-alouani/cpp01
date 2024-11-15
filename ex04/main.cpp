#include <iostream>
#include <fstream>
#include <string>

std::string myReplace(std::string line, std::string search, std::string replace){
    std::string result;
    size_t pos = 0;
    size_t lenSearch = search.length();
    size_t lenLine = line.length();

    while (pos < lenLine){
        size_t found = line.find(search, pos);
        if (found == std::string::npos)
        {
            result += line.substr(pos);
            break ; 
        }
        result += line.substr(pos, found - pos);
        result += replace;
        pos = found + lenSearch;
    }
    return result;
}

int main(int arc, char **arv){
    if (arc != 4)
    {
        std::cerr << "Usage: " << arv[0] << " <filename> <search_word> <replace_word>" << std::endl;
        exit(0);
    }
    std::string fileName = arv[1];
    std::string search = arv[2];
    std::string replace = arv[3];
    std::ifstream file(fileName.c_str());
    if (!file)
    {
        std::cout << "Error can't open this file" << std::endl;
        exit(0);
    }
    std::ofstream replaceFile((fileName + ".replace").c_str());
    if (!replaceFile)
    {
        std::cout << "Error creating the replace file" << std::endl;
        file.close();
        exit(0);
    }
    std::string line;
    while (std::getline(file, line)){
        line = myReplace(line, search, replace);
        replaceFile << line << std::endl;
    }
    file.close();
    replaceFile.close();
    std::cout << "Processing..." << std::endl << "Processing complete";
    return 0; 
}