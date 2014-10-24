//
//  Rental.cpp
//  BookStore
//
//  Created by jintao on 14-10-23.
//  Copyright (c) 2014年 jintao. All rights reserved.
//

#include "Rental.h"


Rental::Rental(Movie* movie ,int daysRented)
{
    _movie = movie;
    _daysRental = daysRented;
}


Rental::~Rental()
{
    
}

int Rental::getDaysRented()
{
    return _daysRental;
}

Movie* Rental::getMovie()
{
    return  _movie;
}

double Rental::getCharge()
{
    return _movie->getCharge(_daysRental);
}

int Rental::getRenterPoints()
{
    if (getMovie()->getPriceCode() == NEW_RELEASE &&
        getDaysRented()>1) {
        return 2;
    }
    else
    {
        return 1;
    }
    
}