#pragma once

#include <map>
#include <string>
#include <sstream>
#include <iostream>
#include "utility.h"


class OrderBook
{
    time_type timestamp;
    std::map<price_type, size_type>buySide;
    std::map<price_type, size_type>sellSide;

public :
    OrderBook(void) = default; // default constructor
    std::string getString(const size_t &)const ;

    void modifySize(const price_type &,const  size_type&, const size_type&);
        // void modifySize(price_type, size_type, side_type);

    void setTimeStamp(const time_type&);

    bool checkBookConsistency(void);

};


