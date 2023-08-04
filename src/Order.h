#pragma once //

#include <iostream>
#include "utility.h"
// #include "Message.h"

class Order 
{
    id_type id = ID_DEFAULT;
    side_type side ;
    size_type size = SIZE_DEFAULT;
    price_type price = PRICE_DEFAULT;
    char mpid[5]= "";

public:
    Order() = default ;
    Order(id_type _id, side_type _side, size_type _size, price_type _price, const char*_mpid);

    void addSize(size_type size);

    id_type getId(void)const;
    side_type getSide(void) const ;
    size_type getSize(void) const;
    price_type getPrice(void) const;
    const char*getMPID(void) const;

    void print(void)const ;

    bool isEmpty(void)const;



};

