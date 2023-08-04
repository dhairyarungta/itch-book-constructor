#pragma once

#include <iostream>
#include <string>
#include <fstream>

class Writer 
{
    std::string fileName;
    std::ofstream file;

public:
    Writer(const std::string& );
    Writer() = default;
    ~Writer();
    
    void writeLine(const std::string& line);
    std::string getFileName(void)const;
};
