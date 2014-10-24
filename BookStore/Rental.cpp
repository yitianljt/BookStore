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
    double result = 0.0;
    switch (getMovie()->getPriceCode()) {
        case REGULAR:
        {
            result+=2;
            if (getDaysRented() >2)
            {
                result+=(getDaysRented()-2)*1.5;
            }
            break;
        }
        case NEW_RELEASE:
        {
            result += getDaysRented()*3;
            break;
        }
        case CHILDRENS:
        {
            result+=1.5;
            if (getDaysRented()>3) {
                result += (getDaysRented()-3)*1.5;
            }
            break;
        }
        default:
            break;
    }
    return  result;
}