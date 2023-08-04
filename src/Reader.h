#pragma once // 

#include <string>
#include <iostream>
#include <time.h>
#include <cstring>
#include <fstream>
#include <inttypes.h>


#include "Message.h"
#include "Writer.h"


class Reader 
{
private:
    std::string fileName;
    std::ifstream file;
    std::string stock;
    unsigned count =0;
    char message[64];
    bool validFile =0 ;
    time_t startTime ;
public :
    Reader(const std::string& fileName, const std::string& stock);
    Reader(const std::string& _stock);
    bool isValid(void)const;
    virtual~Reader();
    Message createMessage(void);

    bool eof(void);
    void printProgresss(void);
    virtual void readBytesIntoMessage(const long &);
    virtual void skipBytes(const long &);
    void setMessage(const char*);
    virtual char getKey(void);
    std::string getFileName(void)const;
    std::string getStock(void)const ;

};
