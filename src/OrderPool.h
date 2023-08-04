#pragma once

#include <unordered_map>
#include "utility.h"
#include "Order.h"

class OrderPool
{
    std::unordered_map<id_type, Order>pool;

public:
    OrderPool() = default;

    Order searchOrderPool(id_type);

    void addToOrderPool(id_type, bool , size_type, price_type, const char*);

    void modifyOrder(id_type, size_type);

    bool isEmpty(void) const;

    void printIds(void)const;    
};


