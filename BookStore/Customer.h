//
//  Customer.h
//  BookStore
//
//  Created by jintao on 14-10-23.
//  Copyright (c) 2014年 jintao. All rights reserved.
//

#ifndef __BookStore__Customer__
#define __BookStore__Customer__

#include <stdio.h>
#include <string>
#include <vector>
#include "Rental.h"

class Customer{
public:
    Customer(std::string name);
    void addRental(Rental* arg);
    std::string getName();
    std::string statement();
    double amountFor(Rental* rent);
    
private:
    std::string _name;
    std::vector<Rental*> *_vecRental;
    
};

#endif /* defined(__BookStore__Customer__) */
